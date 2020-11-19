//
//  main.cpp
//  02 作业案例-员工分组
//
//  Created by udc on 2020/10/30.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

enum {RL,YF,MS};//人力 研发 美术

class Worker{
public:
    string m_Name;
    int m_money;
};


void createWorker(vector<Worker>&vec){
    string nameSeed = "ABCDE";
    for (int i = 0; i<5; i++) {
        string name = "员工";
        name+=nameSeed[i];
        
        int money = rand() % 10000 + 10000;
        
        Worker w;
        w.m_Name = name;
        w.m_money = money;
        
        vec.push_back(w);
    }
}

void printWorker(vector<Worker>&vec){
    
    for (vector<Worker>::iterator it = vec.begin(); it!=vec.end(); it++) {
        cout << "姓名："<< it->m_Name << "工资：" << it->m_money << endl;
    }
}

void setGroup(vector<Worker>&vec,multimap<int, Worker>&m){
    for (vector<Worker>::iterator it = vec.begin(); it!=vec.end(); it++){
        
        int departmentId = rand()%3;//0 1 2
        
        m.insert(make_pair(departmentId, *it));
        
    }
}

void showGroup(multimap<int, Worker>&m){
    
    multimap<int, Worker>::iterator pos = m.find(RL);
    int index = 0;
    int num = m.count(RL);
    for ( pos!=m.end(); index<num; pos++,index++) {
        cout << "姓名："<< pos->second.m_Name << "工资：" << pos->second.m_money << endl;
    }
    cout<<"-----------------------------------"<<endl;
    pos = m.find(YF);
    index = 0;
    num = m.count(YF);
    for ( pos!=m.end(); index<num; pos++,index++) {
        cout << "姓名："<< pos->second.m_Name << "工资：" << pos->second.m_money << endl;
    }
    cout<<"-----------------------------------"<<endl;
    pos = m.find(MS);
    index = 0;
    num = m.count(MS);
    for ( pos!=m.end(); index<num; pos++,index++) {
        cout << "姓名："<< pos->second.m_Name << "工资：" << pos->second.m_money << endl;
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    vector<Worker>v;
    createWorker(v);
    printWorker(v);
    
    multimap<int, Worker>m;
    setGroup(v, m);
    showGroup(m);
    
    return 0;
}
