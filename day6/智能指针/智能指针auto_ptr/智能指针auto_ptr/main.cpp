//
//  main.cpp
//  智能指针auto_ptr
//
//  Created by udc on 2020/10/19.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>

using namespace std;
class Test
{
public:
    Test(string s)
    {
        str = s;
       cout<<"Test creat\n";
    }
    ~Test()
    {
        cout<<"Test delete:"<<str<<endl;
    }
    string& getStr()
    {
        return str;
    }
    void setStr(string s)
    {
        str = s;
    }
    void print()
    {
        cout<<str<<endl;
    }
private:
    string str;
};



int main(int argc, const char * argv[]) {
    
//    auto_ptr<Test> ptest(new Test("123"));//调用构造函数输出Test creat
////    Test ptest = Test("123");//调用构造函数输出Test creat
//
//    ptest->setStr("hello ");//修改成员变量的值
//    ptest->print();//输出hello
//    ptest.get()->print();//输出hello
//    ptest->getStr() += "world !";
//    (*ptest).print();//输出hello world
//    ptest.reset(new Test("123"));//成员函数reset()重新绑定指向的对象，而原来的对象则会被释放，所以这里会调用一次构造函数，还有调用一次析构函数释放掉之前的对象
//    ptest->print();//输出123
    
    
    
    //**********release 这个函数只是把智能指针赋值为空，但是它原来指向的内存并没有被释放，相当于它只是释放了对资源的所有权,析构函数没有被调用
    auto_ptr<Test> ptest(new Test("123"));
    
       ptest.release();

    return 0;
}
