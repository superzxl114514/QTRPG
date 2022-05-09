#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    option = new Option();


    ui->backButton->setStyleSheet(
                /**正常情况下样式**/
                "QPushButton{"

                    "font: 10pt ;"
                    "color: #2f3640;"
                    "background-color: #f5f6fa;"
                    "border-color: #2f3640;"
                    "border-radius: 15px;"
                    "border-style: solid;"
                    "border-width: 2px;"
                    "padding: 5px;"
                "}"
                /**鼠标停留在按钮上的样式**/
                "QPushButton::hover{"
                    "color: #FFFFFF;"
                    "background-color: #718093;"
                    "border-color: #2f3640;"
                "}"

                /**鼠标按压下去的样式**/
                "QPushButton::pressed,QPushButton::checked{"
                    "color: #FFFFFF;"
                    "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);"
                "}"

                );
    ui->exitButton->setStyleSheet(
                /**正常情况下样式**/
                "QPushButton{"
                    "font: 10pt ;"
                    "color: #2f3640;"
                    "background-color: #f5f6fa;"
                    "border-color: #2f3640;"
                    "border-radius: 15px;"
                    "border-style: solid;"
                    "border-width: 2px;"
                    "padding: 5px;"
                "}"
                /**鼠标停留在按钮上的样式**/
                "QPushButton::hover{"
                    "color: #FFFFFF;"
                    "background-color: #718093;"
                    "border-color: #2f3640;"
                "}"

                /**鼠标按压下去的样式**/
                "QPushButton::pressed,QPushButton::checked{"
                    "color: #FFFFFF;"
                    "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);"
                "}"

                );
    ui->optionButton->setStyleSheet(
                /**正常情况下样式**/
                "QPushButton{"
                    "font: 10pt ;"
                    "color: #2f3640;"
                    "background-color: #f5f6fa;"
                    "border-color: #2f3640;"
                    "border-radius: 15px;"
                    "border-style: solid;"
                    "border-width: 2px;"
                    "padding: 5px;"
                "}"
                /**鼠标停留在按钮上的样式**/
                "QPushButton::hover{"
                    "color: #FFFFFF;"
                    "background-color: #718093;"
                    "border-color: #2f3640;"
                "}"

                /**鼠标按压下去的样式**/
                "QPushButton::pressed,QPushButton::checked{"
                    "color: #FFFFFF;"
                    "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);"
                "}"

                );

}

Menu::~Menu()
{
    delete ui;

}

void Menu::on_backButton_clicked()
{
    close();
}

void Menu::on_optionButton_clicked()
{
    option->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    option->show();
}

Option* Menu::getOption(){
    return option;
}

void Menu::on_exitButton_clicked()
{
    qApp->quit();
}
