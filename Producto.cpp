#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto(int idProducto, string nombreProducto, float precioProducto, int cantidadProducto, string categoriaProducto) {
    id = idProducto;
    nombre = nombreProducto;
    precio = precioProducto;
    cantidad = cantidadProducto;
    categoria = categoriaProducto;
}

Producto::Producto() {
    id = 0;
    nombre = "";
    precio = 0.0;
    cantidad = 0;
    categoria = "";
}

void Producto::mostrarProducto() {
    cout << "ID: " << id << ", Nombre: " << nombre
         << ", Precio: $" << precio << ", Cantidad: " << cantidad
         << ", Categoría: " << categoria << endl;
}
