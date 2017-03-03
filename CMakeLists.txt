cmake_minimum_required(VERSION 2.8.9)
project (proj)
add_executable(proj main.c)

# adds ./include to compiler include directories
include_directories(include)

# uncomment to use libxml2 XML headers
# include_directories(/usr/include/libxml2)

# compiles code files from ./src folder
file(GLOB SOURCES "src/*.c")

# uncomment this to link libxml2 XML library
# target_link_libraries(proj libxml2.so)

# uncomment this to link jansson JSON library
# target_link_libraries(proj libjansson.so)