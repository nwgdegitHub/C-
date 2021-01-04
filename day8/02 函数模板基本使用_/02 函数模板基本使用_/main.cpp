//
//  main.cpp
//  02 函数模板基本使用_
//
//  Created by udc on 2020/10/14.
//  Copyright © 2020 udc. All rights reserved.

//  当需要定义多个功能相同 数据类型不同的函数时，可以使用函数模版
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


template<typename T> //template<typename T> 等价于 template<class T> //typename和class可以混用
void mySwap2(){}


template<typename T,typename C>
void display(T a, C b){
    cout << a << "----" << b << endl;
}




int main(int argc, const char * argv[]) {
    
    int a = 1,b = 2;
    char c = '1',d = '2';
    
    swapInt(a,b); //可以显示地给出类型 也可以不给
   
    cout << showPlus(a,c) << endl; //普通函数会对参数类型进行隐式类型转换
    
    //mySwap(a,b); //自动类型推导
    
//    mySwap(a,c);
    
    mySwap(d,c);
    
//    mySwap<int,char>(a, c); //要声明多个
    
    display<int, char>(a,c);
    
    
    
    mySwap<int>(a,b);
    
    mySwap2<double>();
    
    return 0;
}
