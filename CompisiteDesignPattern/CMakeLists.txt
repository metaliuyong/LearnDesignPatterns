cmake_minimum_required(VERSION 3.17)
project(CompisiteDesignPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(CompisiteDesignPattern main.cpp Node.cpp Node.h ChildNode.cpp ChildNode.h RootNode.cpp RootNode.h LeafNode.cpp LeafNode.h)