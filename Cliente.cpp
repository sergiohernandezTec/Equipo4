#include "Cliente.h"
#include <iostream>
using namespace std;

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

void Cliente::agregarFactura(int idFactura) {
    facturasAsociadas.push_back(idFactura);
}

void Cliente::mostrarInformacion() {
    cout << "ID: " << id << ", Nombre: " << nombre << ", Direccion: " << direccion << endl;
    if (historialCompras.empty()) {
        cout << "Sin historial de compras." << endl;
    } else {
        cout << "Historial de Compras:" << endl;
        for (string compra : historialCompras) {
            cout << "- " << compra << endl;
        }
    }
     if (!facturasAsociadas.empty()) {
        cout << "Facturas Asociadas:" << endl;
        for (int factura : facturasAsociadas) {
            cout << "- Factura #" << factura << endl;
        }
    }
}
