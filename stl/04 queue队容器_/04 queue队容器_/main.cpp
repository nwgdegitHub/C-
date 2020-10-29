//
//  main.cpp
//  04 queue队容器_
//
//  Created by udc on 2020/10/27.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
//    先进先出(排队打饭)
    
    queue<int>q;
    q.push(10); //往队尾添加元素
    q.push(20);
    q.push(30);
    q.push(40);
    
    while (!q.empty()) {
        cout << "队头" << q.front() << endl;
        cout << "队尾" << q.back() << endl;
        q.pop();
    }
    
    cout << "size:" << q.size() << endl;
    
    
    
    
    return 0;
}
