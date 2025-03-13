#include<iostream>
using namespace std;

class Singleton
{
protected:
    Singleton()=default;
    //{
    //    cout<<"Constract Singleton"<<endl;
    //}
};

class Myclass:Singleton
{
public:
    Myclass()
    {
        cout<<"Constract MyClass"<<endl;
    }    
};

int main()
{
    Myclass my;
    return 0;
}