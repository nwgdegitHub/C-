//
//  MyArray.cpp
//  数组类的封装
//
//  Created by LiuWei on 2019/4/6.
//  Copyright © 2019 xxx. All rights reserved.
//

#include "MyArray.hpp"
#include <iostream>
using namespace std;

MyArray::MyArray()
{
    this->m_Capacity = 100;
    this->m_Size = 0;
    this->pAdress = new int[this->m_Capacity];
}

MyArray::MyArray(int capacity){
    this->m_Capacity = capacity;
    this->m_Size = 0;
    this->pAdress = new int[this->m_Capacity];
}

MyArray::MyArray(const MyArray& array){

    this->pAdress = new int[array.m_Capacity];
    this->m_Size = array.m_Size;
    this->m_Capacity = array.m_Capacity;
}

MyArray::~MyArray(){
    
    cout << "析构函数调用" << endl;
    if (this->pAdress != NULL) {
        delete [] this->pAdress;
        this->pAdress = NULL;
    }
    
}

void MyArray::push_Back(int val){
    this->pAdress[this->m_Size] = val;
    this->m_Size++;
}

int MyArray::getData(int index){
    return this->pAdress[index];
}

void MyArray::setData(int index, int val){
    this->pAdress[index] = val;
}
