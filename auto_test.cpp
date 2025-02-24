#include<iostream>
#include<vector>
using namespace std;

// auto用于变量类型推导
void func()
{
    vector<int> a(6,100);
    for(auto it = a.begin(); it<a.end(); it++)
    {
        cout<<*it<<endl;
    }
}

int main()
{
    int x = 27;
    auto && rrx = x;
    cout<<typeid(rrx).name()<<endl;
    return 0;
}
