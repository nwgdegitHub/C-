//
//  main.cpp
//  加号运算符重载
//
//  Created by LiuWei on 2019/4/9.
//  Copyright © 2019 xxx. All rights reserved.
//

#include <iostream>
using namespace std;

class Person {
    
    
public:
    Person()
    {
        
    }
    Person(int a,int b):m_A(a),m_B(b)
    {
        
    }
//    Person operator+(Person& p)
//    {
//        Person tmp;
//        tmp.m_A = this->m_A + p.m_A;
//        tmp.m_B = this->m_B + p.m_B;
//        return tmp;
//
//    }
    int m_A;
    int m_B;
};

//用全剧函数重载
Person operator+(Person& p1, Person& p2) {
    Person p;
    p.m_A = p1.m_A + p2.m_A;
    p.m_B = p1.m_B + p2.m_B;
    return p;
}


int main(int argc, const char * argv[]) {
    
    Person p1(1,2);
    Person p2(3,4);
    
    Person p3 = p1 + p2;
    cout << p3.m_A << endl;
    cout << p3.m_B << endl;

    return 0;
}
