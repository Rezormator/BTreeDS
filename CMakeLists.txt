cmake_minimum_required(VERSION 3.28)
project(test)

set(CMAKE_CXX_STANDARD 20)

add_executable(test main.cpp
        Utils.h
        DataUnit/DataUnit.h
        DataUnit/DataUnit.cpp
        BTreeNode/BTreeNode.h
        BTreeNode/BTreeNode.cpp
        BTree/BTree.h
        BTree/BTree.cpp)
