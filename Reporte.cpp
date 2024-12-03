//
// Created by logra on 02/12/2024.
//

#include "Reporte.h"
#include <iostream>
using namespace std;

void Reporte::generarReporteVentas(vector<Factura> facturas) {
    float totalVentas = 0.0;
    cout << "Reporte de Ventas:" << endl;
    for (Factura factura : facturas) {
        cout << "Factura #" << factura.idFactura << ", Cliente: " << factura.cliente << endl;
        for (Venta venta : factura.ventas) {
            cout << "- Producto: " << venta.producto << ", Cantidad: " << venta.cantidad
                 << ", Total: $" << venta.total << endl;
            totalVentas += venta.total;
        }
    }
    cout << "Total de Ventas: $" << totalVentas << endl;
}
