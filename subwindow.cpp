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

        Dao* dao = DaoFactory::getDao();

    });
}

SubWindow::~SubWindow()
{
    delete ui;
}
