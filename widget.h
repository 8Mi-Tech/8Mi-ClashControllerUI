#ifndef WIDGET_H
#define WIDGET_H

#include <DWidget>

namespace Ui {
class BMi_Clash_Widget;
}

class BMi_Clash_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit BMi_Clash_Widget(QWidget *parent = 0);
    ~BMi_Clash_Widget();

private:
    Ui::BMi_Clash_Widget *ui;
};

#endif // WIDGET_H
