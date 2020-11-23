//
//  main.cpp
//  使用namespace
//
//  Created by LiuWei on 2019/2/28.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>
#include "game1.hpp"


namespace A {
    
    int a;
    struct Person{};
    class Animal{
      void func();

    };
    
    namespace B
    {
        int b = 2;
    }
    
}

int a = 100;

void A::Animal::func(){
    std::cout << "A 中的func \n";

}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    LOL::atk();

//    King::goAtk();
//
    std::cout << A::B::b;
    //A::Animal::func;
    
    std::cout << ::a << std::endl;
    return 0;
}
