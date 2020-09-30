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
    
//    cout << "请输入新字符串" << endl;
//
//    cin >> str;
//
//    cout << "新内容:"  << str << endl;
    
    MyString str2(str);
    
    MyString str3 = "aaaa";
    
    str3 = str2; // 不重载=只会简单的值拷贝 会出现浅拷贝的情况
    
    str3 = "a";
    
    cout << "str3:"  << str3 << endl;
    
    str3[0] = 'w';
    
    cout << "str3第一个位置为:" << str3[0] << endl;
    
    MyString str4 = "";
    
    str4 = str2 + str3;
    
    cout << "str4:" << str4 << endl;
    
    if (str3 == str4)
    {
        cout << "str3 = str4" << endl;
    }
    else
    {
        cout << "str3 不= str4" << endl;
    }
    
}

int main(int argc, const char * argv[]) {
    
    
    test01();
    
    
    return 0;
}
