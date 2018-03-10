#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "twonumber.h"
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
    int a = ui->lineEditA->text().toInt();
    int b = ui->lineEditB->text().toInt();
    for(int n: TwoNumber::getList(a, b)) {
        ui->listWidget->addItem(QString::number(n));
    }
}
