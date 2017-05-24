#include "productoaseo.h"

ProductoAseo::ProductoAseo(): Producto()
{

}

ProductoAseo::ProductoAseo(QString codigo, QString nombre, int cantidad, int costoUnitario, QString categoria): Producto(codigo, nombre, cantidad,costoUnitario,categoria)
{

}


double ProductoAseo::iva(){
    return subTotal()*0.01;
}
