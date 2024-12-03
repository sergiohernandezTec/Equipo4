#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

class Empleado:public Persona{
public:
    float sueldo;
    string horario;
    string area;
    Empleado(int idEmpleado, string nombreEmpleado, float sueldoEmpleado, string horarioEmpleado, string areaEmpleado);
    Empleado();
    void mostrarInformacion() override;
};

#endif
