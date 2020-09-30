//
//  main.cpp
//  this指针的使用
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
    
    Person(int m_age){
        //m_age = m_age; //看输出
        this->m_age = m_age; //用this解决了命名冲突
    }
    
    
    void compareAge(Person &p){
        if (this->m_age == p.m_age) {
            cout << "年龄相等" << endl;
        }
        else
        {
            cout << "年龄不等" << endl;
        }
    }
    
    Person & PlusAge(Person &p){
        
        this->m_age += p.m_age;
        
        
        return *this;
        
    }
    
    int m_age;
    void func(){}; //void func(Person *this){}; 这个是编译器加的 this指针隐含在每个类的非静态成员函数中 注意静态的不会加
    
    
 
};

void test02(){
    Person p1(10);
    
    Person p2(20);
    
    p2.compareAge(p1);
    //p2.PlusAge(p1);
    p2.PlusAge(p1).PlusAge(p1); // 链式编程 注意：函数必须返回引用
    
    cout << "p2的年龄" << p2.m_age << endl;

    
}


int main(int argc, const char * argv[]) {
    
    test02();
    return 0;
}

