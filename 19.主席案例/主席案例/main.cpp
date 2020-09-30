//
//  main.cpp
//  主席案例
//
//  Created by LiuWei on 2019/3/17.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>
using namespace std;

class ChairMan {
 
    
private:
    ChairMan(){
        cout << "创建主席" << endl;
    }
    ChairMan(const ChairMan &c){
        
    }
    
public:
    static ChairMan * getInstance(){
        return singleMan;
    }
    
private:
    static ChairMan *singleMan;
    
    
};
ChairMan * ChairMan::singleMan = new ChairMan;

int main(int argc, const char * argv[]) {

    cout << "Main" << endl;
    ChairMan *c1 = ChairMan::getInstance();
    ChairMan *c2 = ChairMan::getInstance();
    cout << c1 << endl;
    cout << c2 << endl;
//    ChairMan::singleMan = NULL; //这时候将singleMan私有化就不能修改了
    
//    ChairMan *c3 = new ChairMan(*c2);
    
    return 0;
}
