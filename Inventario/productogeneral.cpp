/*
 * Nombre: Luz Carime   Lucumi      cod. 1667564
 *         Stiven Pinzon            cod. 1667614
 *         Veronica Montaño         cod. 1667570
 *         Alejandro Reyes          cod. 1667528
 *
 * Nombre documento:ProductoGeneral.cpp
 * Fecha de realizacion:17-05-2016
 * Fecha de Ultima modificacion:24-05-2016
*/


#include "productogeneral.h"

ProductoGeneral::ProductoGeneral(): Producto()
{

}

ProductoGeneral::ProductoGeneral(QString codigo, QString nombre, int cantidad, int costoUnitario, QString categoria): Producto(codigo,nombre,cantidad, costoUnitario, categoria)
{

}

double ProductoGeneral::iva(){
    return subTotal()*0.19;
}
