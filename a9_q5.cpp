#include <iostream>
using namespace std;
class A
{
    int a,b;
    float c;
    public:
    void Calc ()
    {
        c=(float)a/b;
    }
    int Check ()
    {
        return (a-b);
    }
    void Input()
    {
        cin>>a>>b;
    }
    void Output()
    {
        cout<<c;
    }
};
int main ()
{
    A obj;
    obj.Input();
    try
    {
        if (obj.Check() == 0)
        {
            throw(obj);
        }
        else 
        {
            obj.Calc();
            obj.Output();
        }
    }
    catch(A a)
    {
        cout<<"Divide by Zero Exception.";
    }
    return 0;
}