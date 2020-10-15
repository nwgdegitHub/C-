//
//  main.cpp
//  友元函数类内实现
//
//  Created by udc on 2020/10/15.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>

using namespace std;

//类外实现 必须让编译器看到声明
template<class T1, class T2> class Person;

template<class T1, class T2> void showPerson(Person<T1,T2> &p);


template<class T1, class T2>
class Person{

    friend void printPerson(Person<T1,T2> &p){
        
        cout << p.m_Name << "+" << p.m_age << endl;
    }
    
    friend void showPerson<>(Person<T1,T2> &p); //类外实现 必须加<>
    
public:
    Person(T1 name,T2 age){
        
        this->m_Name = name;
        this->m_age = age;
    }
    
private:
    T1 m_Name;
    T2 m_age;
};


//友元函数类外实现
template<class T1, class T2>
void showPerson(Person<T1,T2> &p){
    
    cout << "类外实现" << p.m_Name << "+" << p.m_age << endl;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    Person<string, int>p("123",1);
    printPerson(p);
    showPerson(p);
    
    std::cout << "Hello, World!\n";
    return 0;
}
