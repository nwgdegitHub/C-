//
//  main.cpp
//  多态
//
//  Created by udc on 2020/10/13.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
using namespace std;

class Animal{

public:
    virtual void speak(){
        cout << "Animal speak" << endl;
    }

};

class Dog :public Animal{
    public:
    void speak(){
        cout << "Dog speak" << endl;
    }
};

class Cat :public Animal{
    public:
    void speak(){
        cout << "Cat speak" << endl;
    }
};

void doSpeak(Animal &animal){
    animal.speak();
}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    Animal animal1;
    doSpeak(animal1);
    
    
    Dog dog;
    doSpeak(dog);
    
    Cat cat;
    doSpeak(cat);
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
