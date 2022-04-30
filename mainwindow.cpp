#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "character.h"
#include <QtGui>
#include <QtWidgets>
#include <QDialog>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

        ui->setupUi(this);
        chara.setx(10);
        chara.sety(10);
        this->setMinimumSize(QSize(800,450));
        this->setMaximumSize(QSize(800,450));
       QPixmap p;    //创建QPixmap对象
       QList<QLabel *> maplist;
       p.load(":/image/resource/image/light_yellow.jpg"); //载入图像
        for(int i=0;i<81;i++){
            QLabel *label1 = new QLabel(this);
            label1->setPixmap(p);

            label1->move(200+50*(i%9),50*int(i/9));
            label1->resize(50,50);
            maplist<<label1;
        }

       //ui->label1->adjustSize();
}

MainWindow::~MainWindow()
{
    delete ui;
}

