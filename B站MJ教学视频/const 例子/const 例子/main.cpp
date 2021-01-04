//
//  main.cpp
//  const 例子
//
//  Created by udc on 2020/12/1.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int age = 10;
    const int *p0 = &age;
    int const *p1 = &age;
    int * const p2 = &age;
    const int *const p3 = &age;
    int const *const p4 = &age;
    
    //记住一句话：const修饰的是其右边的内容
    int age1 = 20;
    p0 = &age1;
    *p0 = 30; //const修饰的是*p0, 所以*p0是常量，不能修改。但p0不是常量，所以能修改。以此类推。
    
    p2 = &age1;
    *p2 = 30;
    
    p3 = &age1;
    *p3 = 30;
    
    p4 = &age1;
    *p4 = 30
    
    return 0;
}
