/*!
Adds all pending keyboard input to the internal buffer.   The
implementation uses ReadConsoleInput() which is a non-blocking function.
All non-keyboard events are ignored.
*/

#include "stdafx.h"
#include "ConsoleInputBuffer.h"

void
ConsoleInputBuffer::addPendingInputToBuffer(void)
{
	//
	// Read pending events
	//
	DWORD dwRead;
	INPUT_RECORD inRecords[128];
	::ReadConsoleInput(GetStdHandle(STD_INPUT_HANDLE), &inRecords[0], 128, &dwRead);
	//
	// Process the events
	//
	for (unsigned int i = 0; i < dwRead; ++i)
	{
		if (inRecords[i].EventType == KEY_EVENT)
		{
			// Key events include non-character keys like SHIFT.  Filter
			// these out.
			const KEY_EVENT_RECORD& evt = inRecords[i].Event.KeyEvent;
			const char c = evt.uChar.AsciiChar;
			if (evt.bKeyDown)
			{
				if (c != 0)
				{
					// Add to the buffer
					m_buffer += c;

					// Emulate the default behavior by echoing the typed characters
					std::cout << c;

					// Unfortunately since keyboard input is being handled manually
					// behavior such as backspace needs to be manually emulated.
					if (c == '\b')
					{
						HANDLE hStdOut = ::GetStdHandle(STD_OUTPUT_HANDLE);
						CONSOLE_SCREEN_BUFFER_INFO info;
						DWORD dwWritten;
						::GetConsoleScreenBufferInfo(hStdOut, &info);
						::WriteConsoleOutputCharacter(hStdOut, L" ", 1, info.dwCursorPosition, &dwWritten);
					}
				}
			}
		}
	}
}

/*!
Scan the buffer for a full line of input.  Return true if there
is a full line available.
*/
bool
ConsoleInputBuffer::readNextLineFromBuffer(std::string& line)
{
	size_t pos = m_buffer.find('\r');
	if (pos != std::string::npos)
	{
		// Split the buffer at the first line break.  Set the return value
		// to all text prior to that line break and leave the remaining
		// characters in the buffer.
		//
		line = m_buffer.substr(0, pos);
		m_buffer = m_buffer.substr(pos + 1, m_buffer.length() - (pos + 1));
		return true;
	}
	else
	{
		// No line break found.
		return false;
	}
}
bool
ConsoleInputBuffer::readLine(std::string& line)
{
	addPendingInputToBuffer();
	return readNextLineFromBuffer(line);
}

