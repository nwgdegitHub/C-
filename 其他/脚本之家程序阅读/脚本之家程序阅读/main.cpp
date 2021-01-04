//
//  main.cpp
//  脚本之家程序阅读
//
//  Created by udc on 2020/11/24.
//

#include <iostream>
using namespace std;

int kmax( int *ia, int sz );
int kmax( int *, int = 10 ); //重复声明了
//如果在两个函数的参数表中只有缺省实参不同则第二个声明被视为第一个的重复声明

class Person{
    
    int kmax( int *ia, int sz){

        return 1;
    }
    
//    int kmax( int *, int = 10 ){
//
//        return 2;
//    }
    int kmax( int *){

        return 2;
    }
};


struct CLS{
    int m_i;
    CLS(int i):m_i(i){
        //m_i = i;
        cout << "有参构造 初始化参数列表" << m_i << endl;
    }
    CLS(){
        cout << "默认构造" << endl;
        CLS(2);
        //在默认构造函数内部再调用带参的构造函数属用户行为而非编译器行为，亦即仅执行函数调用，而不会执行其后的初始化表达式。只有在生成对象时，初始化表达式才会随相应的构造函数一起调用。
    }
    
};

const char *str = "vermeer";

//const int arr[3] = {1,2,3};

void testParamsCount(int a,char b){
    cout<<"testParamsCount"<<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    CLS obj;
    cout << obj.m_i << endl;
    
//    CLS *obj2 = new CLS(3);
//    cout << obj2->m_i << endl;
    
    //++a 和 a++有何不同
//    int a = 1;
//    (++a) = 2;
//    (a++) = 3; //a++ 之后不再是一个有效的变量
    
    
    const char *pstr = str;
        cout << "The address of pstr is: " << (pstr) << endl;
    
    //特别注意：字符串指针输出的不是地址 而是字符串
    printf("123\n");
    printf(pstr);
    printf("456\n");
    
     char *pstr2 = "str";
        cout << "The address of pstr is: " << (*pstr2) << endl;
 
    testParamsCount(1,'1');
    
    int a = 0x00000011 >> 1; // /2的n次方
    int b = 0x00000011 << 1; // *2的n次方
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
