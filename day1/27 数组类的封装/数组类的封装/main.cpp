//
//  main.cpp
//  数组类的封装
//
//  Created by LiuWei on 2019/4/6.
//  Copyright © 2019 xxx. All rights reserved.
//

#include <iostream>
#include "MyArray.hpp"
using namespace std;

void test01(){
    
    MyArray *array1 = new MyArray(30);
    //(MyArray *) array1 = 0x0000000100648440
    
    MyArray array2;
    /*
         {
         pAdress = 0x0000000100649240
         m_Size = 0
         m_Capacity = 100
         }
     */
    MyArray array = MyArray(30);
    /*
          {
          pAdress = 0x000000010064b680
          m_Size = 0
          m_Capacity = 30
          }
      */
}


void test02(){

//    MyArray *array = new MyArray(30); //调用的是有参构造
    MyArray *array = new MyArray();  //调用默认构造
    
    MyArray *array2 = new MyArray(*array);
    
    MyArray array3 = *array2;
    
    delete array; //这个删了 那拷贝构造的内存呢？
                    //为什么不调用这个也没事？
    
    for (int i = 0; i<10; i++) {
        array2->push_Back(i);
//        array3.push_Back(i);
    }
    
    for (int i = 0; i<10; i++) {
        cout << array2->getData(i) << endl;
    }
    
//    delete array2;
}


int main(int argc, const char * argv[]) {
    //test01();
    test02();
    
    return 0;
}
