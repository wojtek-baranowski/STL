cmake_minimum_required(VERSION 3.5)


project(STL-examples CXX)



add_definitions(-std=c++1z -Wall -Wextra -Wpedantic -Werror -Wfatal-errors)

add_executable(array array.cpp) 
add_executable(vector vector.cpp) 
add_executable(vector2 vector2.cpp)
# add_executable(lists lists.cpp)
add_executable(seti seti.cpp)
add_executable(hash hash.cpp)
add_executable(iter1 iter1.cpp)
add_executable(functor functor.cpp)
add_executable(palin palin.cpp)
add_executable(modify modify.cpp)
add_executable(sort sort.cpp)

