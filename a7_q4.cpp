#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    A(){}
    A(int k)
    {
        a=k;
    }
    void show()
    {
        cout<<a<<endl;
    }
    operator int()
    {
        return a;
    }
};
int main()
{
    A r(3);
    int x;
    x=r;
    cout<<x<<endl;
    r.show();
}