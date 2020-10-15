//
//  main.cpp
//  整个类做友元类
//
//  Created by LiuWei on 2019/4/5.
//  Copyright © 2019 xxx. All rights reserved.
//

#include <iostream>

using namespace std;

class Building {
    //让GoodGay做Building的友元类 这样GoodGay才能访问Building的私有属性
    friend class GoodGay;
public:
    Building();
    string m_SittingRoom;
private:
    string m_BedRoom;
};


class GoodGay {
public:
    GoodGay();
    void visit();
private:
    Building *building;
};


GoodGay::GoodGay(){
    building = new Building;
}

void GoodGay::visit(){
    cout << "好基友正在访问" <<  this->building->m_SittingRoom << endl;
    cout << "好基友正在访问" <<  this->building->m_BedRoom << endl;
}

Building:: Building(){
    this ->m_SittingRoom = "客厅";
    this ->m_BedRoom = "卧室";
}



int main(int argc, const char * argv[]) {
    GoodGay gg;
    gg.visit();
    return 0;
}
