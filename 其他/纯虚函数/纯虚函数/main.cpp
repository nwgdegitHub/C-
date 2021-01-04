//
//  main.cpp
//  纯虚函数
//
//  Created by udc on 2020/11/26.
//

#include <iostream>

class A{
public:
    virtual void func() = 0; //子类没有实现 也不会报错
    virtual void test(){}; //子类没有实现 也不会报错
};

class B : public A{
public:
     void func(){}
};

class C : public A{
    
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
//    A a = new A(); //实例一个包含纯虚函数的基类 会报错
    B *b = new B(); //实例化子类时 必须实现基类中的纯虚函数
    b->func();
    
    return 0;
}
