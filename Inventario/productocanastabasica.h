/*
 * Nombre: Luz Carime   Lucumi      cod. 1667564
 *         Stiven Pinzon            cod. 1667614
 *         Veronica Montaño         cod. 1667570
 *         Alejandro Reyes          cod. 1667528
 *
 * Nombre documento:ProductoCanastaBasica.h
 * Fecha de realizacion:17-05-2016
 * Fecha de Ultima modificacion:24-05-2016
*/

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
