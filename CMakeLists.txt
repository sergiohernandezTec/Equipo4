cmake_minimum_required(VERSION 3.29)
project(ProyectoProgra)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ProyectoProgra
    Persona.cpp
    Persona.h
        Producto.h
        Producto.cpp
        "main (2).cpp"
        Factura.h
        Factura.cpp
Cliente.cpp
Cliente.h
Empleado.cpp
Empleado.h
Reporte.h
Reporte.cpp
Tienda.h
Tienda.cpp
Venta.h
Venta.cpp
Turno.h
Turno.cpp)

