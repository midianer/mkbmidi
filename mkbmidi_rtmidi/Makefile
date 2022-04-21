##CXX = clang++
CC_FLAGS = -Wfatal-errors -Wall -Wextra
CC_FLAGS = -Wfatal-errors -g
LD_FLAGS = -g -lasound -lpthread

# Final binary
BIN = mkbmidi
# Put all auto generated stuff to this build dir.
BUILD_DIR = ./build
# List of all .cpp source files.
SRCS = $(wildcard *.c)

SRCS_CPP = rtmidi_wrp.cpp rtmidi/RtMidi.cpp
SRCS_CPP_OBJ = $(BUILD_DIR)/rtmidi_wrp.o $(BUILD_DIR)/RtMidi.o 

# All .o files go to build dir.
OBJ = $(SRCS:%.c=$(BUILD_DIR)/%.o)
# Gcc/Clang will create these .d files containing dependencies.
DEP = $(OBJ:%.o=%.d)

# Default target named after the binary.
$(BIN) : $(BUILD_DIR)/$(BIN)

# Actual target of the binary - depends on all .o files.
$(BUILD_DIR)/$(BIN) : $(OBJ) $(SRCS_CPP_OBJ)
	# Create build directories - same structure as sources.
	mkdir -p $(@D)
	# Just link all the object files.
	g++ $^ $(LD_FLAGS) -o $@
	##$(CC) $^ $(LD_FLAGS) -o $@

# Include all .d files
-include $(DEP)

# Build target for every single object file.
# The potential dependency on header files is covered
# by calling `-include $(DEP)`.
$(BUILD_DIR)/%.o : %.c
	mkdir -p $(@D)
	# The -MMD flags additionaly creates a .d file with
	# the same name as the .o file.
	$(CC) $(CC_FLAGS) -MMD -c $< -o $@

.PHONY : clean
clean :
	# This should remove all generated files.
	-rm $(BUILD_DIR)/$(BIN) $(OBJ) $(SRCS_CPP_OBJ) $(DEP)

$(BUILD_DIR)/rtmidi_wrp.o : rtmidi_wrp.cpp
	g++ -I../rtmidi -Wall -D__LINUX_ALSA__ -g -c $< -o $@

$(BUILD_DIR)/RtMidi.o : ../rtmidi/RtMidi.cpp
	g++ -I../rtmidi -Wall -D__LINUX_ALSA__ -g -c $< -o $@


run:
#/bin/bash

# cd ~/gk_admin/pythonmidi/mididings_crepuscule/mididings-setup/

	xfce4-terminal -e 'build/mkbmidi'
	xfce4-terminal -e 'python /home/guenter/gk_admin/Python/python_rtmidi/rtmidi_mididings/scene_ctrl.py'
	sleep 2
	aconnect 'SceneCtrl':'SceneCtrl_Port0' 'MKBClient':'MKBin'

##python ex4.py &
##sleep 2
##aconnect 28:0 128:0 && aconnect 128:1 28:0 && aconnect -l
##aconnect 128:3 28:0 && aconnect -l 
##pgrep "python"
##livedings &
##
##
##
####aconnect 'Teensy MIDIx4':'Teensy MIDIx4 MIDI 1' 'Teensy MIDIx4':'Teensy MIDIx4 MIDI 2'
##






##
##
##
##all: 
##SRCS := $(wildcard *.c)
##
##DEPDIR := .deps
##DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.d
##
##COMPILE.c = $(CC) $(DEPFLAGS) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
##
##%.o : %.c
##%.o : %.c $(DEPDIR)/%.d | $(DEPDIR)
##	$(COMPILE.c) $(OUTPUT_OPTION) $<
##
##$(DEPDIR): ; @mkdir -p $@
##
##DEPFILES := $(SRCS:%.c=$(DEPDIR)/%.d)
##$(DEPFILES):
##
##include $(wildcard $(DEPFILES))
##
