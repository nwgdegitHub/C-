//
//  main.cpp
//  05 list容器
//
//  Created by udc on 2020/10/27.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <list>

using namespace std;

void printList(list<int> &list){
    
    for (std::list<int>::iterator it=list.begin(); it!=list.end(); it++) {
        cout << *it << "\t";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    //初始化
    list<int> c0;
    list<int> c1(3);
    list<int> c2(5,2);
    list<int> c4(c2);
    list<int> c5(c1.begin(),c1.end());
    
    //双向链表 而且是双向循环链表
    //元素可重复
    list<int> myList;
    for (int i = 0; i<10; i++) {
        myList.push_back(i);
    }
    printList(myList);
    
    //也可以这样初始化
    list<int> a1{1,2,3,4,5},a2;
        
    a2=a1;
    list<int>::iterator it;
    
    if (!a1.empty()) {
        cout << "第一个元素" << a1.front() << endl;
        cout << "最后一个元素" << a1.back() << endl;
        cout << "实际元素的个数" << a1.size() << endl;
        cout << "可能容纳的最大元素数量" << a1.max_size() << endl;
    }
    
    a2.clear();
    cout << "清除链表a2中的所有元素" << a2.size() << endl;
    
    a1.insert(a1.begin(), 999);
    cout << "在pos位置插入元素num" << endl;
    printList(a1);
    
    a1.insert(a1.begin(),2, 999);
    cout << "在pos位置插入n个元素num" << endl;
    printList(a1);
    
    a1.insert(a1.begin(), a1.begin(),a1.end());
    cout << "在pos位置插入区间为[beg,end)的元素" << endl;
    printList(a1);
    
    a1.erase(a1.begin());
    cout << "删除pos位置的元素。" << endl;
    printList(a1);
    
    a1.push_back(777);
    cout << "在末尾增加一个元素。" << endl;
    printList(a1);
    
    a1.pop_back();
    cout << "删除末尾的元素。" << endl;
    printList(a1);
    
    a1.push_front(666);
    cout << "在开始位置增加一个元素。" << endl;
    printList(a1);
    
    a1.pop_front();
    cout << "删除第一个元素。" << endl;
    printList(a1);
    
    a1.resize(10);
    cout << "重新定义链表的长度,超出原始长度部分用0代替,小于原始部分删除。" << endl;
    printList(a1);
    
    a1.resize(20,100);
    cout << "重新定义链表的长度,超出原始长度部分用num代替。" << endl;
    printList(a1);
    
    a1.swap(a2);
    cout << "交换a1-a2" << endl;
    printList(a1);
    printList(a2);
    
    swap(a2, a1);
    cout << "交换a2-a1" << endl;
    printList(a1);
    printList(a2);
    
    list<int>a3{9,3,4,5,6,7};
    a1.merge(a3);
    cout << "合并2个有序的链表,从新放到c1里,释放c2。" << endl;
    printList(a1);
    printList(a3);
    
    a1.merge(a3,[](int n1,int n2){return n1>n2;});
    cout << "合并2个有序的链表并使之按照自定义规则排序之后从新放到c1中,释放c2。" << endl;
    printList(a1);
    printList(a3);
    
    list<int>a4{9,8,7,6},a5{1,2,3,4};
    a4.splice(a4.begin(), a5);
    cout << "将c2连接在c1的beg位置,释放c2" << endl;
    printList(a4);
    printList(a5);
    
    
    list<int>a6{9,8,7,6},a7{1,2,3,4};
    a6.splice(a6.begin(), a7,a7.begin());
    cout << "将c2的beg位置的元素连接到c1的beg位置，并且在c2中施放掉beg位置的元素" << endl;
    printList(a6);
    
    
    list<int>a8{9,8,7,6},a9{1,2,3,4,5,4,3,2,1};
    a8.splice(a9.begin(), a9,a9.begin(),a9.end());
    cout << "将c2的[beg,end)位置的元素连接到c1的beg位置并且释放c2的[beg,end)位置的元素" << endl;
    printList(a8);
    
    list<int>a10{9,8,7,6};
    a10.remove(9);
    cout << "删除链表中匹配num的元素。" << endl;
    printList(a10);
    
    
    a10.remove_if([](int n){return n<8;});
    cout << "删除条件满足的元素,参数为自定义的回调函数。" << endl;
    printList(a10);
    
    list<int>a11{1,2,3,4,5};
    a11.reverse();
    cout << "反转链表" << endl;
    printList(a11);
    
    list<int>a12{1,1,2,2,3,4,5};
    a12.unique();
    cout << "删除相邻的元素" << endl;
    printList(a12);
    
    list<int>a13{9,1,1,2,2,3,4,5};
    a13.sort();
    cout << "将链表排序，默认升序" << endl;
    printList(a13);
    
    return 0;
}
