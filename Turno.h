#ifndef TURNO_H
#define TURNO_H

#include <vector>
#include <string>
#include "Empleado.h"
using namespace std;

class Turno {
public:
    int idTurno;
    string horario;
    vector<Empleado> empleadosAsignados;

    Turno(int idTurnoAsignado, string horarioTurno);
    void asignarEmpleado(Empleado empleado);
    void mostrarTurno();
};



#endif //TURNO_H