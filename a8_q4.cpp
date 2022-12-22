#include <iostream>
using namespace std;
class A
{
    public:
    virtual void input()=0;
    virtual void display()=0;
};
class B: public A
{
    int a, b;
    public:
    void input()
    {
        cout<<"Enter two numbers."<<endl;
        cin>>a>>b;
    }
    void display()
    {
        cout<<"The sum is: "<<a+b<<endl;
    }
};
class C: public A
{
    int a, b;
    public:
    void input()
    {
        cout<<"Enter two numbers."<<endl;
        cin>>a>>b;
    }
    void display()
    {
        cout<<"The product is: "<<a*b<<endl;
    }
};
int main()
{
    B bb;
    bb.input();
    bb.display();
    C cc;
    cc.input();
    cc.display();
    return 0;
}