#ifndef TURNO_H
#define TURNO_H
using namespace std;
#include <string>
#include<vector>
#include <iostream>
#include "Empleado.h"

class Turno {
private:
    int idTurno;
    string horario;
    vector<Empleado> empleadosAsignados;
public:
    Turno(int idTurnoAsignado, string horarioTurno);
    void asignarEmpleado(Empleado empleado);
    void mostrarTurno();
};



#endif //TURNO_H
