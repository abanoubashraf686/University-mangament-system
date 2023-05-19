#include "registertime.h"
#include "ui_registertime.h"
#include <QTimer>

RegisterTime::RegisterTime(QWidget *parent , Data *data) :
    QDialog(parent),
    ui(new Ui::RegisterTime)
{
    ui->setupUi(this);
    this->data = data;
    ui->calendarWidget->setMinimumDate(QDate::currentDate());
    ui->save->hide();
    ui->calendarWidget->hide();
    ui->message->hide();
}
RegisterTime::~RegisterTime()
{
    delete ui;
}


void RegisterTime::on_open_clicked()
{
    if (ui->save->isHidden()){
        ui->save->show();
        ui->calendarWidget->show();
    }
    ui->open->setStyleSheet("color :green ;font: 700 30pt \"Segoe UI\";");
    ui->close->setStyleSheet("color : white;font: 700 22pt \"Segoe UI\";");
    openPage = 1;
    ui->calendarWidget->setMinimumDate(QDate::currentDate());
    ui->calendarWidget->setSelectedDate(max(QDate::currentDate(), data->startRegDate));
}


void RegisterTime::on_close_clicked()
{
    if (ui->save->isHidden()){
        ui->save->show();
        ui->calendarWidget->show();
    }
    ui->open->setStyleSheet("color : white;font: 700 22pt \"Segoe UI\";");
    ui->close->setStyleSheet("color :green ;font: 700 30pt \"Segoe UI\";");
    ui->calendarWidget->setMinimumDate(max(data->startRegDate, QDate::currentDate()));
    openPage = 0;
}

void RegisterTime::on_save_clicked()
{
    if (openPage){
        data->startRegDate = ui->calendarWidget->selectedDate();
    }
    else {
        data->endRegDate = ui->calendarWidget->selectedDate();
    }
    ui->message->show();
    QTimer::singleShot(2000, this, [=]() {
        ui->message->hide();
    });
}
