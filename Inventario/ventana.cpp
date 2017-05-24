#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ventana)
{
    ui->setupUi(this);
}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::on_objIngresar_clicked()
{
    QString codigo = ui->objCodigo->text();
    QString nombre=ui->objNombre->text();
    int cantidad=ui->objCantidad->text().toInt();
    int costoUnitario=ui->objCosto->text().toInt();

    QString categoria=ui->objCategoria->currentText();

    if ((categoria.compare("Basico"))==0){
        ProductoCanastaBasica *objCanastaBasica = new ProductoCanastaBasica(codigo, nombre, cantidad, costoUnitario, categoria);
        listaCanastaBasica.push_back(objCanastaBasica);
    }
    else{
        if ((categoria.compare("Aseo"))==0){
            ProductoAseo *objAseo = new ProductoAseo(codigo, nombre, cantidad, costoUnitario, categoria);
            listaAseo.push_back(objAseo);
        }
        else {
            if ((categoria.compare("General"))==0){
                ProductoGeneral *objGeneral = new ProductoGeneral(codigo, nombre, cantidad, costoUnitario, categoria);
                listaGeneral.push_back(objGeneral);
            }
        }

    }

    ui->objCodigo->setText("");
    ui->objNombre->setText("");
    ui->objCantidad->setText("");
    ui->objCosto->setText("");
    ui->objCategoria->setCurrentIndex(0);


}



void Ventana::on_objListar_clicked()
{
    QString salida="Codigo\tNombre\tCategoria\tUnidades\tCosto Unitario\tSubtotal\tIva\tTotal\n\n";

    for (int i=0; i<(int)listaCanastaBasica.size(); i++){
        salida+=listaCanastaBasica[i]->getCodigo();
        salida+="\t";
        salida+=listaCanastaBasica[i]->getNombre();
        salida+="\t";
        salida+=listaCanastaBasica[i]->getCategoria();
        salida+="\t";
        salida+=QString::number(listaCanastaBasica[i]->getCantidad());
        salida+="\t";
        salida+=QString::number(listaCanastaBasica[i]->getCostoUnitario());
        salida+="\t\t";
        salida+=QString::number(listaCanastaBasica[i]->subTotal());
        salida+="\t";
        salida+=QString::number(listaCanastaBasica[i]->iva());
        salida+="\t";
        salida+=QString::number(listaCanastaBasica[i]->Total());
        salida+="\n";
    }

    for (int i=0; i<(int)listaAseo.size(); i++){
        salida+=listaAseo[i]->getCodigo();
        salida+="\t";
        salida+=listaAseo[i]->getNombre();
        salida+="\t";
        salida+=listaAseo[i]->getCategoria();
        salida+="\t";
        salida+=QString::number(listaAseo[i]->getCantidad());
        salida+="\t";
        salida+=QString::number(listaAseo[i]->getCostoUnitario());
        salida+="\t\t";
        salida+=QString::number(listaAseo[i]->subTotal());
        salida+="\t";
        salida+=QString::number(listaAseo[i]->iva());
        salida+="\t";
        salida+=QString::number(listaAseo[i]->Total());
        salida+="\n";
    }

    for (int i=0; i<(int)listaGeneral.size(); i++){
        salida+=listaGeneral[i]->getCodigo();
        salida+="\t";
        salida+=listaGeneral[i]->getNombre();
        salida+="\t";
        salida+=listaGeneral[i]->getCategoria();
        salida+="\t";
        salida+=QString::number(listaGeneral[i]->getCantidad());
        salida+="\t";
        salida+=QString::number(listaGeneral[i]->getCostoUnitario());
        salida+="\t\t";
        salida+=QString::number(listaGeneral[i]->subTotal());
        salida+="\t";
        salida+=QString::number(listaGeneral[i]->iva());
        salida+="\t";
        salida+=QString::number(listaGeneral[i]->Total());
        salida+="\n";
    }



    ui->objSalida->setText(salida);
}
