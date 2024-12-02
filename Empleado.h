//
// Created by logra on 02/12/2024.
//

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>
using namespace std;

class Empleado {
public:
    int id;
    string nombre;
    float sueldo;
    string horario;

    Empleado(int idEmpleado, string nombreEmpleado, float sueldoEmpleado, string horarioEmpleado);
    Empleado();
    void mostrarEmpleado();
};

#endif
