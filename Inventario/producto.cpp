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
