# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/server/oatpp/src/client_user

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/server/oatpp/src/client_user/build

# Include any dependencies generated for this target.
include CMakeFiles/websocket-client-test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/websocket-client-test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/websocket-client-test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/websocket-client-test.dir/flags.make

CMakeFiles/websocket-client-test.dir/test/tests.cpp.o: CMakeFiles/websocket-client-test.dir/flags.make
CMakeFiles/websocket-client-test.dir/test/tests.cpp.o: ../test/tests.cpp
CMakeFiles/websocket-client-test.dir/test/tests.cpp.o: CMakeFiles/websocket-client-test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/server/oatpp/src/client_user/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/websocket-client-test.dir/test/tests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/websocket-client-test.dir/test/tests.cpp.o -MF CMakeFiles/websocket-client-test.dir/test/tests.cpp.o.d -o CMakeFiles/websocket-client-test.dir/test/tests.cpp.o -c /root/server/oatpp/src/client_user/test/tests.cpp

CMakeFiles/websocket-client-test.dir/test/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/websocket-client-test.dir/test/tests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/server/oatpp/src/client_user/test/tests.cpp > CMakeFiles/websocket-client-test.dir/test/tests.cpp.i

CMakeFiles/websocket-client-test.dir/test/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/websocket-client-test.dir/test/tests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/server/oatpp/src/client_user/test/tests.cpp -o CMakeFiles/websocket-client-test.dir/test/tests.cpp.s

CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.o: CMakeFiles/websocket-client-test.dir/flags.make
CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.o: ../test/WSTest.cpp
CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.o: CMakeFiles/websocket-client-test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/server/oatpp/src/client_user/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.o -MF CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.o.d -o CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.o -c /root/server/oatpp/src/client_user/test/WSTest.cpp

CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/server/oatpp/src/client_user/test/WSTest.cpp > CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.i

CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/server/oatpp/src/client_user/test/WSTest.cpp -o CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.s

# Object files for target websocket-client-test
websocket__client__test_OBJECTS = \
"CMakeFiles/websocket-client-test.dir/test/tests.cpp.o" \
"CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.o"

# External object files for target websocket-client-test
websocket__client__test_EXTERNAL_OBJECTS =

websocket-client-test: CMakeFiles/websocket-client-test.dir/test/tests.cpp.o
websocket-client-test: CMakeFiles/websocket-client-test.dir/test/WSTest.cpp.o
websocket-client-test: CMakeFiles/websocket-client-test.dir/build.make
websocket-client-test: libwebsocket-client-lib.a
websocket-client-test: /usr/local/lib/oatpp-1.3.0/liboatpp-websocket.a
websocket-client-test: /usr/local/lib/oatpp-1.3.0/liboatpp-test.a
websocket-client-test: /usr/local/lib/oatpp-1.3.0/liboatpp.a
websocket-client-test: CMakeFiles/websocket-client-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/server/oatpp/src/client_user/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable websocket-client-test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/websocket-client-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/websocket-client-test.dir/build: websocket-client-test
.PHONY : CMakeFiles/websocket-client-test.dir/build

CMakeFiles/websocket-client-test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/websocket-client-test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/websocket-client-test.dir/clean

CMakeFiles/websocket-client-test.dir/depend:
	cd /root/server/oatpp/src/client_user/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/server/oatpp/src/client_user /root/server/oatpp/src/client_user /root/server/oatpp/src/client_user/build /root/server/oatpp/src/client_user/build /root/server/oatpp/src/client_user/build/CMakeFiles/websocket-client-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/websocket-client-test.dir/depend

