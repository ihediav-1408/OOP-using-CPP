#include <iostream>
using namespace std;
class base
{
    public:
    int a;
};
class derived : private base
{
    public:
    int b;
    void input()
    {
        cin>>a;
        cout<<a;
    }
};
int main()
{
    derived d;
    d.input();
    d.b=30;
    cout<<endl<<d.b;
}