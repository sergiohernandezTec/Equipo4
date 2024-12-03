#ifndef VENTA_H
#define VENTA_H

#include <string>
#include <iostream>
using namespace std;

class Venta {
public:
    string cliente;
    string producto;
    int cantidad;
    float total;
    Venta(string clienteVenta, string productoVenta, int cantidadVenta, float totalVenta);
    void mostrarVenta();
};
#endif //VENTA_H
