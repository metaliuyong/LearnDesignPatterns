cmake_minimum_required(VERSION 3.17)
project(FactoryMethodPattern)

set(CMAKE_CXX_STANDARD 20)

add_executable(FactoryMethodPattern main.cpp Reader.h JpgReader.cpp JpgReader.h PngReader.cpp PngReader.h GifReader.cpp GifReader.h ReaderFactory.h JpgReaderFactory.cpp JpgReaderFactory.h PngReaderFactory.cpp PngReaderFactory.h GifReaderFactory.cpp GifReaderFactory.h)