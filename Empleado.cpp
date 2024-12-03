#include "Empleado.h"
#include <iostream>
using namespace std;

Empleado::Empleado(int idEmpleado, string nombreEmpleado, float sueldoEmpleado, string horarioEmpleado, string areaEmpleado)
    : Persona(idEmpleado, nombreEmpleado) {
    sueldo = sueldoEmpleado;
    horario = horarioEmpleado;
    area = areaEmpleado;
}

Empleado::Empleado() : Persona() {
    sueldo = 0.0;
    horario = "";
    area = "";
}

void Empleado::cambiarHorario(string nuevoHorario) {
    horario = nuevoHorario;
}

void Empleado::mostrarInformacion() {
    cout << "ID: " << id << ", Nombre: " << nombre
         << ", Sueldo: $" << sueldo << ", Horario: " << horario
         << ", Area: " << area << endl;
}
