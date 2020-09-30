//
//  main.cpp
//  静态成员变量
//
//  Created by LiuWei on 2019/3/17.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>
using namespace std;


class Person {
    
    
public:
    static int m_Age; //被所有类对象共享 编译阶段就分配了内存 在main函数调用之前 正是因为这样 所以静态成员变量在类内声明 类外初始化
};

int Person::m_Age = 10; //静态成员变量在类内声明 类外初始化

int main(int argc, const char * argv[]) {
    
    Person p1 = Person();
    p1.m_Age = 20;
    
    Person p2 = Person();
    p2.m_Age = 30;
    
    cout << "p1.m_Age" << p1.m_Age << endl;
    cout << "p2.m_Age" << p2.m_Age << endl;
    
    return 0;
}
