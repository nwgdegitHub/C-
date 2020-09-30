//
//  main.cpp
//  传值传地址传引用
//
//  Created by LiuWei on 2019/3/2.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>

void swap01(int x, int y);
void swap02(int *x, int *y);
void swap03(int &x, int &y);

int main(int argc, const char * argv[]) {
    
    int a = 10;
    int b = 20;
    
//    swap01(a, b);
    
//    swap02(&a, &b);
    
//    swap03(a, b);
    
    //经历过swap函数之后a b值是多少呢？
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    
    return 0;
}

void swap01(int x, int y){
    
    int temp = y;
    y = x;
    x = temp;
    
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    
}


void swap02(int *x, int *y){
    
    int temp = *y;
    *y = *x;
    *x = temp;
    
    std::cout << "*x = " << *x << std::endl;
    std::cout << "*y = " << *y << std::endl;
    
}

void swap03(int &x, int &y){ //传引用类似于传地址 都能改变原来的变量值 
    
    int temp = y;
    y = x;
    x = temp;
    
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    
}
