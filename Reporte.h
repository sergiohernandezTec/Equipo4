#ifndef REPORTE_H
#define REPORTE_H
#include <vector>
#include "Factura.h"
using namespace std;

class Reporte {
public:
    void generarReporteVentas(vector<Factura> facturas);
};



#endif //REPORTE_H
