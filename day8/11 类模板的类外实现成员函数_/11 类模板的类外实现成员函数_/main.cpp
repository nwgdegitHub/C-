//
//  main.cpp
//  11 类模板的类外实现成员函数_
//
//  Created by udc on 2020/10/15.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
using namespace std;

template <class T1,class T2>
class Person{
    
public:
    T1 m_Name;
    T2 m_Age;
    
    Person(T1 name,T2 age);
    
    void showPerson();
    
};

template <class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age){
    
    this->m_Name = name;
    this->m_Age = age;
}

template <class T1,class T2>
void Person<T1,T2>::showPerson(){
    cout << this->m_Name << "+" << this->m_Age << endl;
}



int main(int argc, const char * argv[]) {
    
    Person<string, int>p("12345", 1);
    p.showPerson();
    return 0;
}
