#include<iostream>
#include<boost/type_index.hpp>
using namespace std;

template<typename T>
void func(T param)
{
    cout<<"typeid param:"<<typeid(param).name()<<endl;
    cout<<"boost param:"<<boost::typeindex::type_id_with_cvr<decltype(param)>().pretty_name()<<endl;
    cout<<"boost T:"<<boost::typeindex::type_id_with_cvr<T>().pretty_name()<<endl;
}

template<typename T>
void func2(T& param)
{
    cout<<"typeid param:"<<typeid(param).name()<<endl;
    cout<<"boost param:"<<boost::typeindex::type_id_with_cvr<decltype(param)>().pretty_name()<<endl;
    cout<<"boost T:"<<boost::typeindex::type_id_with_cvr<T>().pretty_name()<<endl;
}

void func3(int (&a) [3])
{
    for(int i=0; i<sizeof(a)/sizeof(a[0]); )
    {
        a[i]= i++;
        cout<<i<<":"<<a[i]<<&a[i]<<endl;
    }
}

template<typename T>
void print_all(T& arr)
{
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<i<<":"<<arr[i]<<&(arr[i])<<endl;
    }
}

int main(int argc, char**argv)
{
    int arr3[3] = {6,7,8};
    int arr[3] = {1,2,3};
    print_all(arr);
    print_all(arr3);
    func3(arr);
    print_all(arr);
    print_all(arr3);
    cout<<typeid(arr).name()<<endl;
    func(arr);   
    func2(arr);   
    char arr2[3]="ab";
    cout<<typeid(arr2).name()<<endl;
    func(arr2);   
    func2(arr2);   
    return 0;   
}