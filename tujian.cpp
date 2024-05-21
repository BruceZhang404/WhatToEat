#include "tujian.h"
#include "ui_tujian.h"
#include "widget.h"

Tujian::Tujian(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Tujian)
{
    ui->setupUi(this);
}

Tujian::~Tujian()
{
    delete ui;
}

void Tujian::on_previous_clicked()
{
    page--;
    if(page<0)
        page=endpage-1;
    ui->stackedWidget->setCurrentIndex(page);
} //图鉴上一页

void Tujian::on_next_clicked()
{
    page++;
    page%=endpage;
    ui->stackedWidget->setCurrentIndex(page);
} //图鉴下一页

void Tujian::on_returnmenu_clicked()
{
    Widget *menu=new Widget();
    this->close();
    menu->show();
} //返回主界面
