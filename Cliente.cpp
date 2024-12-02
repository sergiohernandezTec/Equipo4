//
// Created by logra on 02/12/2024.
//

#include "Cliente.h"

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
    cout << "Historial de Compras:" << endl;
    for (const string& compra : historialCompras) {
        cout << "  - " << compra << endl;
    }
}
