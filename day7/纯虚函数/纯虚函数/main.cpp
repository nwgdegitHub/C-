//
//  main.cpp
//  纯虚函数
//
//  Created by udc on 2020/10/14.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>

using namespace std;

class A
{
public:
    virtual void foo()
    {
        cout<<"A::foo() is called"<<endl;
    }
    virtual void eat() = 0; //纯虚函数 必须在派生类中实现 且基类为抽象类 不能new
    
};

class B:public A
{
public:
    void foo()
    {
        cout<<"B::foo() is called"<<endl;
    }
    
    void eat(){
        
        
    }
};


//作者：wuxinliulei
//链接：https://www.zhihu.com/question/23971699/answer/69592611
//来源：知乎
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    A *a = new B();
    a->foo();   // 在这里，a虽然是指向A的指针，但是被调用的函数(foo)却是B的!
    return 0;
    
}
