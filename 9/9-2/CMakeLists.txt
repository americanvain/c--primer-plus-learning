cmake_minimum_required(VERSION 3.0)

string(REGEX REPLACE ".*/" "" CURRENT_NAME ${CMAKE_CURRENT_SOURCE_DIR})

project(${CURRENT_NAME} CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

#如果没有bin文件夹，会自动创建
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

aux_source_directory(. DIR_SRC)

add_executable(${PROJECT_NAME} ${DIR_SRC})
