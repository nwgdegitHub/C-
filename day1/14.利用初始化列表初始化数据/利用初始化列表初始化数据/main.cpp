//
//  main.cpp
//  利用初始化列表初始化数据
//
//  Created by LiuWei on 2019/3/10.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>
using namespace std;
class Person {
    
    
public:
    
//    //利用有参构造初始化数据
//    Person(int a,int b){
//        m_A = a;
//        m_B = b;
//
//    }
    
    Person():m_A(5),m_B(6){

    }
    
//    Person(int a,int b):m_A(a),m_B(b){
//        
//    }
    
    int m_A;
    int m_B;
    
};
int main(int argc, const char * argv[]) {
    
//    Person p1 = Person(1,2);
//    cout << "p1.m_A" << p1.m_A << endl;
//    cout << "p1.m_B" << p1.m_B << endl;
    
//    Person p2 = Person(3, 4);
//    cout << "p2.m_A" << p2.m_A << endl;
//    cout << "p2.m_B" << p2.m_B << endl;
    
    Person p3 = Person();
    cout << "p3.m_A" << p3.m_A << endl;
    cout << "p3.m_B" << p3.m_B << endl;
    
    return 0;
}


