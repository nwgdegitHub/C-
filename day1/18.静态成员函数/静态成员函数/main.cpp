//
//  main.cpp
//  静态成员函数
//
//  Created by LiuWei on 2019/3/17.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>

using namespace std;

class Person {
    
    
public:
    Person(){
        
    }
    
    static int m_Age;
    
    int m_A;
    
    static void func(){
        //m_A = 10; //error
        m_Age = 10;
        cout << "static void func" << endl;
    }
    
    void func3(){
        m_A = 1;
        m_Age = 2;
    }
private:
    
    static int m_other;
    
    static void func2(){
        
    }
};

int Person::m_Age = 0;
int Person::m_other = 10;

int main(int argc, const char * argv[]) {
    
    Person p1;
    Person p2;
    
    p1.func();
    p2.func();
    
//    p1.func2(); // 无法访问
//    Person::func2(); // 无法访问 私有的只能在类内部访问
    
    return 0;
}
