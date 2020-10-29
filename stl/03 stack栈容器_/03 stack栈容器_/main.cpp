//
//  main.cpp
//  03 stack栈容器_
//
//  Created by udc on 2020/10/27.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //先进后出(弹夹) 没有迭代器
    stack<int>s;
    s.push(1);
    s.push(3);
    s.push(2);
    s.push(5);
    s.push(4);
    
    while (s.size()!=0) {
        cout << "栈顶为 " << s.top() << endl;
        //弹出栈顶元素
        s.pop();
    }
    cout << "size= " << s.size() << endl;
    
    
    
    return 0;
}
