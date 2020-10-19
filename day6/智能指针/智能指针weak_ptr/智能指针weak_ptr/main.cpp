//
//  main.cpp
//  智能指针weak_ptr
//
//  Created by udc on 2020/10/19.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include<memory>
using namespace std;
class B;
class A
{
public:
    weak_ptr<B> pb_;
    ~A()
    {
        cout<<"A delete\n";
    }
};
class B
{
public:
    shared_ptr<A> pa_;
    ~B()
    {
        cout<<"B delete\n";
    }
};
  
void fun()
{
    shared_ptr<B> pb(new B());
    shared_ptr<A> pa(new A());
    pb->pa_ = pa;
    pa->pb_ = pb;
    cout<<pb.use_count()<<endl;
    cout<<pa.use_count()<<endl;
}

int main(int argc, const char * argv[]) {
    fun();
    return 0;
}
