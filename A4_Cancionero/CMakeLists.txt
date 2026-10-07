cmake_minimum_required(VERSION 4.3)
project(A4_Cancionero)

set(CMAKE_CXX_STANDARD 20)

add_executable(A4_Cancionero main.cpp
        Cancion.cpp
        Cancion.h
        funciones.cpp
        funciones.h)
