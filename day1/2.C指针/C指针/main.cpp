//
//  main.cpp
//  C指针
//
//  Created by LiuWei on 2019/3/2.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    int m = 5;
    int *p = &m;
    
    std::cout << "&m = " << &m << std::endl;//0x7ffeefbff57c
    
    std::cout << "p = " << p << std::endl; //0x7ffeefbff57c
    std::cout << "*p = " << *p << std::endl; //5
    
    std::cout << "&p = " << &p << std::endl;//0x7ffeefbff570
    
    int **pp = &p; //& 不可以使用两次
    
    int b = **pp;
    std::cout << "b = " << b << std::endl; //5
    std::cout << "*pp = " << *pp << std::endl;//0x7ffeefbff57c
    std::cout << "pp = " << pp << std::endl;//0x7ffeefbff570
    
    //*() 表示取出地址指向的内容 **() 表示取出指向地址的指向地址的内容
    //因为指针也是变量 他也有地址
    return 0;
}
