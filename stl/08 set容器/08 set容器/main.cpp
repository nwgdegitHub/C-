//
//  main.cpp
//  08 set容器
//
//  Created by udc on 2020/10/28.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;

void printSet(set<int> &s){
    set<int>::iterator iter;
    for(iter = s.begin() ; iter != s.end() ; ++iter)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    cout<<"set 的 size 值为 ："<<s.size()<<endl;
    cout<<"set 的 maxsize的值为 ："<<s.max_size()<<endl;
    cout<<"set 中的第一个元素是 ："<<*s.begin()<<endl;
    cout<<"set 中的最后一个元素是:"<<*s.end()<<endl;//set 中的最后一个元素是:0
    
    cout<<"set 中 2 出现的次数是 ："<<s.count(2)<<endl;
    cout<<"set 中 4 出现的次数是 ："<<s.count(4)<<endl;
    
    s.clear();
    if (s.empty()) {
        cout<<"set 为空 ！！！"<<endl;
    }
    cout<<"set 的 size 值为 ："<<s.size()<<endl;
    cout<<"set 的 maxsize的值为 ："<<s.max_size()<<endl;
    
    //查找
    set<int>s1;
    set<int>::iterator iter;
    for (int i = 1; i<=5; i++) {
        s1.insert(i);
    }
    printSet(s1);
    pair<set<int>::const_iterator, set<int>::const_iterator>pr;
    pr=s1.equal_range(3);
    cout<<"第一个大于等于 3 的数是 ："<<*pr.first<<endl;
    cout<<"第一个大于 3的数是 ： "<<*pr.second<<endl;
    
    //删除
    set<int>s2;
    set<int>::const_iterator iter2;
    set<int>::iterator first;
    set<int>::iterator second;
    for (int i = 1; i<=10; ++i) {
        s2.insert(i);
    }
    //第一种删除
    s2.erase(s2.begin());
    printSet(s2);
    
    //第二种删除
    first = s2.begin();
    second = s2.begin();
    second++;
    second++;
    s2.erase(first,second);
    printSet(s2);
    
    //第三种删除
    s2.erase(8);
    cout<<"删除后 set 中元素是 ：";
    printSet(s2);
    
    
    //find查找
    int a[] = {1,2,3,4,5,6,7};
    set<int> s3(a,a+3);
    set<int>::iterator iter3;
    if ((iter=s3.find(2)) != s3.end()) {
         cout<< "find查找" << *iter << endl;
    }
    
    //insert
    set<int>s4;
    s4.insert(a,a+3);
    cout<<"insert...."<<endl;
    printSet(s4);
    
    s4.insert(1000);
    printSet(s4);
    
    //返回第一个大于等于key_value的定位器
    //返回最后一个大于等于key_value的定位器
    cout<<*s4.lower_bound(2)<<endl;
    cout<<*s4.lower_bound(3)<<endl;
    cout<<*s4.upper_bound(3)<<endl;
    
    
    
    
    
    
    return 0;
}
