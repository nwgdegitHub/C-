//
//  main.c
//  CDemo
//
//  Created by LiuWei on 2020/9/27.
//  Copyright © 2020 xxx. All rights reserved.
//

#include <stdio.h>

void test();//声明了 函数就可以写到mian()后面 因为C是从前往后执行的 变量 函数必须提前声明

struct Person{
    int a;
//    void abc();
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    test(1);
    
    int a = 10;
    int b = 20;
    int c = a>b?a:b;
    printf("%d\n",c);
    
    
    const int m_B = 20; //const 修饰局部变量 是一个伪常量 ，编译器会为其分配内存 ，不可以初始化数组
    
    int *p = (int *)&m_B;
    *p=300;
    printf("m_B = %d---- *p=%d\n",c,*p);
    
    
    
    
    
    
    
    return 0;
}
void test(a){
   printf("Hello, C!\n");
    printf("Hello, %d!\n",a);
}

