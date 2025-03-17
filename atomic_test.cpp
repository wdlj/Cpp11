#include<iostream>
#include<atomic>
using namespace std;

void func()
{
    atomic<int> a(8);
    auto b = a.load();
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}

int main()
{
    func();
    return 0;
}