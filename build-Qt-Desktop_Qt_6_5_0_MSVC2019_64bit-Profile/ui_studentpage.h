#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentPage
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *welcome_to_ums;
    QPushButton *pushButton_5;
    QListView *listView;
    QPushButton *HomeButton;
    QPushButton *MyCoursesButton;
    QPushButton *RegisterButton;
    QPushButton *GradeButton;
    QLabel *label;
    QComboBox *Profile;

    void setupUi(QDialog *StudentPage)
    {
        if (StudentPage->objectName().isEmpty())
            StudentPage->setObjectName("StudentPage");
        StudentPage->resize(1000, 700);
        StudentPage->setMinimumSize(QSize(1000, 700));
        StudentPage->setMaximumSize(QSize(1000, 700));
        StudentPage->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #1c335f, stop:1 #13112d);\n"
"border-radius:10px;"));
        scrollArea = new QScrollArea(StudentPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(260, 90, 731, 600));
        scrollArea->setMinimumSize(QSize(0, 600));
        scrollArea->setMaximumSize(QSize(16777215, 600));
        scrollArea->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #1c335f, stop:1 #13112d);\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 731, 600));
        welcome_to_ums = new QLabel(scrollAreaWidgetContents);
        welcome_to_ums->setObjectName("label_2");
        welcome_to_ums->setGeometry(QRect(110, 130, 641, 351));
        welcome_to_ums->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 36pt \"Castellar\";\n"
"    font-weight: 900;\n"
"    background-color: transparent;\n"
"\n"
""));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_5 = new QPushButton(StudentPage);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(870, 20, 111, 51));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("    font-weight: 600;\n"
"	font-size:20px;\n"
"    border-radius: 25px;\n"
"    color: #ffffff;\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #1c335f, stop:1 #13112d);\n"
""));
        listView = new QListView(StudentPage);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, 0, 256, 691));
        HomeButton = new QPushButton(StudentPage);
        HomeButton->setObjectName("HomeButton");
        HomeButton->setGeometry(QRect(60, 170, 141, 71));
        HomeButton->setCursor(QCursor(Qt::PointingHandCursor));
        HomeButton->setStyleSheet(QString::fromUtf8("    font-weight: 600;\n"
"	font-size:20px;\n"
"    border-radius: 30px;\n"
"    color: #ffffff;\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #1c335f, stop:1 #13112d);\n"
""));
        MyCoursesButton = new QPushButton(StudentPage);
        MyCoursesButton->setObjectName("MyCoursesButton");
        MyCoursesButton->setGeometry(QRect(60, 260, 141, 71));
        MyCoursesButton->setCursor(QCursor(Qt::PointingHandCursor));
        MyCoursesButton->setStyleSheet(QString::fromUtf8("    font-weight: 600;\n"
"	font-size:20px;\n"
"    border-radius: 30px;\n"
"    color: #ffffff;\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #1c335f, stop:1 #13112d);\n"
""));
        RegisterButton = new QPushButton(StudentPage);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setGeometry(QRect(60, 440, 141, 71));
        RegisterButton->setCursor(QCursor(Qt::PointingHandCursor));
        RegisterButton->setStyleSheet(QString::fromUtf8("    font-weight: 600;\n"
"	font-size:18px;\n"
"    border-radius: 30px;\n"
"    color: #ffffff;\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #1c335f, stop:1 #13112d);\n"
""));
        GradeButton = new QPushButton(StudentPage);
        GradeButton->setObjectName("GradeButton");
        GradeButton->setGeometry(QRect(60, 350, 141, 71));
        GradeButton->setCursor(QCursor(Qt::PointingHandCursor));
        GradeButton->setStyleSheet(QString::fromUtf8("    font-weight: 600;\n"
"	font-size:20px;\n"
"    border-radius: 30px;\n"
"    color: #ffffff;\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #1c335f, stop:1 #13112d);\n"
""));
        label = new QLabel(StudentPage);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 30, 161, 91));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 36pt \"Castellar\";\n"
"    font-weight: 900;\n"
"    background-color: transparent;\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);
        Profile = new QComboBox(StudentPage);
        Profile->addItem(QString());
        Profile->addItem(QString());
        Profile->setObjectName("Profile");
        Profile->setGeometry(QRect(270, 30, 141, 24));
        Profile->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 16pt \"Arial\";\n"
"    background-color: transparent;"));

        retranslateUi(StudentPage);

        QMetaObject::connectSlotsByName(StudentPage);
    } // setupUi

    void retranslateUi(QDialog *StudentPage)
    {
        StudentPage->setWindowTitle(QCoreApplication::translate("StudentPage", "Dialog", nullptr));
        welcome_to_ums->setText(QCoreApplication::translate("StudentPage", "Welcome To Ums", nullptr));
        pushButton_5->setText(QCoreApplication::translate("StudentPage", "Logout", nullptr));
        HomeButton->setText(QCoreApplication::translate("StudentPage", "Home", nullptr));
        MyCoursesButton->setText(QCoreApplication::translate("StudentPage", "My Courses", nullptr));
        RegisterButton->setText(QCoreApplication::translate("StudentPage", "Register\n"
"course", nullptr));
        GradeButton->setText(QCoreApplication::translate("StudentPage", "Grade", nullptr));
        label->setText(QCoreApplication::translate("StudentPage", "UMS", nullptr));
        Profile->setItemText(0, QCoreApplication::translate("StudentPage", "Name", nullptr));
        Profile->setItemText(1, QCoreApplication::translate("StudentPage", "My Profile", nullptr));

    } // retranslateUi

};

namespace Ui {
    class StudentPage: public Ui_StudentPage {};
} // namespace Ui

QT_END_NAMESPACE

