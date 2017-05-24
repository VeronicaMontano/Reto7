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
