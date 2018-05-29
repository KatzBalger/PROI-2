cmake_minimum_required(VERSION 3.5)
project(PROI_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    client.cpp
    client.h
    CMakeLists.txt
    currency.h
    interface.cpp
    interface.h
    main.cpp)

add_executable(PROI_2 ${SOURCE_FILES})