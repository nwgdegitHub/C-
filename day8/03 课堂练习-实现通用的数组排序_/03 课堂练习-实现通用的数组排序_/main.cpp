//
//  main.cpp
//  03 课堂练习-实现通用的数组排序_
//
//  Created by udc on 2020/10/14.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
using namespace std;

//选择排序
template<class T>
void selectionSort(T array[],int size){
    
    for (int end = size-1; end > 0; end--) {
        
        int maxIndex = 0;
        
        for (int begin = 1; begin <= end; begin++) {
            
            if (array[maxIndex] < array[begin]) {//假定的这个数小于循环扫描的数
                
                maxIndex = begin;
                
            }
        }
        int tmp = array[maxIndex];
        
        array[maxIndex] = array[end];
        
        array[end] = tmp;
        
    }
    
    for(int i = 0; i < size; ++i)
    {
        cout << array[i] << endl;
    }
}

int main(int argc, const char * argv[]) {
    
    char charArr[] = "helloword";
    int num = sizeof(charArr) / sizeof(char);
    selectionSort(charArr,num);
    
    int intArr[] = {34,5,67,32,1,0,9};
    int num1 = sizeof(intArr) / sizeof(int);
    selectionSort(intArr,num1);
    
    return 0;
}
