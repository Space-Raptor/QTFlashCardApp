/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *topicListWidget;
    QPushButton *newFlashCardBTN;
    QPushButton *newTopicBTN;
    QPushButton *startBTN;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:  	#3b3b3b;\n"
" background: qlineargradient(\n"
" 		x1: 0, y1: 0,\n"
"        x2: 1, y2: 1,\n"
"        stop: 0 #292B2B,\n"
"        stop: 0.5 #303333,\n"
"        stop: 1 #272929\n"
"    );"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        topicListWidget = new QListWidget(centralwidget);
        topicListWidget->setObjectName("topicListWidget");
        topicListWidget->setGeometry(QRect(9, 12, 256, 301));
        topicListWidget->setAutoFillBackground(false);
        topicListWidget->setStyleSheet(QString::fromUtf8("background-color:#808080;\n"
"border-radius: 20px;"));
        newFlashCardBTN = new QPushButton(centralwidget);
        newFlashCardBTN->setObjectName("newFlashCardBTN");
        newFlashCardBTN->setGeometry(QRect(270, 20, 141, 26));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Display")});
        newFlashCardBTN->setFont(font);
        newFlashCardBTN->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"    background-color: #808080;\n"
"    color: white;\n"
"    border: none;"));
        newTopicBTN = new QPushButton(centralwidget);
        newTopicBTN->setObjectName("newTopicBTN");
        newTopicBTN->setGeometry(QRect(270, 50, 141, 26));
        newTopicBTN->setFont(font);
        newTopicBTN->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"    background-color: #808080;\n"
"    color: white;\n"
"    border: none;"));
        startBTN = new QPushButton(centralwidget);
        startBTN->setObjectName("startBTN");
        startBTN->setGeometry(QRect(270, 80, 141, 26));
        startBTN->setFont(font);
        startBTN->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"    background-color: #808080;\n"
"    color: white;\n"
"    border: none;"));
        MainWindow->setCentralWidget(centralwidget);
        newFlashCardBTN->raise();
        newTopicBTN->raise();
        startBTN->raise();
        topicListWidget->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        newFlashCardBTN->setText(QCoreApplication::translate("MainWindow", "Upload new flash cards", nullptr));
        newTopicBTN->setText(QCoreApplication::translate("MainWindow", "Create New Topic", nullptr));
        startBTN->setText(QCoreApplication::translate("MainWindow", "Begin with selected topics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
