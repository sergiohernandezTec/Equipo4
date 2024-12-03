cmake_minimum_required(VERSION 3.29)
project(ProyectoProgra)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ProyectoProgra
    Persona.cpp
    Persona.h
        Producto.h
        Producto.cpp)

