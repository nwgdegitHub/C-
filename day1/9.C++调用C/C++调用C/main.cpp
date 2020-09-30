//
//  main.cpp
//  C++调用C
//
//  Created by LiuWei on 2019/3/9.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>
//#include "Test.h"

//extern "C" void show(void); //这句代码意思是 给我按C函数处理 不要幕后搞成_showv
//疑问：为什么这里引用C 没有用 extern "C" 不会报错？ 是因为在Xocde中编译吗？
#include "Test.c"
int main(int argc, const char * argv[]) {
    show();
    hiden();
    return 0;
}
