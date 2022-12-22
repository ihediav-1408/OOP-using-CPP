#include <iostream>
using namespace std;
class A
{
    int x[5];
    public:
    int Check (int a)
    {
        if(a>4 || a<0)
        {
            return 0;
        }
        else 
            return 1;
    }
    void Input()
    {
        for(int i=0;i<5;i++)
        {
            cin>>x[i];
        }
    }
    void Output(int a)
    {
        cout<<x[a]<<endl;
    }
};
int main ()
{
    A obj;
    obj.Input();
    
    while(1) {
    try
    {
        cout<<"Enter the index to print.";
    int a;
    cin>>a;
        if (obj.Check(a) == 0)
        {
            throw(obj);
        }
        else 
        {
            obj.Output(a);
        }
    }
    catch(A a)
    {
        cout<<"Array out of bounds exception\n";
    }
    }
    return 0;
}