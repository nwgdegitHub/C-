//
//  main.cpp
//  多继承
//
//  Created by udc on 2020/10/13.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
using namespace std;

class Base1{
  
public:
    Base1(){
        m_A = 1;
    }
    int m_A;
};

class Base2{
  
public:
    Base2(){
        m_B = 2;
    }
    int m_B;
};

class Son :public Base1,public Base2{
    
public:
    int m_C;
    int m_D;
};






int main(int argc, const char * argv[]) {
    // insert code here...
    
    Son s1;
    
    std::cout << s1.m_A;
    return 0;
}
