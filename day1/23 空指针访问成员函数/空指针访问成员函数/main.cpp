//
//  main.cpp
//  空指针访问成员函数
//
//  Created by LiuWei on 2019/4/5.
//  Copyright © 2019 xxx. All rights reserved.
//


// 不同对象调用func()内部是如何去区分的呢？
// this指针指向被调用的成员函数所属的对象

#include <iostream>
using namespace std;



class Person {
    
    
public:
    void show() {
        
        cout << "Person show" << endl;
    }
    
    void showAge() {
//        if(this == NULL) {
//            return;
//        }
        cout << m_Age << endl;
    }
    
    
    int m_Age;
    
    
    
};

void test02(){
    
    Person *p = NULL;
    p->show();  //没用到this指针
    p->showAge(); //用到了隐含的this指针
    
}


int main(int argc, const char * argv[]) {
    
    test02();
    return 0;
}

