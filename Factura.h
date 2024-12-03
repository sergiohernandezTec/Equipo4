
#ifndef FACTURA_H
#define FACTURA_H
#include <string>
#include <vector>
#include "Venta.h"
using namespace std;

class Factura {
public:
    int idFactura;
    string cliente;
    vector<Venta>ventas;
    Factura(int idFacturaGenerada, string clienteFactura);
    void agregarVenta(Venta venta);
    void mostrarFactura();
};



#endif //FACTURA_H
