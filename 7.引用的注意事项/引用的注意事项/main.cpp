//
//  main.cpp
//  引用的注意事项
//
//  Created by LiuWei on 2019/3/2.
//  Copyright © 2019年 xxx. All rights reserved.
//

//1. 引用必须 有一块合法的内存空间
#include <iostream>

int& dowork();
int& dowork2();

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int &ret = dowork();

    std::cout << "ret = " << ret << std::endl;//无效值
    
    int &ret2 = dowork2();

    std::cout << "ret2 = " << ret2 << std::endl;
    
    dowork2() = 1000;//如果函数的返回值是引用 那么这个函数的调用可以作为左值 
    
    return 0;
}

int& dowork(){
    int a = 10;
    return a; //2 不要返回局部变量的引用 a出了{}就是一个无效的了
}

int& dowork2(){
    static int a = 10;//Static修饰局部变量叫做静态局部变量仅在本函数体内访问，本文件其他函数体内不可访问；但静态局部变量的值在程序运行期间不会销毁；
    return a;
}
