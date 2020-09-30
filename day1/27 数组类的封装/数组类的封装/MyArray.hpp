//
//  MyArray.hpp
//  数组类的封装
//
//  Created by LiuWei on 2019/4/6.
//  Copyright © 2019 xxx. All rights reserved.
//

#ifndef MyArray_hpp
#define MyArray_hpp

#include <stdio.h>

class MyArray {
    
    
public:
    MyArray();
    MyArray(int capacity);
    MyArray(const MyArray& array);
    
    ~MyArray();
    
    
    //尾插法
    void push_Back(int val);
    
    //根据索引获取值
    int getData(int index);
    
    //根据索引设置值
    void setData(int index,int val);
    
private:
    int *pAdress;
    int m_Size;
    int m_Capacity;
    
};

#endif /* MyArray_hpp */
