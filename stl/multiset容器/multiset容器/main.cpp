//
//  main.cpp
//  multiset容器
//
//  Created by udc on 2020/10/28.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;

void printSet(multiset<int, greater<int>>&set){
    multiset<int, greater<int>>::iterator pos;
    for (pos = set.begin(); pos != set.end(); ++pos) {
        cout << *pos << ' ';
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //允许重复元素
    typedef multiset<int, greater<int>> IntSet;
    IntSet coll1;
    
    coll1.insert(4);
    coll1.insert(3);
    coll1.insert(5);
    coll1.insert(1);
    coll1.insert(4);
    coll1.insert(6);
    coll1.insert(2);
    coll1.insert(5);
    
    printSet(coll1);
    
    IntSet::iterator ipos = coll1.insert(4);
    cout << "4 inserted as element "
    << distance (coll1.begin(),ipos) + 1
    << endl;
    
    multiset<int> coll2(coll1.begin(),coll1.end());
    copy(coll2.begin(),coll2.end(),ostream_iterator<int>(cout," "));
    cout << endl;

    
    
    
    
    
    return 0;
}
