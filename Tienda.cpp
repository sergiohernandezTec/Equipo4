#include "Tienda.h"
#include <iostream>
using namespace std;

void Tienda::agregarProducto() {
    Producto nuevoProducto;
    cout << "Ingrese el ID del producto: ";
    cin >> nuevoProducto.id;
    cin.ignore();
    cout << "Ingrese el nombre del producto: ";
    getline(cin, nuevoProducto.nombre);
    cout << "Ingrese el precio del producto: ";
    cin >> nuevoProducto.precio;
    cout << "Ingrese la cantidad del producto: ";
    cin >> nuevoProducto.cantidad;
    cin.ignore();
    cout << "Ingrese la categoría del producto: ";
    getline(cin, nuevoProducto.categoria);

    productos.push_back(nuevoProducto);
    cout << "Producto agregado correctamente.\n";
}

void Tienda::mostrarProductos() {
    cout << "Lista de productos:\n";
    for (size_t i = 0; i < productos.size(); i++) {
        productos[i].mostrarProducto();
    }
}
void Tienda::buscarPorCategoria() {
    string categoria;
    cin.ignore();
    cout << "Ingrese la categoría a buscar: ";
    getline(cin, categoria);

    cout << "Productos en la categoría " << categoria << ":\n";
    for (size_t i = 0; i < productos.size(); i++) {
        if (productos[i].categoria == categoria) {
            productos[i].mostrarProducto();
        }
    }
}

void Tienda::agregarCliente() {
    Cliente nuevoCliente;
    cout << "Ingrese el ID del cliente: ";
    cin >> nuevoCliente.id;
    cin.ignore();
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nuevoCliente.nombre);
    cout << "Ingrese la dirección del cliente: ";
    getline(cin, nuevoCliente.direccion);

    clientes.push_back(nuevoCliente);
    cout << "Cliente agregado correctamente.\n";
}

void Tienda::listarClientes() {
    cout << "Lista de clientes:\n";
    for (size_t i = 0; i < clientes.size(); i++) {
        clientes[i].mostrarCliente();
    }
}

void Tienda::buscarCliente() {
    int id;
    cout << "Ingrese el ID del cliente a buscar: ";
    cin >> id;

    for (size_t i = 0; i < clientes.size(); i++) {
        if (clientes[i].id == id) {
            clientes[i].mostrarCliente();
            return;
        }
    }
    cout << "Cliente no encontrado.\n";
}

void Tienda::contratarEmpleado() {
    Empleado nuevoEmpleado;
    cout << "Ingrese el ID del empleado: ";
    cin >> nuevoEmpleado.id;
    cin.ignore();
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, nuevoEmpleado.nombre);
    cout << "Ingrese el sueldo del empleado: ";
    cin >> nuevoEmpleado.sueldo;
    cin.ignore();
    cout << "Ingrese el horario del empleado: ";
    getline(cin, nuevoEmpleado.horario);

    empleados.push_back(nuevoEmpleado);
    cout << "Empleado contratado correctamente.\n";
}
void Tienda::listarEmpleados() {
    cout << "Lista de empleados:\n";
    for (size_t i = 0; i < empleados.size(); i++) {
        empleados[i].mostrarEmpleado();
    }
}

void Tienda::registrarVenta() {
    string nombreProducto, clienteNombre;
    int cantidad;
    cout << "Ingrese el nombre del producto: ";
    cin.ignore();
    getline(cin, nombreProducto);
    cout << "Ingrese la cantidad a comprar: ";
    cin >> cantidad;
    cout << "Ingrese el nombre del cliente: ";
    cin.ignore();
    getline(cin, clienteNombre);

    for (size_t i = 0; i < productos.size(); i++) {
        if (productos[i].nombre == nombreProducto) {
            if (productos[i].cantidad >= cantidad) {
                float total = cantidad * productos[i].precio;
                productos[i].cantidad -= cantidad;

                ventas.push_back(Venta(nombreProducto, cantidad, total, clienteNombre));

                for (size_t j = 0; j < clientes.size(); j++) {
                    if (clientes[j].nombre == clienteNombre) {
                        clientes[j].agregarCompra(nombreProducto + " x" + to_string(cantidad));
                        break;
                    }
                }

                cout << "Venta registrada: $" << total << endl;
                return;
            } else {
                cout << "Inventario insuficiente.\n";
                return;
            }
        }
    }
    cout << "Producto no encontrado.\n";
}

void Tienda::mostrarVentas() {
    cout << "Lista de ventas:\n";
    for (size_t i = 0; i < ventas.size(); i++) {
        ventas[i].mostrarVenta();
    }
}