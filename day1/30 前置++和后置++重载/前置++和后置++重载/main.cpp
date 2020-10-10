//
//  main.cpp
//  前置++和后置++重载
//
//  Created by LiuWei on 2019/4/9.
//  Copyright © 2019 xxx. All rights reserved.
//

#include <iostream>
using namespace std;

class MyInteger {
    
public:
    
    friend ostream& operator<<(ostream& cout, MyInteger& myInt);

    MyInteger(){
        m_Num = 0;
    }
    
    //重载
    MyInteger& operator++(){
        this->m_Num++;
        return *this;
    }//这个表示前置++
    
    const MyInteger operator++(int){

        MyInteger myInt = *this;
        ++(*this);
        return myInt;
        
    } //这个表示后置++ 区别就是加了参数int
 
    int m_Num;
    
};


ostream& operator<<(ostream& cout, MyInteger& myInt)
{
    cout << myInt.m_Num;
    
    return cout;
}

int main(int argc, const char * argv[]) {
    
    
    
    
    
    MyInteger myInt1;
    
    cout << ++(++myInt1) << endl; //前置++

    MyInteger myInt2;
    myInt2++;
    
    cout << myInt2 << endl; //后置++

    
//    (myInt2++)++;  //编译错误
//    ++(myInt2++);  //编译错误
//    myInt2++ = 1;   //编译错误
    
    //https://www.cnblogs.com/cthon/p/9185263.html
    
    return 0;
    
}
