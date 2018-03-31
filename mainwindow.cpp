#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <lab3_prost.h>
MainWindow::MainWindow(QWidget * parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::calculate() {
    bool isaOK, isbOK;
    int a = ui->lineEditA->text().toInt(&isaOK);
    int b = ui->lineEditB->text().toInt(&isbOK);
    try {
        if(!isaOK) {
            throw std::invalid_argument("A must be an integer");
        } else if(!isbOK) {
            throw std::invalid_argument("B must be an integer");
        } else {
            for(int n : TwoNumber::getList(a, b)) {
                ui->listWidget->addItem(QString::number(n));
            }
        }
    } catch(std::exception const & e) {
        QMessageBox dlg;
        dlg.setText(e.what());
        dlg.exec();
    }
}
