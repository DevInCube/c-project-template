cmake_minimum_required(VERSION 2.8.9)
project (proj)
add_executable(proj main.c)

# adds ./include to compilers include directories
include_directories(include)

# uncomment to use libxml2 headers
# include_directories(/usr/include/libxml2)

# compiles code files from ./src folder
file(GLOB SOURCES "src/*.c")

# uncomment to link libxml2 library
# target_link_libraries(proj libxml2.so)