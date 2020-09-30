//
//  MyString.hpp
//  字符串封装1
//
//  Created by LiuWei on 2019/4/20.
//  Copyright © 2019 xxx. All rights reserved.
//

#ifndef MyString_hpp
#define MyString_hpp
#include <iostream>
//#pragma once

#include <stdio.h>
using namespace std;

class MyString {
    
    friend ostream& operator<< (ostream& cout , MyString& str);
    friend istream& operator>> (istream& cin, MyString & str);
    
public:
    MyString(const char *str);
    MyString(const MyString& str);

    ~MyString();
    
    //重载=
    MyString& operator=(const char *str);
    MyString& operator=(const MyString& str); //方式2
    
    //重载[]
    char& operator[](int index);
    
    //重载+
    MyString operator+(const char *str);
    MyString operator+(const MyString& str); //方式2
    
    //重载==
    bool operator==(const char *str);
    bool operator==(const MyString& str); //方式2
    
    
private:
    char *pString;
    size_t m_Size;
    
    
};

#endif /* MyString_hpp */
