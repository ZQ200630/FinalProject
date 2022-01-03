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
    bool deleteUserById(int id); // 删除用户, 返回值表示是否删除成功
    bool updateUser(User user); // 更新用户, 返回值表示是否成功
    User getUserById(int id); //通过ID查找用户
    QList<User> getUsersByName(QString name); //通过名字查找用户
    QList<User> getAllUsers(); //查找全部用户

    bool addProduct(Product product); // 添加商品, 返回值表示添加成功或失败
    bool deleteProductById(int id); // 删除商品, 返回值表示删除成功或失败
    bool updateProduct(Product product); // 更新商品, 返回值表示更新成功或失败
    Product getProductById(int id); // 根据ID查找商品
    QList<Product> getProductsByName(QString name); // 根据名字查找商品
    QList<Product> getAllProducts(); // 查找所有商品

    bool addSupplier(Supplier supplier); // 添加供应商
    bool deleteSupplierById(int id); // 根据ID删除供应商
    bool updateSupplier(Supplier supplier); // 更新供应商
    Supplier getSupplierById(int id); // 根据ID返回供应商
    QList<Supplier> getSuppliersByName(QString name); // 根据名字返回供应商
    QList<Supplier> getAllSuppliers();  // 返回所有供应商

private:
    QDB database;
};

#endif // DAO_H
