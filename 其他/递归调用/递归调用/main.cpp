//
//  main.cpp
//  递归调用
//
//  Created by udc on 2020/12/4.
//  https://www.cnblogs.com/yfz1552800131/p/5349678.html

#include <iostream>

void up_and_down(int);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    up_and_down(1);
    return 0;
}

void up_and_down(int n){
    printf("Level %d:n location %p\n",n,&n);
    if (n<4) {
        up_and_down(n+1);
    }
    printf("Level %d:n location %p\n",n,&n);
}
