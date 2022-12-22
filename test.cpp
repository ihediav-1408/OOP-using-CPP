#include <iostream>
using namespace std;
class meter
{
    int a=0;
    public:
    void value()
    {
        cout<<"Enter the meter."<<endl;
        cin>>a;
    }
    int input()
    {
        value();
        return a;
    }
    void output()
    {
        cout<<a<<" meters."<<endl;
    }
};
class centimeter
{
    int b;
    public:
    centimeter(){}
    centimeter(meter &x)
    {
        b=x.input();
        b=b*100;
    }
    void output()
    {
        cout<<b<<" centimeters."<<endl;
    }
};
int main()
{
    meter a;
    centimeter b;
    b=a;
    a.output();
    b.output();
    return 0;
}