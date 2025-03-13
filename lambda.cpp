#include<iostream>
#include<vector>
#include<functional>
#include<memory>
using namespace std;

using FilterContainer = std::vector<std::function<bool(int)>>;
FilterContainer filters;

class Widget
{
public:

    void addFilter()
    {
        srand((unsigned int)time(nullptr));
        divisor = rand()%100+1;
        cout<<"divisor:"<<divisor<<endl;
        filters.emplace_back([=](int value)
                            { 
                                cout<<"value:"<<value<<",divisor:"<<divisor<<endl; 
                                return value%divisor == 0;
                            });
    }


private:
    int divisor;
};

void dotest()
{
    std::unique_ptr<Widget> upw = std::make_unique<Widget>();
    upw->addFilter();
}

void dotest1()
{
    Widget w;
    w.addFilter();
}
int main()
{
    {
        Widget w;
        w.addFilter();
    }
    char arr[256]={0};
    cout<<filters[0](3)<<endl;
    return 0;
}