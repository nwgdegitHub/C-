//
//  main.cpp
//  常函数和常对象
//
//  Created by LiuWei on 2019/4/5.
//  Copyright © 2019 xxx. All rights reserved.
//

#include <iostream>
using namespace std;


class Person {
    
    
    
public:
    
    Person(){
        
        this->m_A = 0;
    }
    
    void show() {
        
    }
    
    void showInfo() const{
        
        //this->m_A = 100;
        this->m_B = 100;
        cout << "m_A" << this->m_A << endl;
    }
    
    int m_A;
    mutable int m_B;
    //在函数后加了const 之后如果执意要访问m_A ,只能加mutable
};




int main(int argc, const char * argv[]) {
    
    Person p1;
    p1.showInfo();
    
    const Person p2;
    //p2.show();//常对象 不可以调用普通的成员函数
    p2.showInfo();//常对象 可以调用常成员函数
    
    cout << p2.m_A << endl;
    
    return 0;
}



