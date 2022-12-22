#include <iostream>
using namespace std;
class mins
{
    int a=1080;
    public:
    int input()
    {
        return a;
    }
    void output()
    {
        cout<<a<<" minutes"<<endl;
    }
};
class hours
{
    int b;
    public:
    hours(){}
    hours(mins &x)
    {
        b=x.input();
        b=b/60;
    }
    void output()
    {
        cout<<b<<" hours"<<endl;
    }
};
int main()
{
    mins a;
    hours b;
    b=a;
    a.output();
    b.output();
    return 0;
}