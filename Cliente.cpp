//
// Created by Santiago on 02/12/2024.
//

#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente(int idCliente, string nombreCliente, string direccionCliente) {
    id = idCliente;
    nombre = nombreCliente;
    direccion = direccionCliente;
}

Cliente::Cliente() {
    id = 0;
    nombre = "";
    direccion = "";
}

void Cliente::agregarCompra(string compra) {
    historialCompras.push_back(compra);
}

void Cliente::mostrarCliente() {
    cout << "ID: " << id << ", Nombre: " << nombre << ", Dirección: " << direccion << endl;
    cout << "Historial de Compras:\n";
    for (int i = 0; i < historialCompras.size(); i++) {
        cout << "  - " << historialCompras[i] << endl;
    }
}
