#include "include/mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton* button = new QPushButton("MIAU", this);
    button->setFixedSize(100, 50);
    button->move(300, 300);

    connect(button, &QPushButton::clicked, this, [button](){
        button->setText("HAM");
    });
}

Widget::~Widget()
{
    delete ui;
}
