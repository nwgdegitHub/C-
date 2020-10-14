//
//  main.cpp
//  关系运算符重载
//
//  Created by udc on 2020/10/13.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
using namespace std;

class MyPrint{
    
public:
    void operator()(){
        cout << "鸡你太美" << endl;
    }
    
};


class Person{
    
public:
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    bool operator==(Person &p){
        
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
            return true;
        }
        return false;
    }
    
public:
    string m_Name;
    int m_Age;
};

int main(int argc, const char * argv[]) {
    
    Person p1("123",10);
    Person p2("123",10);
    
    if (p1==p2) {
        cout << "p1和p2相等" << endl;
    }
    else{
        cout << "p1和p2不相等" << endl;
    }
    
    MyPrint myprint;
    myprint();
    
    return 0;
}
