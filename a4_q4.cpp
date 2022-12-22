#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        cout<<"Order 1: Default Constructor.";
    }
    A(int s)
    {
        a=s;
        cout<<"Order 2: Parameterized Constructor.";
    }
    A(A &t)
    {
        a=t.a;
        cout<<"Order 3: Copy Constructor.";
    }
    void display()
    {
        cout<<a;
    }
    ~A()
    {
        cout<<"Destructor Called.";
    }
};
int main()
{
    A();
    cout<<endl;
    A m(10);
    cout<<endl;
    A n(m);
    cout<<endl;
    m.display();
    n.display();
    return 0;
}