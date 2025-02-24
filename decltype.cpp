#include<iostream>
using namespace std;

decltype(auto) func1()
{
    static int a=1;
    return (a);
}
decltype(auto) func2()
{
    int a=1;
    return a;
}

int main()
{
    decltype(auto) f1 = func1();
    std::cout << std::is_same<decltype(f1), int&>::value << std::endl;
    cout<<typeid(f1).name()<<endl;
    decltype(auto) f2= func2();
    //auto f3= func3();
    cout<<typeid(f2).name()<<endl;
    //cout<<typeid(f3).name()<<endl;
    return 0;
}