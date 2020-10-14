//
//  main.cpp
//  类模版
//
//  Created by udc on 2020/10/14.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
using namespace std;

template <class NameType, class AgeType>
class Person{
    
public:
    Person(NameType name,AgeType age){
        this->m_Name = name;
        this->m_Age = age;
    };
    
    void showPerson(){
        cout << "name: " << this->m_Name << "***" << "age: " << this->m_Age << endl;
        
    }
    
    NameType m_Name;
    AgeType m_Age;
};

class Person1{
  
public:
    void showPerson1(){
        cout << "Person1..." << endl;
    }
};

class Person2{
    public:
    void showPerson2(){
        cout << "Person2..." << endl;
    }
};

template<class T>
class myClass{
  
public:
    T obj;
    void func1(){
        obj.showPerson1();
    }
    void func2(){
        obj.showPerson2();
    }
    
};

//****************类模版做函数参数****************
// 1. 指定传入类型
void doWork(Person<string,int> &p){
    p.showPerson();
}

//2. 参数模版化
template<class T1,class T2>
void doWork2(Person<T1,T2> &p){
    p.showPerson();
}

//3 .整体类型化
template<class T>
void doWork3(T &p){
    p.showPerson();
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    //类模版不支持 自动类型推导
//    Person p("123",100);
    
    //显式指定类型
    Person<string,int> p("123456789",100);
    
    myClass<Person1>m;
    m.func1();
    
    
    doWork(p);
    doWork2(p);
    doWork3(p);
    
    std::cout << "Hello, World!\n";
    return 0;
}
