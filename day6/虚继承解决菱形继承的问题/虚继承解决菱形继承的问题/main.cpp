//
//  main.cpp
//  虚继承解决菱形继承的问题
//
//  Created by udc on 2020/10/13.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>

using namespace std;

class Base{
public:
    int _base=1;
    void fun(){
        cout<<"Base()"<<endl;
    }
};

class A:virtual public Base{
public:
    int _base=2;
};

class C:virtual public Base{
public:
    int _base=3;
};

class D:public A,public C{

};

int main(int argc, const char * argv[]) {
    D d;
    d.fun();//Base() 如果不用virtual会报错
    d.A::fun();//Base()
    d.C::fun();//Base()
    cout<<d.Base::_base<<endl;//1
    cout<<d.A::_base<<endl;//2
    cout<<d.C::_base<<endl;//3
    return 0;
}

//注意:虚继承不同于虚函数，虚函数在C++中主要用于实现多态
