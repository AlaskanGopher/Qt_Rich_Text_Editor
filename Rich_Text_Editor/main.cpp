#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w; // Creates Window

    w.show(); // Displays Window
    return a.exec();
}
