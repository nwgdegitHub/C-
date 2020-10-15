//
//  main.cpp
//  10 类模板碰到继承的问题以及解决_
//
//  Created by udc on 2020/10/15.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
using namespace std;

template <class T>
class Base{
public:
    T m_A;
};


class Child :public Base<int>{};//子类必须有T的类型 否则无法分配内存


template<class T1,class T2>
class Child2 :public Base<int>{//Child2 也是模版类
  
public:
    T1 m_B;
    
    Child2(){
        
        cout << typeid(T1).name() << endl;
        cout << typeid(T2).name() << endl;
    }
};



int main(int argc, const char * argv[]) {
    
    Child2<int,double>child;
    
    return 0;
}
