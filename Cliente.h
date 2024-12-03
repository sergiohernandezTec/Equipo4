#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"
#include <vector>
#include <string>
using namespace std;

class Cliente : public Persona {
public:
     string direccion;
    vector<string> historialCompras;
    vector<int> facturasAsociadas;

    Cliente(int idCliente, string nombreCliente, string direccionCliente);
    Cliente();
    void agregarCompra(string compra);
    void agregarFactura(int idFactura);
    void mostrarInformacion() override;
};



#endif //CLIENTE_H
