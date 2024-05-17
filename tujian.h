#ifndef TUJIAN_H
#define TUJIAN_H

#include <Qwidget>
#include "widget.h"

namespace Ui {
class Tujian;
}

class Tujian : public QWidget
{
    Q_OBJECT

public:
    explicit Tujian(QWidget *parent = nullptr);
    ~Tujian();

private slots:
    void on_previous_clicked();

    void on_next_clicked();

    void on_returnmenu_clicked();

private:
    Ui::Tujian *ui;
    int page=0; //用于控制图鉴页数
    int endpage=2; //记录图鉴总页数
};

#endif // TUJIAN_H
