/*
 * Nombre: Luz Carime   Lucumi      cod. 1667564
 *         Stiven Pinzon            cod. 1667614
 *         Veronica Montaño         cod. 1667570
 *         Alejandro Reyes          cod. 1667528
 *
 * Nombre documento:Ventana.h
 * Fecha de realizacion:17-05-2016
 * Fecha de Ultima modificacion:24-05-2016
*/

#ifndef VENTANA_H
#define VENTANA_H

#include <QMainWindow>
#include "productocanastabasica.h"
#include "productoaseo.h"
#include "productogeneral.h"
#include <vector>
using std::vector;


namespace Ui {
class Ventana;
}

class Ventana : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ventana(QWidget *parent = 0);
    ~Ventana();

private slots:
    void on_objIngresar_clicked();

    void on_objListar_clicked();

private:
    Ui::Ventana *ui;
    vector<ProductoCanastaBasica*> listaCanastaBasica;
    vector<ProductoAseo*> listaAseo;
    vector<ProductoGeneral*> listaGeneral;
};

#endif // VENTANA_H
