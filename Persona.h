#ifndef PERSONA_H
#define PERSONA_H
#include<string>
using namespace std;

class Persona {
public:
    Persona();
    int id;
    string nombre;
    Persona(int idPersona, string nombrePersona);

    virtual void mostrarInformacion();
    virtual ~Persona() = default;
};



#endif //PERSONA_H
