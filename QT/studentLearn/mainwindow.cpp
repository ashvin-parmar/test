#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QFile>
// #include<QTextStream>
// QString MainWindow::FILE_NAME="student.dat";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_cancelButton_clicked()
{
    this->ui->firstNameText->clear();
    this->ui->lastNameText->clear();
    this->ui->addressText->clear();
    this->ui->male->setChecked(false);
    this->ui->female->setChecked(false);
    this->ui->adult->setChecked(false);
    this->ui->cityBox->setCurrentIndex(0);
    this->ui->firstName->setFocus();
}

void MainWindow::on_saveButton_clicked()
{
    QString firstName=this->ui->firstNameText->text();
    QString lastName=this->ui->lastNameText->text();
    QString address=this->ui->addressText->toPlainText();
    QString gender;
    if(this->ui->male->isChecked())
    {
        gender="male";
    }
    else
    {
        gender="female";
    }
    QString adult;
    if(this->ui->adult->isChecked())
    {
        adult="Y";
    }
    else
    {
        adult="N";
    }
    QString city=this->ui->cityBox->currentText();
    //Code to save data in file using QFile and QTextStream class
    QFile file(FILE_NAME);

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream w(&file);
    w<<firstName.trimmed()<<",";
    w<<lastName.trimmed()<<",";
    w<<address<<",";
    w<<gender<<",";
    w<<adult<<",";
    w<<city<<"\n";
    file.close();

    //Here all code to clear data from UI
    this->on_cancelButton_clicked();
    //Now send messege box to show that data saved or added
    QMessageBox mb;
    mb.setText("Student added");
    mb.setWindowTitle("Notification");
    mb.show();
    mb.exec();
}
