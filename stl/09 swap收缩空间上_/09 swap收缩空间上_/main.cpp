//
//  main.cpp
//  09 swap收缩空间上_
//
//  Created by udc on 2020/10/27.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    vector<int> ivec;
    for (int ix = 0; ix < 100000; ++ix) {
        ivec.push_back(ix);
    }
    cout << "ivec.capacity=" << ivec.capacity() << endl;
    cout << "ivec.size=" << ivec.size() << endl;
    
    ivec.resize(3);
    vector<int>(ivec).swap(ivec);
    
    cout << "ivec.capacity=" << ivec.capacity() << endl;
    cout << "ivec.size=" << ivec.size() << endl;
    
    
    return 0;
}
