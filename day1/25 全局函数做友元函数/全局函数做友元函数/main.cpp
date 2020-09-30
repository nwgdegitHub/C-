//
//  main.cpp
//  全局函数做友元函数
//
//  Created by LiuWei on 2019/4/5.
//  Copyright © 2019 xxx. All rights reserved.
//

#include <iostream>
using namespace std;

class Building {
    
    friend void goodGay(Building *build);
    
public:
    Building() {
        this ->m_SittingRoom = "客厅";
        this ->m_BedRoom = "卧室";
        
    }
    
    string m_SittingRoom;
    
private:
    string m_BedRoom;
    
};

void goodGay(Building *build){
    cout << "好基友正在访问" << build->m_SittingRoom << endl;
    cout << "好基友正在访问" << build->m_BedRoom << endl;
}



int main(int argc, const char * argv[]) {
    
    
    
    
    return 0;
}
