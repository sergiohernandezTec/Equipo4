#include "Tienda.h"
#include <iostream>
using namespace std;

void Tienda::agregarProducto() {
        int id, cantidad;
        float precio;
        string nombre, categoria;

        cout << "Ingrese el ID del producto: ";
        cin >> id;
        cin.ignore();
        cout << "Ingrese el nombre del producto: ";
        getline(cin, nombre);
        cout << "Ingrese el precio del producto: ";
        cin >> precio;
        cout << "Ingrese la cantidad del producto: ";
        cin >> cantidad;
        cin.ignore();
        cout << "Ingrese la categoría del producto: ";
        getline(cin, categoria);

        productos.push_back(Producto(id, nombre, precio, cantidad, categoria));
        cout << "Producto agregado correctamente." << endl;
    }

    void Tienda::mostrarProductos() {
        if (productos.empty()) {
            cout << "No hay productos registrados." << endl;
            return;
        }
        cout << "Lista de productos:" << endl;
        for (Producto producto : productos) {
            producto.mostrarProducto();
        }
    }

    void Tienda::registrarCliente() {
        int id;
        string nombre, direccion;

        cout << "Ingrese el ID del cliente: ";
        cin >> id;
        cin.ignore();
        cout << "Ingrese el nombre del cliente: ";
        getline(cin, nombre);
        cout << "Ingrese la dirección del cliente: ";
        getline(cin, direccion);

        clientes.push_back(Cliente(id, nombre, direccion));
        cout << "Cliente registrado correctamente." << endl;
    }

    void Tienda::listarClientes() {
        if (clientes.empty()) {
            cout << "No hay clientes registrados." << endl;
            return;
        }
        cout << "Lista de clientes:" << endl;
        for (Cliente cliente : clientes) {
            cliente.mostrarInformacion();
        }
    }

    void Tienda::contratarEmpleado() {
        int id;
        string nombre, horario, area;
        float sueldo;

        cout << "Ingrese el ID del empleado: ";
        cin >> id;
        cin.ignore();
        cout << "Ingrese el nombre del empleado: ";
        getline(cin, nombre);
        cout << "Ingrese el sueldo del empleado: ";
        cin >> sueldo;
        cin.ignore();
        cout << "Ingrese el horario del empleado: ";
        getline(cin, horario);
        cout << "Ingrese el área del empleado: ";
        getline(cin, area);

        empleados.push_back(Empleado(id, nombre, sueldo, horario, area));
        cout << "Empleado contratado correctamente." << endl;
    }

    void Tienda::listarEmpleados() {
        if (empleados.empty()) {
            cout << "No hay empleados registrados." << endl;
            return;
        }
        cout << "Lista de empleados:" << endl;
        for (Empleado empleado : empleados) {
            empleado.mostrarInformacion();
        }
    }

    void Tienda::registrarVenta() {
        string nombreProducto, nombreCliente;
        int cantidad;

        cin.ignore();
        cout << "Ingrese el nombre del producto: ";
        getline(cin, nombreProducto);
        cout << "Ingrese la cantidad a comprar: ";
        cin >> cantidad;
        cin.ignore();
        cout << "Ingrese el nombre del cliente: ";
        getline(cin, nombreCliente);

        for (Producto& producto : productos) {
            if (producto.nombre == nombreProducto) {
                if (producto.cantidad >= cantidad) {
                    float total = producto.precio * cantidad;
                    producto.cantidad -= cantidad;

                    for (Cliente& cliente : clientes) {
                        if (cliente.nombre == nombreCliente) {
                            cliente.agregarCompra(nombreProducto + " x" + to_string(cantidad));

                            Venta nuevaVenta(nombreCliente, nombreProducto, cantidad, total);
                            if (facturas.empty() || facturas.back().cliente != nombreCliente) {
                                facturas.push_back(Factura(idFactura++, nombreCliente));
                            }
                            facturas.back().agregarVenta(nuevaVenta);

                            cout << "Venta registrada por $" << total << "." << endl;
                            return;
                        }
                    }
                    cout << "Cliente no encontrado." << endl;
                    return;
                } else {
                    cout << "Stock insuficiente." << endl;
                    return;
                }
            }
        }
        cout << "Producto no encontrado." << endl;
    }

    void Tienda::generarFacturas() {
        if (facturas.empty()) {
            cout << "No hay facturas generadas." << endl;
            return;
        }
        for (Factura factura : facturas) {
            factura.mostrarFactura();
            cout << "------------------------" << endl;
        }
    }

    void Tienda::generarReporte() {
        Reporte reporte;
        reporte.generarReporteVentas(facturas);
    }

    void Tienda::asignarTurno() {
        int idTurno;
        string horario;
        cout << "Ingrese el ID del turno: ";
        cin >> idTurno;
        cin.ignore();
        cout << "Ingrese el horario del turno: ";
        getline(cin, horario);

        Turno nuevoTurno(idTurno, horario);
        for (Empleado empleado : empleados) {
            nuevoTurno.asignarEmpleado(empleado);
        }

        turnos.push_back(nuevoTurno);
        cout << "Turno asignado correctamente." << endl;
    }

    void Tienda::mostrarTurnos() {
        if (turnos.empty()) {
            cout << "No hay turnos asignados." << endl;
            return;
        }
        for (Turno turno : turnos) {
            turno.mostrarTurno();
            cout << "------------------------" << endl;
        }
    }