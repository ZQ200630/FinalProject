#ifndef DAO_H
#define DAO_H

#include <qdb.h>

#include <loginuser.h>

#include "user.h"
#include "supplier.h"
#include "product.h"

class Dao
{
public:
    Dao();
    void test();
    bool verify(LoginUser user);
    bool addUser(User user); // 添加用户, 返回值表示添加成功或失败
    bool deleteUser(int id); // 删除用户, 返回值表示是否删除成功
    bool updateUser(User user); // 更新用户, 返回值表示是否成功
    User getUserById(int id); //通过ID查找用户
    QList<User> getUsersByName(QString name); //通过名字查找用户
    QList<User> getAllUsers(); //查找全部用户

    bool addProduct(Product product); // 添加商品, 返回值表示添加成功或失败



private:
    QDB database;
};

#endif // DAO_H
