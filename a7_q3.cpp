#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    A(){}
    A(int x)
    {
        a=x;
    }
    void output()
    {
        cout<<a<<endl;
    }
};
int main()
{
    A r;
    int k=5;
    r=k;
    r.output();
    return 0;
}