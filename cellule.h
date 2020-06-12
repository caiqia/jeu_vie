#ifndef CELLULE_H
#define CELLULE_H

#include <QMainWindow>
#include<QPushButton>

namespace Ui {
class Cellule;
}

class Cellule : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cellule(QWidget *parent = 0);
    ~Cellule();
private slots:
    void on_cm_clicked();

private:
    Ui::Cellule *ui;
    QPushButton*cm;
    QPushButton*te;

};

#endif // CELLULE_H
