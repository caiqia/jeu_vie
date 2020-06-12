#include "cellule.h"
#include "ui_cellule.h"
#include<QMessageBox>

Cellule::Cellule(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cellule)
{
    ui->setupUi(this);
}

Cellule::~Cellule()
{
    delete ui;
}

void Cellule::on_cm_clicked()
{
    QMessageBox mb;
    mb.setText("gfkyukfy");
    cm->setText("Pause");

}
