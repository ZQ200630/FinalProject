#include "subwindow.h"
#include "ui_subwindow.h"

#include "daofactory.h"

SubWindow::SubWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::SubWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, [this]()
    {
        QString id = this->ui->lineEdit->text();
        QString name = this->ui->lineEdit_2->text();
        QString password = this->ui->lineEdit_3->text();
        Dao* dao = DaoFactory::getDao();

    });
}

SubWindow::~SubWindow()
{
    delete ui;
}
