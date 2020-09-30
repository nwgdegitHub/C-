//
//  main.cpp
//  左移运算符重载
//
//  Created by LiuWei on 2019/4/9.
//  Copyright © 2019 xxx. All rights reserved.
//

#include <iostream>
using namespace std;

class Person {
    
friend ostream& operator<< (ostream& cout, Person& p); //防止成员变量私有
    
public:
    
    Person(){
        
    }
    
    Person(int a ,int b)
    {
        this->m_A = a;
        this->m_B = b;
    }
    
//    ostream& operator<<(Person& p)
//    {
//
//    }
    //左移运算符不可以写成成员函数重载
    
private:
    
    int m_A;
    int m_B;
    
};


ostream& operator<< (ostream& cout, Person& p)
{
    cout << "m_A = " << p.m_A << " " << "m_B = " << p.m_B << endl;
    return cout;
}


int main(int argc, const char * argv[]) {
    
    Person p1(1,2);
    
//    cout << p1.m_A << endl;
    
    cout << p1 << endl;
    
    
    return 0;
}
