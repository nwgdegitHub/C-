//
//  main.cpp
//  异常
//
//  Created by udc on 2020/11/20.
//  http://c.biancheng.net/view/422.html

#include <iostream>
using namespace std;

void test1(){
    double m ,n;
    cin >> m >> n; //换行回车输入
    try {
        cout << "before dividing." << endl;
        if( n == 0)
            throw -1; //抛出int类型异常 若抛出-1.0 则被catch(double d)捕获
        else
            cout << m / n << endl;
        cout << "after dividing." << endl;
    }
    catch(double d) {
        cout << "catch(double) " << d <<  endl;
    }
    catch(int e) {
        cout << "catch(int) " << e << endl;
    }
    cout << "finished" << endl;
}
//能够捕获任何异常的 catch 语句
void test2(){
    double m, n;
    cin >> m >> n;
    try {
        cout << "before dividing." << endl;
        if (n == 0)
            throw - 1;  //抛出整型异常
        else if (m == 0)
            throw - 1.0;  //拋出 double 型异常
        else
            cout << m / n << endl;
        cout << "after dividing." << endl;
    }
    catch (double d) {
        cout << "catch (double)" << d << endl;
    }
    catch (...) {
        cout << "catch (...)" << endl;
    }
    cout << "finished" << endl;
}

#include <string>

class CException
{
public:
    string msg;
    CException(string s) : msg(s) {}
};
double Devide(double x, double y)
{
    if (y == 0)
        throw CException("devided by zero");
    cout << "in Devide" << endl;
    return x / y;
}
int CountTax(int salary)
{
    try {
        if (salary < 0)
            throw - 1;
        cout << "counting tax" << endl;
    }
    catch (int) {
        cout << "salary < 0" << endl;
    }
    cout << "tax counted" << endl;
    return salary * 0.15;
}

//异常的再拋出
//如果一个函数在执行过程中拋出的异常在本函数内就被 catch 块捕获并处理，那么该异常就不会拋给这个函数的调用者（也称为“上一层的函数”）；如果异常在本函数中没有被处理，则它就会被拋给上一层的函数。
void test3()
{
    double f = 1.2;
    try {
        CountTax(-1);
        f = Devide(3, 0);
        cout << "end of try block" << endl;
    }
    catch (CException e) {
        cout << e.msg << endl;
    }
    cout << "f = " << f << endl;
    cout << "finished" << endl;
}

//有时，虽然在函数中对异常进行了处理，但是还是希望能够通知调用者，以便让调用者知道发生了异常，从而可以作进一步的处理。在 catch 块中拋出异常可以满足这种需要。
int CountTax2(int salary)
{
    try {
        if( salary < 0 )
            throw string("zero salary");
        cout << "counting tax" << endl;

    }
    catch (string s ) {
        cout << "CountTax error : " << s << endl;
        throw; //继续抛出捕获的异常
    }
    cout << "tax counted" << endl;
    return salary * 0.15;
}

void test4()
{
    double f = 1.2;
    try {
        CountTax2(-1);
        cout << "end of try block" << endl;
    }
    catch(string s) {
        cout << s << endl;
    }
    cout << "finished" << endl;
}

int main()
{
    //test1();
    
    //test2();
    
    //test3();
    
    
    
    return 0;
}
