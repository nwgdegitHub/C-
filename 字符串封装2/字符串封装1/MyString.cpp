//
//  MyString.cpp
//  字符串封装1
//
//  Created by LiuWei on 2019/4/20.
//  Copyright © 2019 xxx. All rights reserved.
//

#include "MyString.hpp"
#include <string.h>
#include <iostream>

//#define _CRT_SECURE_NO_WARINGS

using namespace std;

MyString::MyString(const char* str){
    
    cout << "有参构造" << endl;
    this->pString = new char[strlen(str)];
    strcpy(this->pString, str);
    this->m_Size = strlen(str);
}


MyString::MyString(const MyString& str){
    cout << "拷贝构造" << endl;
    this->pString = new char(strlen(str.pString) + 1);
    strcpy(this->pString, str.pString);
    this->m_Size = str.m_Size;
}

MyString::~MyString(){
    cout << "析构函数" << endl;
    if (this->pString != NULL) {
        delete [] this->pString;
        this->pString = NULL;
    }
}
  
ostream& operator<< (ostream& cout , MyString& str){
    cout << str.pString << endl;
    
    return cout;
}


//右移运算符重载
istream& operator>> (istream& cin, MyString & str)
{
    if (str.pString != NULL) {
        delete [] str.pString;
        str.pString = NULL;
    }
    
    char buf[1024];
    cin >> buf;
    
    str.pString = new char(strlen(buf)+1);
    strcpy(str.pString, buf);
    str.m_Size = strlen(buf);
    
    return cin;
}

MyString& MyString::operator=(const char *str){
    if (this->pString!=NULL) {
        delete [] this->pString;
        this->pString = NULL;
    }
    
    this->pString = new char(strlen(str)+1);
    strcpy(this->pString, str);
    
    return *this;
}


MyString& MyString::operator=(const MyString& str){
    if (this->pString!=NULL) {
        delete [] this->pString;
        this->pString = NULL;
    }
    
    this->pString = new char(strlen(str.pString)+1);
    strcpy(this->pString, str.pString);
    
    return *this;
}

char& MyString::operator[](int index){
    
    return this->pString[index];
}

MyString MyString::operator+(const char *str){
    
    size_t newSize = this->m_Size + strlen(str) + 1;
    
    char *tmp = new char(newSize);
    
    memset(tmp, 0, newSize); //设置默认
    
    strcat(tmp, this->pString);
    strcat(tmp, str);
    
    MyString newStr (tmp);
    
    delete tmp;
    
    return newStr;
    
}

MyString MyString::operator+(const MyString& str){
    
    size_t newSize = this->m_Size + strlen(str.pString) + 1;
    
    char *tmp = new char(newSize);
    
    memset(tmp, 0, newSize); //设置默认
    
    strcat(tmp, this->pString);
    strcat(tmp, str.pString);
    
    MyString newStr (tmp);
    
    delete tmp;
    
    return newStr;
}


bool  MyString::operator==(const char *str){
    
    if (strcmp(this->pString, str) == 0 && this->m_Size == strlen(str))  {
        
        return true;
    }
    return false;
}

bool  MyString::operator==(const MyString& str){
    
    if (strcmp(this->pString, str.pString) == 0 && this->m_Size == strlen(str.pString))  {
        
        return true;
    }
    return false;
    
}












