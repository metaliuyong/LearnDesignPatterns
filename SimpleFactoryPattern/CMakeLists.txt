cmake_minimum_required(VERSION 3.17)
project(SimpleFactoryPattern)

set(CMAKE_CXX_STANDARD 20)

add_executable(SimpleFactoryPattern main.cpp Shape.h Circle.cpp Circle.h Triangle.cpp Triangle.h ShapeFactory.cpp ShapeFactory.h Rectangle.cpp Rectangle.h)