#include"mainwindow.h"
#include "ui_mainwindow.h"
#include<QCoreApplication>



MainWindow::MainWindow()
    : QMainWindow()
    , ui(new Ui::MainWindow())
{
    ui->setupUi(this);
    return; 
}

MainWindow::~MainWindow()
{
    delete ui; 
}