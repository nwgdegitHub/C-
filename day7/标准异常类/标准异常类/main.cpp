//
//  main.cpp
//  标准异常类
//
//  Created by udc on 2020/11/20.
//
//bad_typeid、bad_cast、bad_alloc、ios_base::failure、out_of_range 都是 exception 类的派生类。C++ 程序在碰到某些异常时，即使程序中没有写 throw 语句，也会自动拋出上述异常类的对象。这些异常类还都有名为 what 的成员函数，返回字符串形式的异常描述信息。使用这些异常类需要包含头文件 stdexcept。

#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
using namespace std;

//1) bad_typeid
//使用 typeid 运算符时，如果其操作数是一个多态类的指针，而该指针的值为 NULL，则会拋出此异常。

//2) bad_cast
//在用 dynamic_cast 进行从多态基类对象（或引用）到派生类的引用的强制类型转换时，如果转换是不安全的，则会拋出此异常。

//3) bad_alloc
//在用 new 运算符进行动态内存分配时，如果没有足够的内存，则会引发此异常。

//4) out_of_range
//用 vector 或 string 的 at 成员函数根据下标访问元素时，如果下标越界，则会拋出此异常。

class Base
{
    virtual void func() {}
};
class Derived : public Base
{
public:
    void Print() {}
};
void PrintObj(Base & b)
{
    try {
        Derived & rd = dynamic_cast <Derived &>(b);
        //此转换若不安全，会拋出 bad_cast 异常
        rd.Print();
    }
    catch (bad_cast & e) {
        cerr << e.what() << endl;
    }
}
int main()
{
//    Base b;
//    PrintObj(b);
    
//    try {
//        cout << "123";
//            char * p = new char[0xffffffff];  //无法分配这么多空间，会抛出异常
//        }
//        catch (bad_alloc & e)  {
//            cerr << e.what() << endl;
//        }
    
    vector<int> v(10);
        try {
            v.at(100) = 100;  //拋出 out_of_range 异常
        }
        catch (out_of_range & e) {
            cerr << e.what() << endl;
        }
        string s = "hello";
        try {
            char c = s.at(100);  //拋出 out_of_range 异常
        }
        catch (out_of_range & e) {
            cerr << e.what() << endl;
        }
    
    return 0;
}
