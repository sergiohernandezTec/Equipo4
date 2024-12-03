#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
public:
    int id;
    string nombre;

    Persona(int idPersona, string nombrePersona);
    Persona();
    virtual void mostrarInformacion();

};



#endif //PERSONA_H
