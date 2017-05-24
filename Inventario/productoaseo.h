#ifndef PRODUCTOASEO_H
#define PRODUCTOASEO_H
#include "producto.h"


class ProductoAseo : public Producto
{
public:
    ProductoAseo();
    ProductoAseo(QString codigo, QString nombre, int cantidad, int costoUnitario, QString categoria);
    double iva();
};

#endif // PRODUCTOASEO_H
