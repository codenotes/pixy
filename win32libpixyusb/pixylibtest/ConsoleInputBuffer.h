class ConsoleInputBuffer
{
public:
	bool    readLine(std::string& line);
protected:
	void    addPendingInputToBuffer(void);
	bool    readNextLineFromBuffer(std::string& line);

	std::string m_buffer;
};