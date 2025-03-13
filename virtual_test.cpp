#include<iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"constract Base"<<endl;
    }
    Base(const Base& other)
    {
        this->a = other.a;
        cout<<"copy constract Base"<<endl;
    }
    Base& operator=(const Base& other)
    {
        this->a = other.a;
        cout<<"operator = Base"<<endl;
        return *this;
    }
    virtual void print_info()
    {
        cout<<"Base"<<endl;
    }
    int a=0;
};

class Child :public Base
{
public:
    Child()
    {
        a =9;
        b = 8;
        cout<<"construct Child"<<endl;
    }
    Child(const Child& other)
    {
        this->b = other.b;
        cout<<"copy construct Child"<<endl;
    }
    void print_info()
    {
        cout<<"Child"<<endl;
    }
    int b=0;
};


int main()
{
    Base &&c = Child();
    cout<<c.a<<endl;
    c.print_info();
    cout<<"sizeof c"<<sizeof(c)<<endl;
    cout<<"sizeof int"<<sizeof(int)<<endl;
    cout<<"sizeof Base"<<sizeof(Base)<<endl;
    cout<<"sizeof Child"<<sizeof(Child)<<endl;
    return 0;
}