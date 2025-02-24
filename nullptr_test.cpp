#include<iostream>
using namespace std;

// 1: nullptr 解决C++ NULL 0, char* 和int 重载 不能正确匹配问题，报错提示
void func(char* a)
{
    cout<<"char*:"<<a<<endl;
}

void func(int a)
{
    cout<<"int:"<<a<<endl;
}

int main()
{
    func(NULL);
    func(nullptr);
    return 0;
}
