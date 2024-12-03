//
// Created by logra on 02/12/2024.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cliente:public Persona{
public:
    string direccion;
    vector<string> historialCompras;

    Cliente(int idCliente, string nombreCliente, string direccionCliente);
    Cliente();
    void agregarCompra(string compra);
    void mostrarInformacion();
};

#endif
