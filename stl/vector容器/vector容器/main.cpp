//
//  main.cpp
//  vector容器
//
//  Created by udc on 2020/10/26.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


void printVector(vector<string> &v){
    
    for (vector<string>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "容量=" << v.capacity() << endl;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    //*************数组习惯用法**************
    vector <int>v;
    int arr[] = {2,3,4,1,9};
    vector<int> v1(arr,arr+sizeof(arr)/sizeof(int));
    vector<int> v2(v1.begin(),v1.end());
    
//    for (int ix = 0; ix < v1.size(); ++ix) {
//        cout << v1[ix] << endl;
//    }
//
//    for (int ix = 0; ix < v2.size(); ++ix) {
//        cout << v2[ix] << endl;
//    }
    
    
// 把 arr 的 6 个元素拷贝到 ivec 中
//    vector<int> ivec(arr,arr+5);
    
    // 拷贝 3 个元素
    vector< int > ivec( &arr[ 2 ], &arr[ 5 ] );
    for (int ix = 0; ix < ivec.size(); ++ix) {
        cout << ivec[ix] << endl;
    }
    
     // 用另一个 vector 初始化一个 vector
    vector<int> ages(ivec);
    vector< int > svec;
     // 把一个 vector 拷贝给另一个 vector
    svec = ages;
    
    //*************STL习惯用法**************
    vector<string>text;
    string word;

    while (cin>>word) {
        text.push_back(word);
    }
    cout << "按ctrl+d 输入结束..." << endl;
    
//    for (int ix = 0; ix < text.size(); ++ix) {
//        cout << text[ix] << endl;
//    }
    
//    for ( vector<string>::iterator it = text.begin();
//          it != text.end();++it )
//        cout << *it << endl;
    
    printVector(text);
    
    
    
    
    
    return 0;
}

