# Cmake configuration for PiDB
# Greg Stewart
# https://cmake.org/cmake/help/latest/guide/tutorial/index.html
# https://github.com/DevInCube/c-project-template/blob/master/CMakeLists.txt

cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")
link_libraries(gmp m)
#
# Common settings
#

# adds ./include to compiler include directories
include_directories(include)
# compiles code files from ./src folder
file(GLOB LIB_SOURCES "src/*.c")

#
# first project (static lib)
#
project (piDbLib VERSION 1.0)
# to build static library target with name libmtmodule.a
add_library(${CMAKE_PROJECT_NAME} STATIC ${LIB_SOURCES})

# to install library headers
install(
        DIRECTORY include/ DESTINATION /usr/local/include
        FILES_MATCHING PATTERN "*.h"
)
# Set the location for library installation
# Use "sudo make install" in build directory to apply
install(TARGETS ${CMAKE_PROJECT_NAME} DESTINATION /usr/local/lib)

#
# Second project (executable)
#
project(piDbCli VERSION 1.0)
# to build executable target with name a.out
add_executable(${CMAKE_PROJECT_NAME} "src/main.c" ${LIB_SOURCES})

#
# Second project (test executable)
#
#project(test.out)
#add_executable(${CMAKE_PROJECT_NAME} "tests/main.c" ${LIB_SOURCES})

# Extra

# uncomment this to link libxml2 XML library
# target_link_libraries(${CMAKE_PROJECT_NAME} libxml2.so)

# uncomment this to link jansson JSON library
# target_link_libraries(${CMAKE_PROJECT_NAME} libjansson.so)

# uncomment to use libxml2 XML headers
# include_directories(/usr/include/libxml2)