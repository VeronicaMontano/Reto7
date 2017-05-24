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
