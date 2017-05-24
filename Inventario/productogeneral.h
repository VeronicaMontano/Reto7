#ifndef PRODUCTOGENERAL_H
#define PRODUCTOGENERAL_H
#include "producto.h"


class ProductoGeneral: public Producto
{
public:
    ProductoGeneral();
    ProductoGeneral(QString codigo, QString nombre, int cantidad, int costoUnitario, QString categoria);
    double iva();
};

#endif // PRODUCTOGENERAL_H
