#include "login.h"
#include "ui_login.h"

#include "qpnglineeditex.h"

#include "daofactory.h"


login::login(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{

    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/pic/school.png"));
    QImage Image;
    Image.load(":/pic/school.png");
    //QPixmap pixmap = QPixmap::fromImage(Image);
    //int with = ui->label_3->width();
    //int height = ui->label_3->height();
    //QPixmap fitpixmap = pixmap.scaled(with, height, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);  // 饱满填充
    //QPixmap fitpixmap = pixmap.scaled(with, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    //ui->label_3->setPixmap(fitpixmap);

    new QPngLineEdit("", ui->account_lineEdit, "users.png");
    new QPngLineEdit("", ui->password_lineEdit, "password.png");
    ui->account_lineEdit->setPlaceholderText("Username");
    ui->password_lineEdit->setPlaceholderText("Password");


    //ui->account_lineEdit->setTextMargins(50, 1, 1, 1);
    connect(ui->loginButton, &QPushButton::clicked, this, [this]()
    {
        QString account = ui->account_lineEdit->text();
        QString password = ui->password_lineEdit->text();
        qDebug() << account << endl;
        qDebug() << password << endl;
        Dao* dao = DaoFactory::getDao();
        if(dao->verify(LoginUser(102, account, password)))
        {
            qDebug() << "Success Login";
        }
        else
        {
            qDebug() << "Login Failed";
        }
    });
}

login::~login()
{
    delete ui;
}

