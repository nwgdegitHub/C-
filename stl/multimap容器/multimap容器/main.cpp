//
//  main.cpp
//  multimap容器
//
//  Created by udc on 2020/10/28.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    //允许重复元素
    typedef multimap<string, string> StrStrMap;
    StrStrMap dict;
    dict.insert(make_pair("day","Tag"));
    dict.insert(make_pair("strange","fremd"));
    dict.insert(make_pair("car","Auto"));
    dict.insert(make_pair("smart","elegant"));
    dict.insert(make_pair("trait","Merkmal"));
    dict.insert(make_pair("strange","seltsam"));
    dict.insert(make_pair("smart","raffiniert"));
    dict.insert(make_pair("smart","klug"));
    dict.insert(make_pair("clever","raffiniert"));
    
    StrStrMap::iterator pos;
    cout.setf(ios::left,ios::adjustfield);
    cout<<' '<<setw(10)<<"english"<<"german"<<endl;
    cout << setfill('-') << setw(20) << ""<< setfill(' ') << endl;
    for (pos=dict.begin(); pos!=dict.end(); ++pos) {
        cout << ' ' << setw(10) << pos->first.c_str() << pos->second << endl;
    }
    cout << endl;
    
    string word("smart");
    cout<<word<<":"<<endl;
    for (pos=dict.lower_bound(word); pos!=dict.upper_bound(word); ++pos) {
        cout<<" "<<pos->second<<endl;
    }
    
    word="raffiniert";
    cout<<word<<":"<<endl;
    for (pos=dict.lower_bound(word); pos!=dict.upper_bound(word); ++pos) {
        if (pos->second==word) {
            cout<<" "<<pos->first<<endl;
        }
        
    }
    
    
    return 0;
}
