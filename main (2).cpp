#include <iostream>
#include "Tienda.h"

using namespace std;

int main() {
    Tienda tienda;
    int opcion = 0;

    while (opcion != 13) {
        cout << "Menu de Tienda Departamental" << endl;
        cout << "1. Agregar Producto" << endl;
        cout << "2. Mostrar Productos" << endl;
        cout << "3. Registrar Cliente" << endl;
        cout << "4. Listar Clientes" << endl;
        cout << "5. Contratar Empleado" << endl;
        cout << "6. Listar Empleados" << endl;
        cout << "7. Registrar Venta" << endl;
        cout << "8. Generar Facturas" << endl;
        cout << "9. Generar Reporte de Ventas" << endl;
        cout << "10. Cambiar Horario de Empleado" << endl;
        cout << "11. Despedir Empleado" << endl;
        cout << "12. Mostrar Turnos" << endl;
        cout << "13. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            tienda.agregarProducto();
        } else if (opcion == 2) {
            tienda.mostrarProductos();
        } else if (opcion == 3) {
            tienda.registrarCliente();
        } else if (opcion == 4) {
            tienda.listarClientes();
        } else if (opcion == 5) {
            tienda.contratarEmpleado();
        } else if (opcion == 6) {
            tienda.listarEmpleados();
        } else if (opcion == 7) {
            tienda.registrarVenta();
        } else if (opcion == 8) {
            tienda.generarFacturas();
        } else if (opcion == 9) {
            tienda.generarReporte();
        } else if (opcion == 10) {
            tienda.cambiarHorarioEmpleado();
        } else if (opcion == 11) {
            tienda.despedirEmpleado();
        } else if (opcion == 12) {
            tienda.mostrarTurnos();
        } else if (opcion == 13) {
            cout << "Gracias por usar el sistema de la tienda." << endl;
        } else {
            cout << "Opción no válida. Intente nuevamente." << endl;
            cin.clear();
            cin.ignore();
        }
    }

    return 0;
}
