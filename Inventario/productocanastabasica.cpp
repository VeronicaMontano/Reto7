#include "productocanastabasica.h"

ProductoCanastaBasica::ProductoCanastaBasica(): Producto()
{

}

ProductoCanastaBasica::ProductoCanastaBasica(QString codigo, QString nombre, int cantidad, int costoUnitario, QString categoria): Producto(codigo,nombre,cantidad, costoUnitario, categoria)
{

}

double ProductoCanastaBasica::iva(){
   return subTotal()*0.05;
}
