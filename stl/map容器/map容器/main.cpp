//
//  main.cpp
//  map容器
//
//  Created by udc on 2020/10/28.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

void printMap(map<int,string> &map){
    std::map<int,string>::iterator it;
    for (it=map.begin(); it!=map.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"map size="<<map.size()<<endl;
    
    //也可以用数组方式遍历(<<map[i]卡住)
//    for (int i = 1; i<=map.size(); i++) {
//        cout<<"用数组方式遍历"<<map[i];
//    }
//    cout<<endl;
 
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //唯一 数据无重复
    
    //1. 用insert插入pair数据
    map<int,string>mapst;
    mapst.insert(pair<int, string>(1,"1"));
    mapst.insert(pair<int, string>(2,"2"));
    mapst.insert(pair<int, string>(3,"3"));
    mapst.insert(pair<int, string>(1,"5"));
    std::cout << "1. 用insert插入pair数据\n";
    printMap(mapst);
    
    //2. 用insert函数插入value_type
    map<int,string>mapst2;
    mapst2.insert(map<int,string>::value_type(1,"studenet1"));
    mapst2.insert(map<int,string>::value_type(2,"studenet2"));
    mapst2.insert(map<int,string>::value_type(3,"studenet3"));
    mapst2.insert(map<int,string>::value_type(4,"studenet4"));
    mapst2.insert(map<int,string>::value_type(1,"studenet5"));
    std::cout << "2. 用insert函数插入value_type\n";
    printMap(mapst2);
    
    //3.用数组方式插入
    map<int,string>mapst3;
    mapst3[-1]="stu1-";
    mapst3[0]="stu0";
    mapst3[1]="stu1";
    mapst3[1]="stu6";
    std::cout << "3.用数组方式插入\n";
    printMap(mapst3);
    
    
    //find
    map<int,string>::iterator it;
    it=mapst3.find(1);
    if (it!=mapst3.end()) {
        cout<<"find, value is"<<it->second<<endl;
    }
    else{
        cout<<"do not find"<<endl;
    }
    
    //删除
    it=mapst3.find(1);
    mapst3.erase(it);
    std::cout << "删除了1下标那个\n";
    printMap(mapst3);
    
    
    return 0;
}
