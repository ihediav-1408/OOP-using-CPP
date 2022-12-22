#include <iostream>
using namespace std;
class time
{
    int hr;
    int min;
    public:
    time()
    {
        min=0;
    }
    time(int a, int b)
    {
        hr=a;
        min=b;
        cout<<"The time is: "<<hr<<":"<<min;
    }
    time(time &x, time &y)
    {
        hr=x.hr;
        min=y.min;
    }
    ~time()
    {
        cout<<"Destructer called.";
    }
};
int main()
{
    int a, b;
    cout<<"Enter the hour in hh format.";
    cin>>a;
    cout<<"Enter the minutes in mm format.";
    cin>>b;
    time();
    cout<<endl;
    time c= time (a,b);
    cout<<endl;
    time d(c);
    cout<<endl;
    return 0;
}
