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
 class Widget
 {
public:
    Widget()
    {
        prio.push_back(true);
        prio.push_back(false);
        prio.push_back(true);
        prio.push_back(false);
    }
    std::vector<bool> prio;
 };

std::vector<bool> features(const Widget& w)
{
    return w.prio;
}
void processprio(const Widget&w, bool prio)
{
    cout<<"prio"<<prio<<endl;
}
int main()
{
    Widget w;
    auto h = features(w)[3];
    processprio(w,h);
    return 0;
}
