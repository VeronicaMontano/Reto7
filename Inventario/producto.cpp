/*
 * Nombre: Luz Carime   Lucumi      cod. 1667564
 *         Stiven Pinzon            cod. 1667614
 *         Veronica Montaño         cod. 1667570
 *         Alejandro Reyes          cod. 1667528
 *
 * Nombre documento:Producto.cpp
 * Fecha de realizacion:17-05-2016
 * Fecha de Ultima modificacion:24-05-2016
*/

#include "producto.h"

Producto::Producto()
{
    this->codigo="";
    this->nombre="";
    this->cantidad=0;
    this->costoUnitario=0;
    this->categoria="";

}

Producto::Producto(QString codigo, QString nombre, int cantidad, int costoUnitario, QString categoria)
{
    this->codigo=codigo;
    this->nombre=nombre;
    this->cantidad=cantidad;
    this->costoUnitario=costoUnitario;
    this->categoria=categoria;

}

QString Producto::getCodigo(){
    return codigo;
}

QString Producto::getNombre(){
    return nombre;
}

int Producto::getCantidad(){
    return cantidad;
}

int Producto::getCostoUnitario(){
    return costoUnitario;
}

QString Producto::getCategoria(){
    return categoria;
}

void Producto::setCodigo(QString codigo){
    this->codigo=codigo;
}

void Producto::setNombre(QString nombre){
    this->nombre=nombre;
}

void Producto::setCantidad(int cantidad){
    this->cantidad=cantidad;
}

void Producto::setCostoUnitario(int costoUnitario){
    this->costoUnitario=costoUnitario;
}

void Producto::setCategoria(QString categoria){
    this->categoria=categoria;
}

int Producto::subTotal(){
    return getCantidad()*getCostoUnitario();
}

double Producto:: iva(){
    return 0;
}

int Producto::Total(){
    return subTotal()+iva();
}
