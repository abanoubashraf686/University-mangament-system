#include "studentpage.h"
#include "ui_studentpage.h"
#include <viewcourses.h>
StudentPage::StudentPage(QWidget *parent , QMainWindow *loginpage , vector<Course>* courses   ) :QDialog(parent),ui(new Ui::StudentPage)
{
    ui->setupUi(this);
    this->loginpage = loginpage ;
    this->courses= courses ;
}

StudentPage::~StudentPage()
{
    delete ui;
}

void StudentPage::load_data(int year , int id , vector<vector<Student>> &student  ){
    this->stud = &student[year][id] ;
    ui->Profile->setItemText(0,QString::fromStdString(stud->name)) ;
    ui->Profile->setItemText(1,QString::fromStdString("My Profile")) ;
}

void StudentPage::on_Profile_currentIndexChanged(int index)
{
    if(index==1){
        ui->scrollArea->setWidget(new Frame(nullptr,stud));
    }
    else
    {
        ui->scrollArea->setWidget( new FrameWelcome) ;
    }
}


void StudentPage::on_pushButton_5_clicked()
{
    loginpage->show() ;
    this->hide() ;
}


void StudentPage::on_HomeButton_clicked()
{
    home();
}
void StudentPage::home(){
    ui->scrollArea->setWidget(new FrameWelcome) ;
}


void StudentPage::on_MyCoursesButton_clicked()
{
    ui->scrollArea->setWidget(new ViewCourses(nullptr, stud,courses)) ;
}

