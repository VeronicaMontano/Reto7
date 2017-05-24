/*
 * Nombre: Luz Carime   Lucumi      cod. 1667564
 *         Stiven Pinzon            cod. 1667614
 *         Veronica Montaño         cod. 1667570
 *         Alejandro Reyes          cod. 1667528
 *
 * Nombre documento:ProductoAseo.h
 * Fecha de realizacion:17-05-2016
 * Fecha de Ultima modificacion:24-05-2016
*/

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
