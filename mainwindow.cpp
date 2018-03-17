#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "twonumber.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculate() {
    bool isaOK, isbOK;

    int a = ui->lineEditA->text().toInt(&isaOK);
    int b = ui->lineEditB->text().toInt(&isbOK);

    if(!isaOK){
        QMessageBox dlg;
        dlg.setText("Ошибка, недопустимое занчение в слоте числа A!");
        dlg.exec();
    }
    else if(!isbOK){
        QMessageBox dlg;
        dlg.setText("Ошибка, недопустимое занчение в слоте числа B!");
        dlg.exec();

    }
    else if(a<=0 || b<=0){
        QMessageBox dlg;
        dlg.setText("Ошибка, введеные значения отрицательны!");
        dlg.exec();
    }
    else if(a>=b){
        QMessageBox dlg;
        dlg.setText("Ошибка, число B больше или равно числа A!");
        dlg.exec();
    }
    else{
        for(int n: TwoNumber::getList(a, b)) {
            ui->listWidget->addItem(QString::number(n));
        }
    }

}
