//
//  main.cpp
//  常量引用
//
//  Created by LiuWei on 2019/3/14.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>

using namespace std;

//常量引用通常用来修饰形参
void showValue(const int &x){
    
//    x = 2000; //形参有const 不允许改
    cout << x << endl;
}

int main(int argc, const char * argv[]) {
    
    cout << sizeof("扭扭扭扭") << endl;
    
    //int &a = 10; // 不合法
    const int &a = 10; //编译器处理：int tmp = 10; const int&ref = tmp;
//    a = 1000;
    
    //绕过编译器检查 （不要这么做 因为const就是为了不要改）
    int *p = (int *)&a;
    *p = 1000;
    
    
    int b = 20;
    showValue(b);
    return 0;
}



