#include <iostream>
using namespace std;
class rupee
{
    int a=0;
    public:
    void value()
    {
        cout<<"Enter the rupees."<<endl;
        cin>>a;
    }
    int input()
    {
        value();
        return a;
    }
    void output()
    {
        cout<<a<<" rupees."<<endl;
    }
};
class paise
{
    int b;
    public:
    paise(){}
    paise(rupee &x)
    {
        b=x.input();
        b=b*100;
    }
    void output()
    {
        cout<<b<<" paise."<<endl;
    }
};
int main()
{
    rupee a;
    paise b;
    b=a;
    a.output();
    b.output();
    return 0;
}