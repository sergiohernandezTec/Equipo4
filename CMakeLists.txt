cmake_minimum_required(VERSION 3.29.6)
project(Equipo4)

set(CMAKE_CXX_STANDARD 20)

add_executable(Equipo4 main.cpp
        Tienda.cpp
        Tienda.h
        Cliente.cpp
        Cliente.h
        Empleado.cpp
        Empleado.h)
