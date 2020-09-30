//
//  main.cpp
//  拷贝构造函数的调用时机
//
//  Created by LiuWei on 2019/3/10.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>
using namespace std;
void test03();

int main(int argc, const char * argv[]) {
    test03();
    
    return 0;
}

class Person {
    
    
public:
    Person(){
        cout << "默认构造函数" << endl;
    }
//    Person(int a){
//        cout << "有参构造函数" << endl;
//    }
//    Person(Person& p){
//        cout << "拷贝构造函数" << endl;
//    }
    ~Person(){
        cout << "析构函数" << endl;
    }
    int m_Age;
};

//1.用已经创建好的对象来初始化新的对象
void test(){
    Person p1;
    p1.m_Age = 10;
    
    Person p2(p1);
}

//2.以值传递的方式给函数参数传值 (一般我们都用引用传递 因为不会开辟新的内存)
void doWork(Person p1){//Person p1 = Person(p);
    
}

void test02(){
    Person p;
    p.m_Age = 20;
    
    doWork(p);
}

//3.以值方式返回局部对象(用的不多)
Person doWork2(){
    Person p1;
    return p1;
}

void test03(){
    Person p = doWork2();
}
