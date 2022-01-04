#include "dao.h"

#include "QDebug"

#include "QCoreApplication"
#include "QDir"

Dao::Dao()
{
    database.Connect("../FinalProject/db/FinalProject.db");
}

void Dao::test()
{
    QSqlQuery query = database.Query("select * from users");
    query.exec();

    while(query.next())
    {
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        //        int age = query.value(2).toInt();
        qDebug() << QString("id:%1    name:%2").arg(id).arg(name);
    }
}

bool Dao::verify(LoginUser user)
{
    QString sql = QString("select * from test where name = '%1'").arg(user.name);
    QSqlQuery query = database.Query(sql);
    query.exec();
    if(query.next())
    {
        QString password = query.value(2).toString();
        if(password == user.password)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

bool Dao::addUser(User user)
{
    return true;
}

bool Dao::deleteUserById(int id)
{
    return true;
}

bool Dao::updateUser(User user)
{
    return true;
}

User Dao::getUserById(int id)
{
    User user = User();
    return user;
}

QList<User> Dao::getUsersByName(QString name)
{
    QList<User> userList = QList<User>();
    return userList;
}

QList<User> Dao::getAllUsers()
{
    QList<User> userList = QList<User>();
    return userList;
}

bool Dao::addProduct(Product product)
{
    return true;
}

bool Dao::deleteProductById(int id)
{
    return true;
}

bool Dao::updateProduct(Product product)
{
    return true;
}

Product Dao::getProductById(int id)
{
    Product product = Product();
    return  product;
}

QList<Product> Dao::getProductsByName(QString name)
{
    QList<Product> productList = QList<Product>();
    return productList;
}

QList<Product> Dao::getAllProducts()
{
    QList<Product> productList = QList<Product>();
    return productList;
}

bool Dao::addSupplier(Supplier supplier)
{
    return true;
}

bool Dao::deleteSupplierById(int id)
{
    return true;
}

bool Dao::updateSupplier(Supplier supplier)
{
    return true;
}

Supplier Dao::getSupplierById(int id)
{
    Supplier supplier = Supplier();
    return supplier;
}

QList<Supplier> Dao::getSuppliersByName(QString name)
{
    QList<Supplier> supplierList = QList<Supplier>();
    return supplierList;
}

QList<Supplier> Dao::getAllSuppliers()
{
    QList<Supplier> supplierList = QList<Supplier>();
    return supplierList;
}
