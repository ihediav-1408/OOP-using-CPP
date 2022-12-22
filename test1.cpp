#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of a."<<endl;
        cin>>a;
    }
    void output()
    {
        cout<<"a = "<<a<<endl;
    }
};
int main()
{
    A *arr,d;
    arr=&d;
    arr->input();
    arr->output();
    return 0;
}