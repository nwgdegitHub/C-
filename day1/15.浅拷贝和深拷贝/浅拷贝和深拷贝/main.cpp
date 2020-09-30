//
//  main.cpp
//  浅拷贝和深拷贝
//
//  Created by LiuWei on 2019/3/10.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
class Person {
    
    
public:
    Person(){
        
    }
    Person(char *name,int age){
        m_age = age;
        m_Name = (char *)malloc(strlen(name)+1);
        strcpy(m_Name, name);
    }
    
    //系统提供默认拷贝构造 是简单的值拷贝 而浅拷贝会释放堆区空间两次 导致崩溃
    //下面自己写拷贝构造（必须，不然崩）
    Person(const Person&p){
        m_age = p.m_age;
        m_Name = (char *)malloc(strlen(p.m_Name)+1);
        strcpy(m_Name, p.m_Name);
    }
    
    ~Person(){
        cout << "析构函数调用" << endl;
        if (m_Name!=NULL) {
            free(m_Name);
            m_Name = NULL;
        }
    }
    char *m_Name;
    int m_age;
};
void test01(){
    Person p1("敌法",10);
    Person p2(p1);
    
}

int main(int argc, const char * argv[]) {
    test01();
    return 0;
}
