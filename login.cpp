#include "login.h"
#include "ui_login.h"

#include "qpnglineeditex.h"


login::login(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{

    ui->setupUi(this);

    setFixedSize(1920, 1080);

    this->setWindowIcon(QIcon(":/pic/school.png"));
    this->setFixedSize(662, 442);
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
}

login::~login()
{
    delete ui;


}

void login::on_mannager_Btn_clicked()
{

}

void login::on_staff_Btn_clicked()
{

}


//退出
void login::on_exit_btn_clicked()
{
    this->close();
}
