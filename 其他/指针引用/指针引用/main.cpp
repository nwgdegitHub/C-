//
//  main.cpp
//  指针引用
//
//  Created by udc on 2020/8/3.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>

//冒泡排序
void bubbleSort(int array[],int size){
    
    std::cout << "array= " << array << std::endl;
    
    for (int end = size-1; end > 0; end--) {
        
        for (int begin = 1; begin <= end; begin++) {
            
            if (array[begin] < array[begin-1]) {
                
                int tmp = array[begin];
                
                array[begin] = array[begin-1];
                
                array[begin-1] = tmp;
                
            }
        }
    }
    
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
}

//优化
void bubbleSort1(int array[],int size){
    
    std::cout << "array= " << array << std::endl;
    
    for (int end = size-1; end > 0; end--) {
        
        bool sorted = true;
        
        for (int begin = 1; begin <= end; begin++) {
            
            if (array[begin] < array[begin-1]) {
                
                int tmp = array[begin];
                
                array[begin] = array[begin-1];
                
                array[begin-1] = tmp;
                
                sorted = false;
                
            }
        }
        
        if (sorted == true) {
            
            break;
            
        }
    }
    
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
}

//优化
void bubbleSort3(int array[],int size){
    
    std::cout << "array= " << array << std::endl;
    
    for (int end = size-1; end > 0; end--) {
        
        int sortedIndex = 1;
        
        for (int begin = 1; begin <= end; begin++) {
            
            if (array[begin] < array[begin-1]) {
                
                int tmp = array[begin];
                
                array[begin] = array[begin-1];
                
                array[begin-1] = tmp;
                
                sortedIndex = begin;
                
            }
        }
        
        end = sortedIndex;
    }
    
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
}

//选择排序
void selectionSort(int array[],int size){
    
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
        printf("%d ", array[i]);
    }
}






int m_value = 1;

void func(int *&p){
    using namespace std;
    cout << "p= " << p << endl;//0x7ffeefbff56c
    cout << "*p= " << *p << endl;//2
    cout << "*&p= " << *&p << endl;//0x7ffeefbff56c
   
    p = &m_value;
    
    
}

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int n = 2;
    int *pn = &n;
    cout << "*pn= " << *pn << endl;
    func(pn);
    cout << "*pn func 之后 = " << *pn << endl;
    
    
    
//    int i = 1;
//    int& j= i;
//
//    j = 100;
//
//    cout << "i= " << i << endl;//100 改变引用就是改原来的，这跟改指针是一样的
    //cout << "int size = " << sizeof(int) << endl;
    
    //int arr[] = {12,13,21,4,34,22,99,7,87,32};
    //bubbleSort(arr,10);
    //selectionSort(arr,10);
    
    
    
    
    
    return 0;
}
