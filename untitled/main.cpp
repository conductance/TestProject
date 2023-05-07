#include "mainwindow.h"
#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    std::cout << "i am a test feature" << std::endl;
    MainWindow w;
    w.show();
    return a.exec();
}
