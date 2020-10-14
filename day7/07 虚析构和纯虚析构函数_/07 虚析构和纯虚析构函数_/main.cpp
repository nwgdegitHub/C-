//
//  main.cpp
//  07 虚析构和纯虚析构函数_
//
//  Created by udc on 2020/10/14.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
using namespace std;

class Animal{
    
public:
    
//普通析构不会释放子类
//    ~Animal(){
//        cout << "Animal 析构\n" << endl;
//    }
    
//加了virtual 会先调子类析构 再调基类析构
//    virtual ~Animal(){
//        cout << "Animal 虚析构\n" << endl;
//    }
    
    //纯虚析构 类内声明 类外实现
    virtual ~Animal() = 0;
    
    virtual void speak(){
        cout << "Animal speak\n" << endl;
    }
    
};

Animal:: ~Animal(){
    cout << "Animal 纯虚析构\n" << endl;
}

class Cat:public Animal{
    
public:
    
    Cat(const char *name){
        this->m_Name = new char[strlen(name)+1];
        strcpy(this->m_Name, name);
    }
    
    ~Cat(){
        
        cout << "Cat 析构\n" << endl;
        if (this->m_Name != NULL) {
            delete [] this->m_Name;
            this->m_Name = NULL;
        }
        
    }
    void speak(){
        cout << "Cat speak\n" << endl;
    }
    
    char *m_Name;
    
};


int main(int argc, const char * argv[]) {
    // insert code here...
    
    Animal *animal = new Cat("Tom");
    animal->speak();// 在这里，animal虽然是指向Animal的指针，但是被调用的函数(foo)却是Cat的! 因为Animal中speak为虚函数
    delete animal;
    
    return 0;
}
