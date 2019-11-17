cmake_minimum_required(VERSION 2.8.9)
project(neural_network_c++)

SET(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Bring the headers, such as Student.h into the project
include_directories(include)
include_directories(${PROJECT_SOURCE_DIR})
include_directories(lib)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")
file(GLOB EXTERNAL "lib/*.cpp")
set(CMAKE_BUILD_TYPE Debug)

add_executable(neural_network_c++ ${SOURCES} ${EXTERNAL})