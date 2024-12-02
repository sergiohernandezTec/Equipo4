#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {
public:
    int id;
    string nombre;
    float precio;
    int cantidad;
    string categoria;

    Producto(int idProducto, string nombreProducto, float precioProducto, int cantidadProducto, string categoriaProducto);
    Producto();
    void mostrarProducto();
};
#endif //PRODUCTO_H
