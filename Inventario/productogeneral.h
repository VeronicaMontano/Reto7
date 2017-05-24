/*
 * Nombre: Luz Carime   Lucumi      cod. 1667564
 *         Stiven Pinzon            cod. 1667614
 *         Veronica Montaño         cod. 1667570
 *         Alejandro Reyes          cod. 1667528
 *
 * Nombre documento:ProductoGeneral.h
 * Fecha de realizacion:17-05-2016
 * Fecha de Ultima modificacion:24-05-2016
*/

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
