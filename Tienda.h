#ifndef TIENDA_H
#define TIENDA_H
#include <vector>
#include "Cliente.h"
#include "Empleado.h"
#include "Producto.h"
#include "Venta.h"
using namespace std;


class Tienda {
private:
    vector<Producto> productos;
    vector<Cliente> clientes;
    vector<Empleado> empleados;
    vector<Venta> ventas;
public:
    void agregarProducto();
    void mostrarProductos();
    void buscarPorCategoria();
    void agregarCliente();
    void listarClientes();
    void buscarCliente();
    void contratarEmpleado();
    void listarEmpleados();
    void registrarVenta();
    void mostrarVentas();
};



#endif