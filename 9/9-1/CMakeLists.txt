cmake_minimum_required(VERSION 3.0)

#https://cmake.org/cmake/help/latest/command/string.html?highlight=regex#search-and-replace-with-regular-expressions
#通过正则表达式获得文件夹的名字
#还可以这么写string(REGEX REPLACE ".*/" "" CURRENT_FOLDER_NAME ${CMAKE_CURRENT_SOURCE_DIR})
string(REGEX REPLACE ".*/(.*)" "\\1" CURRENT_FOLDER_NAME ${CMAKE_CURRENT_SOURCE_DIR})

project(${CURRENT_FOLDER_NAME} CXX)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

aux_source_directory(. DIR_SRC)
aux_source_directory(./src DIR_SRC)

add_executable(${PROJECT_NAME} ${DIR_SRC})
