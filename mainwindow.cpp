#include "mainwindow.h"
#include <DMainWindow>

DWIDGET_USE_NAMESPACE

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    w = new BMi_Clash_Widget;
    resize(w->size()); //设置窗口大小
    setCentralWidget(w);

}

MainWindow::~MainWindow()
{

}
