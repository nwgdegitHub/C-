//
//  main.cpp
//  字符串封装1
//
//  Created by LiuWei on 2019/4/20.
//  Copyright © 2019 xxx. All rights reserved.
//

#include <iostream>
using namespace std;

#include "MyString.hpp" //倒入.cpp会报错


void test01()
{
    MyString str = "abc";
    
    cout << str << endl;
    
    cout << "请输入新字符串" << endl;
    
    cin >> str;
    
    cout << "新内容:"  << str << endl;
    
}

int main(int argc, const char * argv[]) {
    
    
    test01();
    
    
    return 0;
}
