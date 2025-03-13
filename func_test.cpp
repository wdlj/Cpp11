#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

typedef int(APPFUNC)(int, int);

int main()
{
    APPFUNC* func1 = add;
    int a = 1;
    int b = 2;
    int result = (*func1)(a, b);
    cout<<result <<endl;
    return 0;
}