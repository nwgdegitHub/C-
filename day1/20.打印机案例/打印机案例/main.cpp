//
//  main.cpp
//  打印机案例
//
//  Created by LiuWei on 2019/3/17.
//  Copyright © 2019年 xxx. All rights reserved.
//

#include <iostream>
using namespace std;

class Printer {
    
private:
    Printer(){
        m_Count = 0;
    }
    Printer(const Printer& p);
    
public:
    static Printer *getInstance(){
        return singlePrinter;
    }
    
    void printText(string text){
        cout << text << endl;
        m_Count++;
        cout << "打印机使用次数" << m_Count << endl;
    }

private:
    static Printer *singlePrinter;
    int m_Count;
    

};

Printer* Printer::singlePrinter = new Printer;

int main(int argc, const char * argv[]) {
    
    Printer *printer = Printer::getInstance();
    printer->printText("入职");
    printer->printText("体检");
    printer->printText("工作");
    printer->printText("离职");
    return 0;
}
