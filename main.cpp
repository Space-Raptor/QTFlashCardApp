#include <iostream>
#include "mainwindow.h"
#include <QApplication>
#include <QTWidgets>
#include "FileManager.h"
int main(int argc, char* argv[])
{
    filesystem::filemanager::SetUp();
    
    QApplication a (argc, argv);
    MainWindow w; 
    w.show();  

    return a.exec(); 
}
