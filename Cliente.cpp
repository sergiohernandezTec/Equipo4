//
// Created by logra on 02/12/2024.
//

#include "Cliente.h"

Cliente::Cliente(int idCliente, string nombreCliente, string direccionCliente)
        : Persona(idCliente, nombreCliente) {
    direccion = direccionCliente;
}

Cliente::Cliente() : Persona() {
    direccion = "";
}

void Cliente::agregarCompra(string compra) {
    historialCompras.push_back(compra);
}

void Cliente::mostrarInformacion(){
    cout << "ID: " << id << ", Nombre: " << nombre << ", Dirección: " << direccion << endl;
    if (historialCompras.empty()) {
        cout << "Sin historial de compras." << endl;
    } else {
        cout << "Historial de Compras:" << endl;
        for (string compra : historialCompras) {
            cout << "- " << compra << endl;
        }
    }
}
