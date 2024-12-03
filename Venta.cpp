#include "Venta.h"
Venta::Venta(string clienteVenta, string productoVenta, int cantidadVenta, float totalVenta) {
    cliente = clienteVenta;
    producto = productoVenta;
    cantidad = cantidadVenta;
    total = totalVenta;
}
void Venta::mostrarVenta(){
    cout << "Cliente: " << cliente << ", Producto: " << producto
         << ", Cantidad: " << cantidad << ", Total: $" << total << endl;
}