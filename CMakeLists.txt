cmake_minimum_required(VERSION 3.28)
project(bst)

set(CMAKE_CXX_STANDARD 17)

add_executable(bst main.cpp
        Node.cpp
        Node.h
        BST.cpp
        BST.h)
