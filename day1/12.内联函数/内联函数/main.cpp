//
//  main.cpp
//  内联函数
//
//  Created by LiuWei on 2019/3/2.
//  Copyright © 2019年 xxx. All rights reserved.
//  https://www.cnblogs.com/fnlingnzb-learner/p/6423917.html
// https://www.cnblogs.com/chenwx-jay/p/inline_cpp.html

#include <iostream>


inline const char* dbtest(int a){
    return (a % 2 > 0) ? "奇" : "偶";
}


//inline void Foo2(int x);
class A{
public:
    void Foo(int x){} //给出定义时 自动地成为内联函数 内联函数需要注意的是函数体不能过于复杂
    //void Foo2(int x); //未给定义 需要在外面定义
};



int main(int argc, const char * argv[]) {
    
    int i = 0;
    for (i=1; i<100; i++) {
        printf("i: %d   奇偶性:%s \n",i,dbtest(i));
    }
    
    
    //写在class中的函数默认会加inline
    return 0;
}
