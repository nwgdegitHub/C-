//
//  main.cpp
//  string容器
//
//  Created by udc on 2020/10/29.
//  Copyright © 2020 udc. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //内部封装了char* 提供了一些成员方法
    //https://www.cnblogs.com/wfplingyun/p/12509584.html
    
    //构造
    string s1;
    cout<<"s1 = "<<s1<<endl;
    
    const char *str = "abcd";
    string s2(str);
    cout<<"s2 = "<<s2<<endl;
    
    string s3(s2);
    cout<<"s3 = "<<s3<<endl;
    
    string s4(10,'x');
    cout<<"s4 = "<<s4<<endl;
    
    //赋值
    string str1;
    str1 = "str1";
    cout<<"str1 = "<< str1 <<endl;
    
    string str2;
    str2 = str1;
    cout<<"str2 = "<< str2 <<endl;
    
    string str3;
    str3 = 'a';
    cout<<"str3 = "<< str3 <<endl;
    
    string str4;
    str4.assign("str4 c++");
    cout<<"str4 = "<< str4 <<endl;
    
    string str5;
    str5.assign("str5c++",6);//取6个赋值给str5
    cout<<"str5 = "<< str5 <<endl;
    
    string str6;
    str6.assign(str5);
    cout<<"str6 = "<< str6 <<endl;
    
    string str7;
    str7.assign(5,'c');//赋值5个c
    cout<<"str7 = "<< str7 <<endl;
    
    
    //拼接
    string str8 = "我";
    str8 += "爱你";
    str8.append("你爱我");
    cout<<"str8 = "<< str8 <<endl;
    
    
    //查找
    string str9 = "abcdefghijklmn";
    int pos = str9.find("bc");
    if (pos == -1) {
        cout << "未找到" << endl;
    }
    else{
        cout << "pos = " << pos << endl;
    }
    pos = str9.rfind("gc");
    cout << "pos = " << pos << endl;
    
    
    //替换
    str9.replace(2, 1, "1122");//从第几个位置开始 拿掉原来几个 插入新的
    cout << "str9 = " << str9 << endl;
    
    //比较
    
    //存取
    for (int i = 0; i<str9.size(); i++) {
        cout << str9[i] << ",";
    }
    cout << endl;
    
    for (int i = 0; i<str9.size(); i++) {
        cout << str9.at(i) << " *_* ";
    }
    cout << endl;
    
    str9[0] = 'o';
    str9.at(1) = 'p';
    cout <<str9<< endl;
    
    //插入和删除
    
    str9.insert(1, "666");
    cout <<str9<< endl;
    
    str9.erase(1,3);
    cout <<str9<< endl;
    
    
    //子串
    string subStr = str9.substr(1,3);
    cout <<str9<< endl;
    
    
    string email = "liuwei@shftz.cn";
    int pos1 = email.find("@");
    string username = email.substr(0,pos1);
    cout << username << endl;
    
    
    return 0;
}
