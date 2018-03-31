#include "mainwindow.h"
#include <QApplication>
#include <lab3_prost.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
