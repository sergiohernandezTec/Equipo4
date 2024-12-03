//
// Created by logra on 02/12/2024.
//

#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Factura.h"
#include "Reporte.h"
#include "Turno.h"

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
    void cambiarHorarioEmpleado();
    void despedirEmpleado();
    void registrarVenta();
    void generarFacturas();
    void generarReporte();
    void asignarTurno();
    void mostrarTurnos();
};


#endif //TIENDA_H
