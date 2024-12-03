#include "Factura.h"
Factura::Factura(int idFacturaGenerada, string clienteFactura) {
    idFactura = idFacturaGenerada;
    cliente = clienteFactura;
}

void Factura::agregarVenta(Venta venta) {
    ventas.push_back(venta);
}

void Factura::mostrarFactura() {
    cout << "Factura #" << idFactura << ", Cliente: " << cliente << endl;
    cout << "Detalle de Ventas:" << endl;
    float totalGeneral = 0.0;
    for (Venta venta : ventas) {
        venta.mostrarVenta();
        totalGeneral += venta.total;
    }
    cout << "Total General: $" << totalGeneral << endl;
}