cmake_minimum_required(VERSION 3.25)
project(proj)

set(CMAKE_CXX_STANDARD 17)

add_executable(proj test.cpp norma/norma.cpp complex/complex.cpp vector/vector.cpp matrix/matrix.cpp)
