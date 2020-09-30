//
//  Test.c
//  C封装和C++封装
//
//  Created by LiuWei on 2019/3/10.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include "Test.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Person{
    char mName[64];
    int mAge;
};

void PersonEat(struct Person *p){
    printf("%s 在吃人饭",p->mName);
}

void test01(){
    struct Person p1;
    strcpy(p1.mName,"德玛西亚");
    PersonEat(&p1);
}

struct Dog{
    char mName[64];
    int mAge;
};

void DogEat(struct Dog *dog){
    printf("%s 在吃狗饭",dog->mName);
};

void test02(){
    struct Dog d1;
    strcpy(d1.mName,"旺财");
    DogEat(&d1);
    
    struct Person p1;
    strcpy(p1.mName,"德玛西亚");
//    DogEat(&p1); //C不会做检测 C++会
}

























