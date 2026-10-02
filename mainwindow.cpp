#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include "FileDataManager.h"
#include "FileManager.h"
#include <QDir>
#include <QInputDialog>
#include <QErrorMessage>

MainWindow::MainWindow()
    : QMainWindow()
    , ui(new Ui::MainWindow())
{ 
    
    ui->setupUi(this);
    
    set_list_items(); 
    connect(ui->newFlashCardBTN, SIGNAL(clicked()), this, SLOT(on_newFlashCardBTN_Clicked()));
    connect(ui->newTopicBTN, SIGNAL(clicked()), this, SLOT(on_newTopicBTN_Clicked()));
    connect(ui->startBTN, SIGNAL(clicked()), this, SLOT(on_startBTN_Clicked()));

    return; 
}

MainWindow::~MainWindow()
{
    delete ui; 
}

void MainWindow:: on_newFlashCardBTN_Clicked()
{
    qInfo() << "working";
}

void MainWindow:: on_newTopicBTN_Clicked()
{
    QDir pathDir(filesystem::filemanager::data_directory);
    bool ok; 
    QString text = QInputDialog::getText(this, "Enter text", "", QLineEdit::Normal, "", &ok);

    if(ok && !text.isEmpty())
    {
        if(filesystem::filedatamanager::topic_names.contains(text))
        {
            QErrorMessage *err = new QErrorMessage(this);
            err->showMessage("Topic already exists");
        }
        pathDir.mkdir(text);
    }
    set_list_items(); 
}

void MainWindow:: on_startBTN_Clicked()
{
    qInfo() << "working";
}


void MainWindow:: set_list_items()
{
    ui->topicListWidget->clear();
    filesystem::filemanager::LoadTopicNames(); 
    ui->topicListWidget->addItems(filesystem::filedatamanager::topic_names);
}