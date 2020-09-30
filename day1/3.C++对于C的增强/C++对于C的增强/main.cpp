//
//  main.cpp
//  C++对于C的增强
//
//  Created by LiuWei on 2019/3/1.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>
#include <string>
void test06();
void test07();
void test08();
void test02();


int main(int argc, const char * argv[]) {
   
    
    //test06();
//    test07();
    
//    test08();
    
    test02();
    
    return 0;
}

//1> . 如下两句C过了 C++严格了全剧变量的检测
//int x;
//int x = 10;


//2> .函数检测增强 参数类型增强 返回值监测增强
// 函数调用参数检测增强 C中要2个你可以传3个 但是C++中不行 这句话是不对的
// 经过验证 C中要2个就只能传2个,C++也一样 C形参可以不带类型,会报警告 但C++必须带类型
int getRectS(int w,int h){
    return w*h;
}
void test02(){
    getRectS(10,20);
}


//3> .必须对malloc返回类型转换 malloc返回值是void* 下面这个在C++中必须强转成char*
//void test03(){
//    char *p = malloc(sizeof(64));
//}


//4> .C++ 结构体中还能定义函数而C不能
    //C中使用结构体需要加struct 关键字 而C++中不用
struct Person{
    int age;
    void plusAge();
};


//5> .C++ 中引入了bool类型 C中没有


//6> .C++ 三目运算得到的是变量 而C返回的是值

void test06()
{
    int a = 10;
    int b = 20;
    a>b?a:b=100; //C中不允许这么写 20 = 100
                 //C++中 b = 100
    
    std::cout << "a= " << a << std::endl; //10
    std::cout << "b= " << b << std::endl; //100
}


//7> const增强
const int m_A = 10; // 全局区里不能修改，是只读变量. c/c++相同

void test07(){
    const int m_B = 20; //C 中是伪常量 ，编译器会为其分配内存 ，不可以初始化数组 。
                        //C++中是真常量，可以初始化数组，编译器不会为其分配内存。即使用如下指针取值，也只是分配临时内存
 //    m_B = 30;
    
    int *p = (int *)&m_B; //只要是分配内存的 全可以取地址修改 (绕过编译器检测 )
    *p = 30;
    
    std::cout << "m_B= " << m_B << std::endl; //20
    
    int arr[m_B];//没有报错说明m_B是真常量
    
    int *p1 = (int*)&m_A;
    *p1 = 40; //报错了，说明全局的const变量不能修改
    
    
    extern const int a; //C 中默认const是外部链接 使用extern意思是你给我从外面找一个叫 a 的变量
                        //C++ 中是内部连接, 只能在当前作用域(当前文件)下找到, 要找到需要在声明的那里加extern
    
}

//const分配内存情况
void test08(){
    int a = 10;
    const int b = a; //用普通变量初始化const变量 会分配内存
    
    //b = 1000; //直接赋值不会分配内存
    int *p = (int *)&b;
    *p = 1000;
    
    std::cout << "b= " << b << std::endl;
}

//自定义数据类型 使用const 创建时也会分配内存
struct Person2 {
    std::string name;
};

void test09(){
    const Person2 p2;
    //p2.name = "aaa"; //b报错
    
    Person2 *p3 = (Person2 *)&p2;
    (*p3).name = "bbb";
    p3->name = "ccc";
    
    
    
}

#define MAX 2019 //预处理了 编译器根本没管 而且没有类型




















