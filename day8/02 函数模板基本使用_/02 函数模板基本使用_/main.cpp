//
//  main.cpp
//  02 函数模板基本使用_
//
//  Created by udc on 2020/10/14.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
using namespace std;


void swapInt(int &a, int &b){
    
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
}

void swapDouble(double &a, double &b){
    
}

//普通函数
int showPlus(int a, int b){
    
    return a+b;
}

//如果出现重载 优先使用普通函数

template<class T> //告诉编译器 下面出现的T不要报错 T是一个通用类型
void mySwap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}


template<typename T> //template<typename T> 等价于 template<class T>
void mySwap2(){}


int main(int argc, const char * argv[]) {
    
    int a = 1,b = 2;
    char c = '1';
    
    swapInt(a,b);
    
    cout << showPlus(a,c) << endl;//普通函数会对参数类型进行隐式类型转换
    
    mySwap(a,b); //自动类型推导
    
//    mySwap(a,c);
    
    mySwap<int>(a,b);
    
    mySwap2<double>();
    
    return 0;
}
