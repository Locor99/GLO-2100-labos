cmake_minimum_required(VERSION 3.0)

project(helloworld)

add_executable(executable executable.cc)

add_library(useful useful.cc)

add_executable(executable2 executable2.cc)

target_link_libraries(executable2 useful)



# La librairie externe
# Pour le test

include_directories(mylib/include)

link_directories(mylib/lib)

add_executable(sometest sometest.cc)

target_link_libraries(sometest mylib)

add_executable(labo_1 labo_1.cpp)