cmake_minimum_required(VERSION 3.2)

project(demo)

set(CMAKE_C_STANDARD 20)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS} -g -Wall -O2")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -O2")

file(GLOB_RECURSE DIR_SRCS
    ${PROJECT_SOURCE_DIR}/src/*.c
    ${PROJECT_SOURCE_DIR}/src/*.cc
    ${PROJECT_SOURCE_DIR}/src/*.cpp
)

add_executable(${PROJECT_NAME} ${DIR_SRCS})
