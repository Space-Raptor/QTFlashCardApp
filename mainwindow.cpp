#include"mainwindow.h"
#include "ui_mainwindow.h"
#include<QCoreApplication>
#include "FileDataManager.h"
#include "FileManager.h"

MainWindow::MainWindow()
    : QMainWindow()
    , ui(new Ui::MainWindow())
{
    filesystem::filemanager::LoadTopicNames(); 
    ui->setupUi(this);
    ui->topicListWidget->addItems(filesystem::filedatamanager::topic_names);
    return; 
}

MainWindow::~MainWindow()
{
    delete ui; 
}