#include<iostream>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout<<"construct"<<endl;
    }
    MyClass(const MyClass& myClass)
    {
        cout<<"Copy construct"<<endl;   
    }
    MyClass(MyClass&& MyClass)
    {
        cout<<"Move construct"<<endl;
    }
    ~MyClass()
    {
        cout<<"destruct"<<endl;
    }
    MyClass& operator=(const MyClass& myClass)
    {
        cout<<"operator="<<endl;
        return *this;
    }
    int a=1;
};

MyClass makeMyClassRp(MyClass**  pMyClass)
{
    MyClass* mc = new MyClass;
    *pMyClass = mc;
    return *mc;
}

MyClass makeheapMyClass()
{
    MyClass* mc = new MyClass;
    return std::move(*mc);
}
MyClass makeStackMyClass()
{
    cout<<"enter make func"<<endl;
    MyClass mc;
    mc.a = 2;
    return mc;
}

int main()
{
    cout<<"————————class1——————"<<endl;
    MyClass class1 = makeStackMyClass();
    cout<<"————————class2——————"<<endl;
    MyClass&& class2 = makeStackMyClass();
    cout<<"————————end——————"<<endl;
    return 0;
}