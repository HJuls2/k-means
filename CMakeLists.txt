cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        utils/Point.h
        utils/Point.cpp
        utils/KMeansAlgorithm.h
        sequential/SequentialKMeansAlgorithm.h
        sequential/SequentialKMeansAlgorithm.cpp)
