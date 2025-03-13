#include<iostream>
#include<thread>
using namespace std;
int add(int a, int b)
{
    cout<<a+b<<endl;
    return a +b;
}

int main()
{
    int a =3;
    int b =4;
    std::thread t(add, a,b);
    //t.join();
    return 0;
}