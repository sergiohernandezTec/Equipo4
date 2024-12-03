#include <iostream>
#include "Tienda.h"

using namespace std;

int main() {
    Tienda tienda;
    int opcion = 0;

    while (opcion != 10) {
        cout << "\n--- Menu de Tienda Departamental ---\n";
        cout << "1. Agregar Producto\n";
        cout << "2. Mostrar Productos\n";
        cout << "3. Buscar Producto por Categoría\n";
        cout << "4. Registrar Cliente\n";
        cout << "5. Listar Clientes\n";
        cout << "6. Buscar Cliente\n";
        cout << "7. Contratar Empleado\n";
        cout << "8. Listar Empleados\n";
        cout << "9. Registrar Venta\n";
        cout << "10. Mostrar Ventas\n";
        cout << "11. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            tienda.agregarProducto();
        } else if (opcion == 2) {
            tienda.mostrarProductos();
        } else if (opcion == 3) {
            tienda.buscarPorCategoria();
        } else if (opcion == 4) {
            tienda.agregarCliente();
        } else if (opcion == 5) {
            tienda.listarClientes();
        } else if (opcion == 6) {
            tienda.buscarCliente();
        } else if (opcion == 7) {
            tienda.contratarEmpleado();
        } else if (opcion == 8) {
            tienda.listarEmpleados();
        } else if (opcion == 9) {
            tienda.registrarVenta();
        } else if (opcion == 10) {
            tienda.mostrarVentas();
        } else if (opcion == 11) {
            cout << "Gracias por usar el sistema de la tienda. ¡Adios!\n";
            break;
        } else {
            cout << "Opción no válida. Intente de nuevo.\n";
        }
    }

    return 0;
}