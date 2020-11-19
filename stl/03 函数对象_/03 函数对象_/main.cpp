//
//  main.cpp
//  03 函数对象_
//
//  Created by udc on 2020/10/30.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>

using namespace std;


class MyPrint{
public:
    void operator()(int num){
        cout << "num" << num << endl;
        count++;
    }
    int count = 0;
};

void MyPrint2(int num){
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    MyPrint2(13);
    
    MyPrint myp;
    myp(12);
    
    //函数对象超出普通函数概念 内部可以保存状态
    myp(12);
    myp(12);
    myp(12);
    myp(12);
    cout << myp.count << endl;
    
    return 0;
}
