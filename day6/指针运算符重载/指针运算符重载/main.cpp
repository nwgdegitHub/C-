//
//  main.cpp
//  指针运算符重载
//
//  Created by udc on 2020/10/2.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
using namespace std;
void test01();

int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    
    return 0;
}

class Person{
public:
    Person(int param){
        this->mParam = param;
    }
    void PrintPerson(){
        cout << "Param:" << mParam << endl;
    }
private:
    int mParam;
};

class SmartPointer{
public:
    SmartPointer(Person* person){
        this->pPerson = person;
    }
    //重载指针的->、*操作符
    Person* operator->(){
        return pPerson;
    }
    Person& operator*(){
        return *pPerson;
    }
    ~SmartPointer(){
        if (pPerson != NULL){
            delete pPerson;
        }
    }
public:
    Person* pPerson;
};

void test01(){
//Person* person = new Person(100);
    //如果忘记释放，那么就会造成内存泄漏

    SmartPointer pointer(new Person(100));
    pointer->PrintPerson(); //为什么可以直接调用？？？
}
