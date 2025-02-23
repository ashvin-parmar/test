#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<drawwidget.h>
#include<QVBoxLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Create an instance of DrawWidget
       drawWidget = new DrawWidget(this);

       // Add it inside a layout
       ui->centralwidget->setLayout(new QVBoxLayout());
       ui->centralwidget->layout()->addWidget(drawWidget);
        this->ui->frame->setVisible(false);
       connect(this->ui->pushButton, &QPushButton::clicked, drawWidget, &DrawWidget::clearCanvas);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    this->ui->frame->setVisible(true);
    this->drawWidget->clearCanvas();
}
