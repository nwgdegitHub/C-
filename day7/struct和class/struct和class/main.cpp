//
//  main.cpp
//  struct和class
//
//  Created by udc on 2020/11/19.
//

#include <iostream>
using namespace std;

class A{
    
public:
    int a;
    
protected:
    int b;
    
private:
    int c;
    
};

class B: A{ //默认private 继承
    
};

struct Person{
public:
    int a;
    
protected:
    int b;
    
private:
    int c;
    
public:
    void func(){
        
    }
    virtual void func2(){}
};

struct Man:Person{ //默认public 继承 子类能不能访问父类里面的成员还要看父类中的关键字 限定词作交集
    
};


int main(int argc, const char * argv[]) {
    // insert code here...
    B b = B();
    B *b1 = new B();
    
    cout << "\n" << (b1) << endl;
//    delete b1;
    
    Man m = Man();
    cout << m.a << endl;
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
