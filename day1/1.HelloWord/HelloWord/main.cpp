//
//  main.cpp
//  HelloWord
//
//  Created by LiuWei on 2019/2/28.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>
#include <cmath> //C++里使用math.h
int a = 1;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n" << std::endl;
    
    using namespace std;
    cout << "Hello, World! 2\n";
    
    cout << ::a << endl; //::表示作用域 前面不写任何内容表示全局作用域
    //return EXIT_SUCCESS;
    
    cout << "Hello" << endl << "你好";
    
    
    return 0;
}
