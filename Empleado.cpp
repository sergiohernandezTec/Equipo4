//
// Created by Santiago on 02/12/2024.
//

#include "Empleado.h"
#include <iostream>
using namespace std;

Empleado::Empleado(int idEmpleado, string nombreEmpleado, float sueldoEmpleado, string horarioEmpleado) {
    id = idEmpleado;
    nombre = nombreEmpleado;
    sueldo = sueldoEmpleado;
    horario = horarioEmpleado;
}

Empleado::Empleado() {
    id = 0;
    nombre = "";
    sueldo = 0.0;
    horario = "";
}

void Empleado::mostrarEmpleado() {
    cout << "ID: " << id << ", Nombre: " << nombre
         << ", Sueldo: $" << sueldo << ", Horario: " << horario << endl;
}
