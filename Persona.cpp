
#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(int idPersona, string nombrePersona) {
    id = idPersona;
    nombre = nombrePersona;
}

Persona::Persona() {
    id = 0;
    nombre = "";
}

void Persona::mostrarInformacion() {
    cout << "ID: " << id << ", Nombre: " << nombre << endl;
}
