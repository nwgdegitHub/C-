//
//  main.cpp
//  C语言指针的长度和类型
//
//  Created by udc on 2020/11/23.
//https://www.cnblogs.com/wuyudong/p/point-length-type.html
#include <iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stddef.h>

using namespace std;

struct p{
    int n;
    float f;
};
int main()
{
    struct p *sptr;
    printf("sizeof *char: %d\n", sizeof(char*));
    printf("sizeof *int: %d\n", sizeof(int*));
    printf("sizeof *float: %d\n", sizeof(float*));
    printf("sizeof *double: %d\n", sizeof(double*));
    printf("sizeof *struct: %d\n", sizeof(sptr));
    
    void *pp = malloc(10);
         cout << sizeof(pp) << endl; //8
    
    //~((int)0)
    //99999999999
    //4294967295
    //cout<<<<endl;//-1
    
    
    //int nArr(400)声明一个int行的变量nArr，初始化为400值
    //int nArr[400]
    int nArr[400],i=456;
    for (int i = 0; i<4294967295; i++) {
        cout<<nArr<<endl;
    }
    cout<<i<<endl;
    
    //自增 优先级 高于 +
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
