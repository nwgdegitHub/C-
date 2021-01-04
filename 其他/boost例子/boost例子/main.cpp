//
//  main.cpp
//  boost例子
//
//  Created by udc on 2020/12/11.
//

#include <iostream>
#include <boost/lambda/lambda.hpp>
#include <boost/timer.hpp>
#include <boost/regex.hpp>

using namespace std;
using namespace boost;

int fun(int n){
    if (n<=1) {
        return n;
    }
    return fun(n-1)+fun(n-2);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
//    cout << fun(5) << endl;
//
//    timer tm;
//    cout << tm.elapsed() << endl;
    
//    using namespace boost::lambda;
//    typedef std:: istream_iterator<int> in;
//
//    std::for_each(in(std::cin), in(), std::cout << (_1 * 3) << " ");
    
    
    //使用regex要引入静态库路径
    //在Build Setings - Other linker flags 添加 "/usr/local/Cellar/boost/1.74.0/lib/libboost_regex.a"
    std::string   str = "2013-08-15";

    boost::regex  rex("(?<year>[0-9]{4}).*(?<month>[0-9]{2}).*(?<day>[0-9]{2})");

    boost::smatch res;

    std::string::const_iterator begin = str.begin();

    std::string::const_iterator end   = str.end();

    if (boost::regex_search(begin, end, res, rex))

    {
           std::cout << "Day:   " << res ["day"] << std::endl
        << "Month: " << res ["month"] << std::endl
        << "Year:  " << res ["year"] << std::endl;
    }
    
    return 0;
}


