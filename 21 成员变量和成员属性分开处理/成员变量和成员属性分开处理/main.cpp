//
//  main.cpp
//  成员变量和成员属性分开处理
//
//  Created by LiuWei on 2019/3/31.
//  Copyright © 2019 xxx. All rights reserved.
//

#include <iostream>
using namespace std;



class Person {
    
    
public:
    int m_age; //4
    void func(){}; //不会占用内存
    static void func2(){};
    double m_num; //
};

//结论：非静态成员变量才属于对象
int main(int argc, const char * argv[]) {
    
    //空类大小为1 每个实例的对象都有独一无二的地址 char维护这个地址
    cout << "size of(Person)" << sizeof(Person) << endl;
    return 0;
}
