#include<iostream>
#include<vector>
#include<boost/type_index.hpp>
using namespace std;

void func()
{
    const int a=2;
    auto x = a;
    auto y = &a;
    auto& z = a;

    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(z).name()<<endl;
}

class Widget
{
public:
    static std::vector<Widget> createVec()
    {
        return std::vector<Widget>{1,2,3};
    }
private:
    Widget(int pnum)
    {
        num = pnum;
    }
    int num=0;
};

template<typename T>
void f(const T& param)
{
    cout<<"T type:"<<boost::typeindex::type_id_with_cvr<T>().pretty_name()<<endl;
    cout<<"param type:"<<boost::typeindex::type_id_with_cvr<decltype(param)>().pretty_name()<<endl;
}
void func2()
{
    const auto vw = Widget::createVec();
    cout<<"vm type:"<<boost::typeindex::type_id_with_cvr<decltype(vw)>().pretty_name()<<endl; 
    cout<<"vm[0] type:"<<boost::typeindex::type_id_with_cvr<decltype(&vw[0])>().pretty_name()<<endl; 
    f(&vw[0]);
}


int main()
{
    //func();
    func2();
    return 0;
}