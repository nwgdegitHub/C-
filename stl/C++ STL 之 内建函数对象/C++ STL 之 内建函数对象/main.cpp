//
//  main.cpp
//  C++ STL 之 内建函数对象
//
//  Created by udc on 2020/10/30.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <functional>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    plus<int> myplus;
    cout << myplus(10, 20) << endl;
    getchar();
    
    return 0;
}
