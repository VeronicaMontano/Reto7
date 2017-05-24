#ifndef PRODUCTOCANASTABASICA_H
#define PRODUCTOCANASTABASICA_H
#include "producto.h"


class ProductoCanastaBasica: public Producto
{
public:
    ProductoCanastaBasica();
    ProductoCanastaBasica(QString codigo, QString nombre, int cantidad, int costoUnitario, QString categoria);
    double iva();
};

#endif // PRODUCTOCANASTABASICA_H
