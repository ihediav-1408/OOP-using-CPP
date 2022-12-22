#include <iostream>
using namespace std;
class B;
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
    operator B();
};
class B
{
    public:
    int b;
    void output()
    {
        cout<<b<<endl;
    }
};
A::operator B()
{
    B x;
    x.b=a;
    return x;
}
int main()
{
    A a;
    B b;
    b=a;
    a.output();
    b.output();
    return 0;
}
