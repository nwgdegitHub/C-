//
//  main.cpp
//  11 deque容器_
//
//  Created by udc on 2020/10/27.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int>&d){
    
    //迭代器分类
    //iterator普通 reverse_iterator逆序 const_iterator只读
    for (deque<int>::const_iterator it=d.begin(); it!=d.end(); it++) {
        cout << *it << ",";
    }
    cout << endl;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    deque<int>d;
    d.push_back(1); //1.尾插
    d.push_back(1);
    printDeque(d);
    
    deque<int>d2(d.begin(),d.end());
    d2.push_back(10000);
    
    d.swap(d2); //交换两个容器的内容
    printDeque(d);
    printDeque(d2);
    
    if (d2.empty()) {
        cout << "为空" << endl;
    }
    else{
        cout << "不为空" << d2.size() << endl;
    }
    
    d.push_front(100);//2.头插
    d.push_front(200);
    printDeque(d);
    
    cout << "back-----" << d.back() << endl;
    cout << "front-----" << d.front() << endl;
    
    //3.对应有头删 尾删
    d.pop_back();
    printDeque(d);
    
    d.pop_front();
    printDeque(d);

    //4.区间插入
    
    d2.insert(d2.begin(),999);
    cout << "d2头部插入999：" << endl;
    
    d2.insert(d2.begin()+1, d2.begin(), d2.end()); //三个参数：1 插入位置  2.区间起点  3.区间终点
    cout << "意思就是将 区间起点~区间终点 这个部分插入到 插入位置" << endl;
    printDeque(d2);
    
    //5.利用迭代器删除
    deque<int>::iterator it = d2.begin();
    it++;//it指向第一个位置
    d2.erase(it);
    cout << "擦除第二个位置的元素；" << endl;
    printDeque(d2);
    
    //利用区间删除
    d2.erase(d2.begin(), d2.end());
    cout << "擦除所有元素；" << endl;
    printDeque(d2);
    
    return 0;
}
