#include "mainwindow.h"

#include <QApplication>

#include <QFile>

#include "login.h"
#include "qpnglineeditex.h"

#include "dao.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    //定制皮肤在程序运行之前设置
    QFile file(":/qss/mystyle.qss");
    file.open(QIODevice::ReadOnly);
    QByteArray array =  file.readAll();
    // #define qApp (static_cast<QApplication *>(QCoreApplication::instance()))
    qApp->setStyleSheet(array);

    login log;
    log.setFixedSize(480, 320);
    log.show();

    //    Dao dao;
    //    dao.test();

    //    MainWindow w;

    //    w.show();
    return a.exec();
}
