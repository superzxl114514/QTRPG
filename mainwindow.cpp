#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    menu = new Menu();
    connect(menu->getOption(),SIGNAL(musicchange()),this,SLOT(music_setting()));
    ui->setupUi(this);
           chara.setx(10);
           chara.sety(10);
           bells=new QSound(":/music/resource/music/Opening.wav");
           bells->play();
           playing=true;
           this->setMinimumSize(QSize(800,450));
           this->setMaximumSize(QSize(800,450));
           for(int i=0;i<81;i++){
               QLabel *label1 = new QLabel(this);

               label1->move(200+50*(i%9),50*int(i/9));
               label1->resize(50,50);
               label1->lower();
               maplist<<label1;
           }
           graphic= Graphic(maplist);
           map= Map(1);
           graphic.Render(chara.getx(),chara.gety(),map);

           QPixmap p =chara.getcurrentchara();
           ui->charalabel->setPixmap(p);
           ui->charalabel->raise();
            ui->charalabel->setFixedHeight(48);
             ui->charalabel->setFixedWidth(32);
             ui->charalabel->move(409,201);
             ui->xlabel->setText("x: "+QString::number(chara.getx(),10));
             ui->ylabel->setText("y: "+QString::number(chara.getx(),10));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_menuButton_clicked()
{
    menu->show();
}

void MainWindow::music_setting(){
    if(playing){
        playing=false;
        bells->stop();
    }
    else{
        playing=true;
        bells->play();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event){
    int flag=0;
    switch(event->key()){
    case Qt::Key_Escape:
    on_menuButton_clicked();
    return;
    case Qt::Key_A:
        flag=1;
        break;
    case Qt::Key_D:
        flag=2;
        break;
    case Qt::Key_W:
        flag=3;
        break;
    case Qt::Key_S:
        flag=0;
    }
    MoveProcess(flag);
}

void MainWindow::MoveProcess(int m){
    chara.SetDirection(m);
    chara.move(m,map);
    graphic.Render(chara.getx(),chara.gety(),map);
    QPixmap p =chara.getcurrentchara();
    ui->charalabel->setPixmap(p);
    ui->charalabel->raise();
    ui->xlabel->setText("x: "+QString::number(chara.getx(),10));
    ui->ylabel->setText("y: "+QString::number(chara.gety(),10));
}
