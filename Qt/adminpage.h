#pragma once
#include <QDialog>
#include <newCourse.h>
#include "adminwelcome.h"
#include <QMainWindow>
#include <editCourse.h>
#include <newstudent.h>
#include <data.h>

namespace Ui {
class AdminPage;
}

class AdminPage : public QDialog
{
    Q_OBJECT

public:
    explicit AdminPage(QWidget *parent = nullptr, QMainWindow * loginpage= nullptr, Data* data = nullptr);
    ~AdminPage();

private slots:
    void on_logout_clicked();
    void on_NewCourse_clicked();
    void on_HomeButton_clicked();
    void on_EditCourse_clicked();    
    void on_NewStudent_clicked();

    void on_ViewStudent_clicked();

private:
    Ui::AdminPage *ui;
    newCourse * ptrCourse ;
    adminwelcome * welcome;
    QMainWindow * loginpage ;
    Data* data;
    EditCourse * ptrEdit;
    newStudent *newStd;
public :
    void home() ;
};

