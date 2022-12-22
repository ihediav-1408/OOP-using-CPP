#include <iostream>
using namespace std;
class hours
{
    int a=18;
    public:
    int input()
    {
        return a;
    }
    void output()
    {
        cout<<a<<" hours"<<endl;
    }
};
class mins
{
    int b;
    public:
    mins(){}
    mins(hours &x)
    {
        b=x.input();
        b=b*60;
    }
    void output()
    {
        cout<<b<<" minutes"<<endl;
    }
};
int main()
{
    hours a;
    mins b;
    b=a;
    a.output();
    b.output();
    return 0;
}