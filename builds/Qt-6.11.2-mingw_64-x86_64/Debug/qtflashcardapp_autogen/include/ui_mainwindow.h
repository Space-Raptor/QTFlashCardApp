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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QListWidget *topicListWidget;
    QPushButton *newFlashCardBTN;
    QPushButton *newTopicBTN;
    QPushButton *startBTN;
    QWidget *page_2;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *AnswerBTN_1;
    QPushButton *AnswerBTN_4;
    QPushButton *AnswerBTN_3;
    QPushButton *AnswerBTN_2;
    QLabel *label_A;
    QLabel *label_B;
    QLabel *label_C;
    QLabel *label_D;
    QLabel *label_Question;
    QLabel *correct_label;
    QLabel *incorrect_label;
    QPushButton *next_BTN;
    QPushButton *exit_BTN_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(803, 610);
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
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 591));
        stackedWidget->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: transparent;  \n"
""));
        page = new QWidget();
        page->setObjectName("page");
        topicListWidget = new QListWidget(page);
        topicListWidget->setObjectName("topicListWidget");
        topicListWidget->setGeometry(QRect(10, 10, 256, 301));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Display")});
        topicListWidget->setFont(font);
        topicListWidget->setAutoFillBackground(false);
        topicListWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: #808080;\n"
"    border-radius: 20px;\n"
"    color: #FFFFFF;\n"
"	border: none;\n"
"	outline: none; \n"
"	padding: 5px; \n"
"}\n"
"QListWidget::item\n"
"{\n"
"border: none;\n"
"outline: none; \n"
"margin: 2px; \n"
"}\n"
"QListWidget::item:selected {\n"
"    background: #173E77;\n"
"    border-radius: 10px; \n"
"	border: none; \n"
"	outline: none; \n"
"}"));
        topicListWidget->setAlternatingRowColors(false);
        topicListWidget->setSelectionMode(QAbstractItemView::SelectionMode::MultiSelection);
        newFlashCardBTN = new QPushButton(page);
        newFlashCardBTN->setObjectName("newFlashCardBTN");
        newFlashCardBTN->setGeometry(QRect(280, 20, 141, 26));
        newFlashCardBTN->setFont(font);
        newFlashCardBTN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 8px;\n"
"    background-color: #808080;\n"
"    color: white;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color: #363737\n"
"}"));
        newTopicBTN = new QPushButton(page);
        newTopicBTN->setObjectName("newTopicBTN");
        newTopicBTN->setGeometry(QRect(280, 50, 141, 26));
        newTopicBTN->setFont(font);
        newTopicBTN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 8px;\n"
"    background-color: #808080;\n"
"    color: white;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color: #363737\n"
"}"));
        startBTN = new QPushButton(page);
        startBTN->setObjectName("startBTN");
        startBTN->setGeometry(QRect(280, 80, 141, 26));
        startBTN->setFont(font);
        startBTN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 8px;\n"
