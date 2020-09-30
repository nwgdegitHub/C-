//
//  main.cpp
//  构造函数和析构函数
//
//  Created by LiuWei on 2019/3/10.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>

using namespace std;
void test();

int main(int argc, const char * argv[]) {
    test();
    return 0;
}



class Person {
    
public:
    
    Person(){
        cout << "构造函数" << endl;
    }
    
    Person(int a){
        cout << "构造函数可以重载" << endl;
    }
    
    Person(const Person& p){
        m_Age = p.m_Age;
        cout << "拷贝构造函数 加const是为了不修改p" << endl;
    }
    
    ~Person(){
        cout << "析构函数" << endl;
    }
    
    
    int m_Age;
    

};

//TODO:这种写在一个文件中 test 需要写在类之后
void test(){
    //以下都是匿名对象调用 匿名调用的特点是编译器会默认调用析构函数
    Person p;
    Person p1(1);
    p1.m_Age = 10;
    Person p2(p1);

    cout << "p2的年龄" << p2.m_Age << endl;

    Person p3 = Person(3); //函数执行完了 才会调用析构函数
    
//    Person(p2); //不可以用拷贝构造函数初始化匿名对象
    
}
