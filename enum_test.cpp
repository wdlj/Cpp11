#include<iostream>

using namespace std;

enum class Color:int{
    Red,
    Green,
    Blue
};
int main()
{
    int a = static_cast<int>(Color::Red);
    cout<<a<<endl;
    return 0;
}