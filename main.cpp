#include<iostream>
#include"mainwindow.h"
#include <QApplication>
#include<QTWidgets>
int main(int argc, char* argv[])
{
    QApplication a (argc, argv);
    MainWindow w; 
    w.show();  
    return a.exec(); 
}
