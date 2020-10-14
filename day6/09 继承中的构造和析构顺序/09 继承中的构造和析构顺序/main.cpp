#include<iostream>
using namespace std;

//继承中的构造和析构顺序
class Base
{
public:
    Base()
    {
        m_A = 200;
        cout << "Base构造函数！" << endl;
    }

    ~Base()
    {
        cout << "Base析构函数！" << endl;
    }
    int m_A;
    static int m_B;
};
int Base::m_B = 1;

class Son :public Base
{
public:
    Son()
    {
        m_A = 100;
        cout << "Son构造函数！" << endl;
    }

    ~Son()
    {
        cout << "Son析构函数！" << endl;
    }
    int m_A;
    
};

void test01()
{
    Son s;
    
    //继承中的构造和析构顺序如下：
    //先构造父类，再构造子类，析构顺序与构造顺序相反
    cout << s.m_A << endl;
    cout << s.Base::m_A << endl;//同名成员变量的访问,同名函数一样
    
    cout << Son::m_B << endl;//子类可以直接继承静态成员变量
}

int main()
{
    test01();
    
    return 0;
}
