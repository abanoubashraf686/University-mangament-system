#ifndef EDITCOURSE_H
#define EDITCOURSE_H

#include <QDialog>
#include <course.h>
namespace Ui {
class EditCourse;
}

class EditCourse : public QDialog
{
    Q_OBJECT

public:
    explicit EditCourse(QWidget *parent = nullptr, vector<Course>*courses =nullptr);
    void clear();
    void invalidInputData(int);
    bool isInt(std::string);
    ~EditCourse();

private slots:
    void on_courseList_currentIndexChanged(int index);


    void on_clear_clicked();

    void on_Edit_clicked();

private:
    Ui::EditCourse *ui;
    vector<Course> * courses;
};

#endif // EDITCOURSE_H