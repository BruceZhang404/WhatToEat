#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startmh_clicked()
{
    Manghe *mh=new Manghe();
    this->close();
    mh->show();
} //切换到盲盒


void Widget::on_starttj_clicked()
{
    Tujian *tj=new Tujian();
    this->close();
    tj->show();
} //切换到图鉴

