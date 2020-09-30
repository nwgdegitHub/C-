//
//  main.cpp
//  引用
//
//  Created by LiuWei on 2019/3/2.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>

void test01();
void test02();

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    test01();
    
    test02();
    
    return 0;
}

//C++中引用的本质是一个指针常量 
//C++中引用 又叫起别名
//& 写左边叫引用 写右边叫取地址

void test01(){
    int a = 10;
    int &b = a; //一定要用右值初始化左边 因为引用的本质是一个指针常量
//    b = 20; //引用初始化之后就不可以修改了
    std::cout << "a = " << a << std::endl; //10
    std::cout << "b = " << b << std::endl; //10
}

void test02(){
    int arr[10];
    for (int i = 0; i<10; i++) {
        arr[i] = i;
    }
    int (&pArr)[10] = arr;
    for (int i = 0; i<10; i++) {
        std::cout << "pArr " << pArr[i] << std::endl;
    }
    
    //另外一种方式
    typedef int(ARRAYREF)[10]; //ARRAYREF 此时是一个具有10个元素的int类型数组
    ARRAYREF &pArr2 = arr; //引用语法
    for (int i = 0; i<10; i++) {
        std::cout << "pArr2 " << pArr2[i] << std::endl;
    }
    

    
}
