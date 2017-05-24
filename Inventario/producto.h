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
