//
//  main.cpp
//  数组的动态内存分配
//
//  Created by udc on 2020/11/23.
//  https://www.runoob.com/cplusplus/cpp-dynamic-memory.html

#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        cout<<"调用构造函数！"<<endl;
    }
    ~Person(){
        cout<<"调用析构函数！"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int a[1024*1024];//栈区内存超过一定值会爆
    
    //一维数组
    int *array=new int[10];
    delete [] array;
    
    //二维数组
    int **array2;
    int i,j;
    array2 = new int* [4];
    for (i=0; i<4; i++) {
        array2[i]=new int [8];
    }
    for (i=0; i<4; i++) {
        for (j=0; j<8; j++) {
            array2[i][j]=j*i;
        }
    }
    for (i=0; i<4; i++) {
        for (j=0; j<8; j++) {
            if (j==0) {
                cout<<endl;
            }
            cout<<array2[i][j]<<"\t";
        }
    }
    for (i=0; i<4; i++) {
        delete [] array2[i];
    }
    delete [] array2;
    
    //三维数组array3[2][3][4]
    int ***array3;
    array3=new int **[2];
    for (int i = 0; i<2; i++) {
        array3[i]=new int *[3];
        for (int j = 0; j<3; j++) {
            array3[i][j]=new int[4];
        }
        
    }
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<3; j++) {
            for (int k = 0; k<4; k++) {
                array3[i][j][k]=i+j+k;
                cout<<array3[i][j][k]<<" ,";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    for (int i = 0; i<2; i++) {
        for (j=0; j<3; j++) {
            delete [] array3[i][j];
        }
    }
    for (int i = 0; i<2; i++) {
        delete [] array3[i];
    }
    delete [] array3;
    
    //对象的动态内存分配
    Person *personArr = new Person[4];
    
    delete [] personArr;
    
    return 0;
}
