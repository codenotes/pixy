#Generated by VisualGDB (http://visualgdb.com)
#DO NOT EDIT THIS FILE MANUALLY UNLESS YOU ABSOLUTELY NEED TO
#USE VISUALGDB PROJECT PROPERTIES DIALOG INSTEAD

BINARYDIR := Debug

#Toolchain
CC := C:/frc/bin/arm-frc-linux-gnueabi-gcc.exe
CXX := C:/frc/bin/arm-frc-linux-gnueabi-g++.exe
LD := $(CXX)
AR := C:/frc/bin/arm-frc-linux-gnueabi-ar.exe
OBJCOPY := C:/frc/bin/arm-frc-linux-gnueabi-objcopy.exe

#Additional flags
PREPROCESSOR_MACROS := DEBUG ARM __LINUX__
INCLUDE_DIRS := c:/local/boost_1_57_0/ C:/lib/pixy/src/host/libpixyusb/include C:/lib/pixy/src/host/libpixyusb/src C:/lib/pixy/src/host/libpixyusb/src/util C:/lib/pixy/src/host/libpixyusb/include C:/lib/pixy/src/common C:/lib/pixy/src/host/windows/


LIBRARY_DIRS := 
LIBRARY_NAMES := 
ADDITIONAL_LINKER_INPUTS := 
MACOS_FRAMEWORKS := 
LINUX_PACKAGES := 

CFLAGS := -ggdb -ffunction-sections -O0
CXXFLAGS := -ggdb -ffunction-sections -O0
ASFLAGS := 
LDFLAGS := -Wl,-gc-sections
COMMONFLAGS := 

START_GROUP := -Wl,--start-group
END_GROUP := -Wl,--end-group

#Additional options detected from testing the toolchain
IS_LINUX_PROJECT := 1
