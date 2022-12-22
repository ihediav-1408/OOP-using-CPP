#include <iostream>
using namespace std;
class A
{
    public:
    int check (int a)
    {
        if (a<0)
            return -1;
        else if (a==0)
            return 0;
        else 
            return 1;
    }
};
int main ()
{
    int a;
    A obj;
    while(1)
    {
        cin>>a;
        try
        {
            if(obj.check(a) == -1)
                throw(1);
            else if (obj.check(a)==1)
                throw(1.0);
            else 
                throw('A');
        }
        catch(int x)
        {
            cout<<"Negative number."<<endl;
        }
        catch(double x)
        {
            cout<<"Positive number."<<endl;;
        }
        catch(...)
        {
            cout<<"Zero"<<endl;
        }

    }
}