"    background-color: #808080;\n"
"    color: white;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color: #363737\n"
"}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        frame = new QFrame(page_2);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 330, 683, 243));
        frame->setStyleSheet(QString::fromUtf8("#frame QPushButton:checked\n"
"{\n"
"	background-color: #363737\n"
"}\n"
"\n"
"#frame QPushButton\n"
"{\n"
"border-radius: 8px;\n"
"background-color: #808080;\n"
"color: white;\n"
"}"));
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        AnswerBTN_1 = new QPushButton(frame);
        AnswerBTN_1->setObjectName("AnswerBTN_1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnswerBTN_1->sizePolicy().hasHeightForWidth());
        AnswerBTN_1->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(43);
        AnswerBTN_1->setFont(font1);
        AnswerBTN_1->setStyleSheet(QString::fromUtf8(""));
        AnswerBTN_1->setCheckable(true);

        gridLayout_2->addWidget(AnswerBTN_1, 0, 0, 1, 1);

        AnswerBTN_4 = new QPushButton(frame);
        AnswerBTN_4->setObjectName("AnswerBTN_4");
        sizePolicy.setHeightForWidth(AnswerBTN_4->sizePolicy().hasHeightForWidth());
        AnswerBTN_4->setSizePolicy(sizePolicy);
        AnswerBTN_4->setFont(font1);
        AnswerBTN_4->setStyleSheet(QString::fromUtf8(""));
        AnswerBTN_4->setCheckable(true);

        gridLayout_2->addWidget(AnswerBTN_4, 1, 1, 1, 1);

        AnswerBTN_3 = new QPushButton(frame);
        AnswerBTN_3->setObjectName("AnswerBTN_3");
        sizePolicy.setHeightForWidth(AnswerBTN_3->sizePolicy().hasHeightForWidth());
        AnswerBTN_3->setSizePolicy(sizePolicy);
        AnswerBTN_3->setFont(font1);
        AnswerBTN_3->setStyleSheet(QString::fromUtf8(""));
        AnswerBTN_3->setCheckable(true);

        gridLayout_2->addWidget(AnswerBTN_3, 0, 1, 1, 1);

        AnswerBTN_2 = new QPushButton(frame);
        AnswerBTN_2->setObjectName("AnswerBTN_2");
        sizePolicy.setHeightForWidth(AnswerBTN_2->sizePolicy().hasHeightForWidth());
        AnswerBTN_2->setSizePolicy(sizePolicy);
        AnswerBTN_2->setFont(font1);
        AnswerBTN_2->setStyleSheet(QString::fromUtf8(""));
        AnswerBTN_2->setCheckable(true);

        gridLayout_2->addWidget(AnswerBTN_2, 1, 0, 1, 1);

        label_A = new QLabel(page_2);
        label_A->setObjectName("label_A");
        label_A->setGeometry(QRect(0, 90, 791, 31));
        QFont font2;
        font2.setPointSize(9);
        label_A->setFont(font2);
        label_A->setAutoFillBackground(false);
        label_A->setStyleSheet(QString::fromUtf8("color: white; \n"
"background-color:  	transparent;"));
        label_B = new QLabel(page_2);
        label_B->setObjectName("label_B");
        label_B->setGeometry(QRect(0, 130, 791, 31));
        label_B->setStyleSheet(QString::fromUtf8("color: white; background-color:  	transparent;"));
        label_C = new QLabel(page_2);
        label_C->setObjectName("label_C");
        label_C->setGeometry(QRect(0, 170, 801, 31));
        label_C->setStyleSheet(QString::fromUtf8("color: white; background-color:  	transparent;"));
        label_D = new QLabel(page_2);
        label_D->setObjectName("label_D");
        label_D->setGeometry(QRect(0, 210, 791, 31));
        label_D->setStyleSheet(QString::fromUtf8("color: white; background-color:  	transparent;"));
        label_Question = new QLabel(page_2);
        label_Question->setObjectName("label_Question");
        label_Question->setGeometry(QRect(50, 0, 671, 71));
        QFont font3;
        font3.setPointSize(14);
        label_Question->setFont(font3);
        label_Question->setStyleSheet(QString::fromUtf8("color: white; \n"
"background: transparent; "));
        label_Question->setTextFormat(Qt::TextFormat::PlainText);
        label_Question->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_Question->setWordWrap(true);
        correct_label = new QLabel(page_2);
        correct_label->setObjectName("correct_label");
        correct_label->setGeometry(QRect(10, 260, 91, 16));
        correct_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: transparent;  \n"
""));
        incorrect_label = new QLabel(page_2);
        incorrect_label->setObjectName("incorrect_label");
        incorrect_label->setGeometry(QRect(10, 280, 91, 16));
        next_BTN = new QPushButton(page_2);
        next_BTN->setObjectName("next_BTN");
        next_BTN->setGeometry(QRect(700, 280, 81, 26));
        next_BTN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 8px;\n"
"    background-color: #808080;\n"
"    color: white;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color: #363737\n"
"}"));
        exit_BTN_2 = new QPushButton(page_2);
        exit_BTN_2->setObjectName("exit_BTN_2");
        exit_BTN_2->setGeometry(QRect(700, 310, 81, 26));
        exit_BTN_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 8px;\n"
"    background-color: #808080;\n"
"    color: white;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color: #363737\n"
"}"));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        newFlashCardBTN->setText(QCoreApplication::translate("MainWindow", "Upload new flash cards", nullptr));
        newTopicBTN->setText(QCoreApplication::translate("MainWindow", "Create New Topic", nullptr));
        startBTN->setText(QCoreApplication::translate("MainWindow", "Begin with selected topics", nullptr));
        AnswerBTN_1->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        AnswerBTN_4->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        AnswerBTN_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        AnswerBTN_2->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_A->setText(QCoreApplication::translate("MainWindow", "A:", nullptr));
        label_B->setText(QCoreApplication::translate("MainWindow", "B:", nullptr));
        label_C->setText(QCoreApplication::translate("MainWindow", "C:", nullptr));
        label_D->setText(QCoreApplication::translate("MainWindow", "D:", nullptr));
        label_Question->setText(QString());
        correct_label->setText(QCoreApplication::translate("MainWindow", "Correct:", nullptr));
        incorrect_label->setText(QCoreApplication::translate("MainWindow", "Incorrect:", nullptr));
        next_BTN->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        exit_BTN_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
