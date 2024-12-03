#include "Turno.h"

Turno::Turno(int idTurnoAsignado, string horarioTurno) {
    idTurno = idTurnoAsignado;
    horario = horarioTurno;
}

void Turno::asignarEmpleado(Empleado empleado) {
    empleadosAsignados.push_back(empleado);
}

void Turno::mostrarTurno() {
    cout << "Turno ID: " << idTurno << ", Horario: " << horario << endl;
    cout << "Empleados Asignados:" << endl;
    for (Empleado empleado : empleadosAsignados) {
        empleado.mostrarInformacion();
    }
}