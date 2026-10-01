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
    
    connect(ui->newFlashCardBTN, SIGNAL(clicked()), this, SLOT(on_newFlashCardBTN_Clicked()));
    connect(ui->newTopicBTN, SIGNAL(clicked()), this, SLOT(on_newTopicBTN_Clicked()));
    connect(ui->startBTN, SIGNAL(clicked()), this, SLOT(on_startBTN_Clicked()));

    return; 
}

MainWindow::~MainWindow()
{
    delete ui; 
}