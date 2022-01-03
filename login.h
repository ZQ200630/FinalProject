#ifndef LOGIN_H
#define LOGIN_H


#include <iostream>
#include <list>

#include <QMainWindow>
#include <QMessageBox>
#include <QtDebug>
#include <QJsonParseError>
//文件IO
#include <QFile>
#include <QTextCodec>

//JSON数据解析
#include<QJsonArray>  //[]
#include <QJsonDocument> //JSON文档 --- 将服务器数据转换成一个QJsonDocument
#include <QJsonObject> //{}
#include <QJsonArray>

#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>

#include <QDateTime>
#include <QDir>



namespace Ui
{
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget* parent = nullptr);
    ~login();

private slots:



private:
    Ui::login* ui;
    QString account;
    QString password;
};

#endif // LOGIN_H
