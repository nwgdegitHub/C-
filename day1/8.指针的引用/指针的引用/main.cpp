//
//  main.cpp
//  指针的引用
//
//  Created by LiuWei on 2019/3/14.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>

using namespace std;

void test01();
void test02();

struct Person {
    int m_Age;
};

int main(int argc, const char * argv[]) {
    test01();
    test02();
    return 0;
}

void allocMemoryByRef(Person ** p){ // **p具体的Person对象 *p对象的指针 p 指针的指针
    
    *p = (Person *)malloc(sizeof(Person));
    
    (*p)->m_Age = 100;
    (**p).m_Age = 200;
    
    std::cout << (**p).m_Age;
}

void test01(){
    
    Person *p = NULL;
    
    allocMemoryByRef(&p); //形参是指针的指针
}


//利用指针引用开辟空间 避免了使用二级指针
void allocMemoryByRef2(Person* &p){ // **p具体的Person对象 *p对象的指针 p 指针的指针
    
    p = (Person *)malloc(sizeof(Person));
    
    p->m_Age = 200;
}

void test02(){
    
    Person *p = NULL;
    
    allocMemoryByRef2(p);
}
