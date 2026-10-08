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
#include <qDebug>

MainWindow::MainWindow()
    : QMainWindow()
    , ui(new Ui::MainWindow()) 
{ 
    global_card_indx = 0; 
    correct = 0; 
    incorrect = 0; 

    ui->setupUi(this);
    
    set_list_items(); 
    connect(ui->newFlashCardBTN, SIGNAL(clicked()), this, SLOT(on_newFlashCardBTN_Clicked()));
    connect(ui->newTopicBTN, SIGNAL(clicked()), this, SLOT(on_newTopicBTN_Clicked()));
    connect(ui->startBTN, SIGNAL(clicked()), this, SLOT(on_startBTN_Clicked()));

    connect(ui->AnswerBTN_1, SIGNAL(clicked()), this, SLOT(on_answerBTN_clicked()));
    connect(ui->AnswerBTN_2, SIGNAL(clicked()), this, SLOT(on_answerBTN_clicked()));
    connect(ui->AnswerBTN_3, SIGNAL(clicked()), this, SLOT(on_answerBTN_clicked()));
    connect(ui->AnswerBTN_4, SIGNAL(clicked()), this, SLOT(on_answerBTN_clicked()));
    connect(ui->next_BTN,  SIGNAL(clicked()), this, SLOT(on_nextBTN_clicked()));

    ui->stackedWidget->setCurrentIndex(0);
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
    filesystem::filemanager::LoadTopics(ui->topicListWidget->selectedItems()); 
    ui->stackedWidget->setCurrentIndex(1);
    setGameCardState(); 
}


void MainWindow:: set_list_items()
{
    ui->topicListWidget->clear();
    filesystem::filemanager::LoadTopicNames(); 
    ui->topicListWidget->addItems(filesystem::filedatamanager::topic_names);
}

void MainWindow:: on_answerBTN_clicked()
{
    ui->AnswerBTN_1->setEnabled(false);
    ui->AnswerBTN_2->setEnabled(false);
    ui->AnswerBTN_3->setEnabled(false);
    ui->AnswerBTN_4->setEnabled(false);
    
    QString user_answer = "";

    QString a_answer = ui->label_A->text().slice(3);
    QString c_answer = ui->label_C->text().slice(3);
    QString b_answer = ui->label_B->text().slice(3);
    QString d_answer = ui->label_D->text().slice(3);

    QString correct_answer = (filesystem::filedatamanager::loaded_cards[global_card_indx]["correctAnswer"].toString());
    if(ui->AnswerBTN_1->isChecked()){user_answer = a_answer;}
    if(ui->AnswerBTN_2->isChecked()){user_answer = c_answer;}
    if(ui->AnswerBTN_3->isChecked()){user_answer = b_answer;}
    if(ui->AnswerBTN_4->isChecked()){user_answer = d_answer;}

    if(user_answer == correct_answer){correct++;}
    else{incorrect++;}
    qInfo() << user_answer;
    qInfo() << correct_answer;
    if(a_answer == correct_answer)
    {
        ui->AnswerBTN_1->setStyleSheet("background-color: green;");
    }
    else
    {
        ui->AnswerBTN_1->setStyleSheet("background-color: red;");
    }

    if(c_answer == correct_answer)
    {
        ui->AnswerBTN_2->setStyleSheet("background-color: green;");
    }
    else
    {
        ui->AnswerBTN_2->setStyleSheet("background-color: red;");
    }

    if(b_answer == correct_answer)
    {
        ui->AnswerBTN_3->setStyleSheet("background-color: green;");
    }
    else
    {
        ui->AnswerBTN_3->setStyleSheet("background-color: red;");
    }

    if(d_answer == correct_answer)
    {
        ui->AnswerBTN_4->setStyleSheet("background-color: green;");
    }
    else
    {
        ui->AnswerBTN_4->setStyleSheet("background-color: red;");
    }
    ui->correct_label->setText("Correct: " + QString::number(correct));
    ui->incorrect_label->setText("Incorrect: " + QString::number(incorrect)); 
} 

void MainWindow:: setGameCardState()
{
     auto card = filesystem::filedatamanager::loaded_cards[global_card_indx];
    
     QStringList answers = {card["correctAnswer"].toString(), card["answer1"].toString(),card["answer2"].toString(),card["answer3"].toString()};
     
     ui->label_Question->setText(card["question"].toString());
     
     ui->label_A->setText("A: "  + answers[0]);
     ui->label_B->setText("B: "  + answers[1]);
     ui->label_C->setText("C: "  + answers[2]);
     ui->label_D->setText("D: "  + answers[3]);

}

void MainWindow:: on_nextBTN_clicked()
{
    ui->AnswerBTN_1->setEnabled(true);
    ui->AnswerBTN_2->setEnabled(true);
    ui->AnswerBTN_3->setEnabled(true);
    ui->AnswerBTN_4->setEnabled(true);

    ui->AnswerBTN_1->setChecked(false);
    ui->AnswerBTN_2->setChecked(false);
    ui->AnswerBTN_3->setChecked(false);
    ui->AnswerBTN_4->setChecked(false);

    ui->AnswerBTN_1->setStyleSheet("background-color:#808080");
    ui->AnswerBTN_2->setStyleSheet("background-color:#808080");
    ui->AnswerBTN_3->setStyleSheet("background-color:#808080");
    ui->AnswerBTN_4->setStyleSheet("background-color:#808080");
    
    global_card_indx++; 
    setGameCardState(); 
}