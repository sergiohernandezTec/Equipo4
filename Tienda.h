#ifndef TIENDA_H
#define TIENDA_H
#include <vector>
#include "Cliente.h"
#include "Empleado.h"
#include "Producto.h"
#include "Factura.h"
#include "Turno.h"
#include "Reporte.h"
using namespace std;


class Tienda {
private:
    vector<Producto> productos;
    vector<Cliente> clientes;
    vector<Empleado> empleados;
    vector<Factura> facturas;
    vector<Turno> turnos;
    int idFactura = 1;
public:
    void agregarProducto();
    void mostrarProductos();
    void registrarCliente();
    void listarClientes();
    void contratarEmpleado();
    void listarEmpleados();
    void registrarVenta();
    void generarFacturas();
    void generarReporte();
    void asignarTurno();
    void mostrarTurnos();
};



#endif