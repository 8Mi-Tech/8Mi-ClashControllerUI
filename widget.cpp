#include "widget.h"
#include "ui_widget.h"

BMi_Clash_Widget::BMi_Clash_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BMi_Clash_Widget)
{
    ui->setupUi(this);
}

BMi_Clash_Widget::~BMi_Clash_Widget()
{
    delete ui;
}
