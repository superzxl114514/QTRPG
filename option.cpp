#include "option.h"
#include "ui_option.h"

Option::Option(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Option)
{
    ui->setupUi(this);

    ui->Music->setStyleSheet("background-color: rgba(0, 102, 116, 240);");
}

Option::~Option()
{
    delete ui;
}

void Option::on_Music_stateChanged(int arg1)
{
    emit musicchange();
}


void Option::on_backButton_clicked()
{
    this->close();
}
