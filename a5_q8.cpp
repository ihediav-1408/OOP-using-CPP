#include<iostream>
using namespace std;
 
class A
{
public:
    A()
    {
        cout<< "Constructor called" <<endl;
        B() ;
    }
 
    ~A()
    {
        B();
    }
 
    virtual void B()
    {
        cout<< "Virtual method called" <<endl;
    }
 
    void C()
    {
        B();
    }
};
 
class D: public A
{
public:
        D()
        {
            cout<< "Derived class Constructor called" <<endl;
        }
        void B()
        {
            cout<< "Derived class Virtual method called" <<endl;
        }
};
 
int main()
{
    D d;
    d.C();
}