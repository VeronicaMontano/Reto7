/*
 * Nombre: Luz Carime   Lucumi      cod. 1667564
 *         Stiven Pinzon            cod. 1667614
 *         Veronica Montaño         cod. 1667570
 *         Alejandro Reyes          cod. 1667528
 *
 * Nombre documento:Producto.h
 * Fecha de realizacion:17-05-2016
 * Fecha de Ultima modificacion:24-05-2016
*/

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <QString>



class Producto
{
protected:
    QString codigo;
    QString nombre;
    int cantidad;
    double costoUnitario;
    QString categoria;

public:
    Producto();
    Producto(QString codigo, QString nombre, int cantidad, int costoUnitario, QString categoria);

    QString getCodigo();
    QString getNombre();
    int getCantidad();
    int getCostoUnitario();
    QString getCategoria();

    void setCodigo(QString codigo);
    void setNombre(QString nombre);
    void setCantidad(int cantidad);
    void setCostoUnitario(int costoUnitario);
    void setCategoria(QString categoria);

    int subTotal();
    virtual double iva()=0;
    int Total();

};

#endif // PRODUCTO_H
