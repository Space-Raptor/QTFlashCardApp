#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include "FileDataManager.h"
#include "FileManager.h"
#include <QDir>
#include <QInputDialog>
#include <QErrorMessage>
#include <QFileDialog>
#include <QFile>


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
    bool ok; 
    QString item  = QInputDialog::getItem(this, "Select Topic to upload to", "", filesystem::filedatamanager::topic_names, 0, false, &ok); 
    if(ok)
    {
        QString file_path = QFileDialog::getOpenFileName(this, "select a json file", "C:\\", "(*.json)" );
        QString file_name = QFileInfo(file_path).fileName();
        qDebug() << file_name;
        if(!QFile::copy(file_path, (filesystem::filemanager::data_directory + "/" + item + "/" + file_name)))
        {
            qDebug() << "failed";
        }; 
        QFile::remove(file_path); 
    }
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