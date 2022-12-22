#include <iostream>
using namespace std;
class A
{
    int a=6;
    public:
    int input()
    {
        return a;
    }
    void output()
    {
        cout<<a<<endl;
    }
};
class B
{
    int b;
    public:
    B(){}
    B(A &x)
    {
        b=x.input();
    }
    void output()
    {
        cout<<b<<endl;
    }
};
int main()
{
    A a;
    B b;
    b=a;
    a.output();
    b.output();
    return 0;
}