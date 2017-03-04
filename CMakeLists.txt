cmake_minimum_required(VERSION 2.8.9)

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
project (mymodule)
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
project(a.out)
# to build executable target with name a.out
add_executable(${CMAKE_PROJECT_NAME} "main.c" ${LIB_SOURCES})

#
# Second project (test executable)
#
project(test.out)
add_executable(${CMAKE_PROJECT_NAME} "tests/main.c" ${LIB_SOURCES})

# Extra

# uncomment this to link libxml2 XML library
# target_link_libraries(${CMAKE_PROJECT_NAME} libxml2.so)

# uncomment this to link jansson JSON library
# target_link_libraries(${CMAKE_PROJECT_NAME} libjansson.so)

# uncomment to use libxml2 XML headers
# include_directories(/usr/include/libxml2)