#include <iostream>
using namespace std;
class dist
{
    int feet, inches;
    public:
    void input()
    {
        cout<<"Enter feet.";
        cin>>feet;
        cout<<"Enter inches.";
        cin>>inches;
    }
    void output()
    {
        cout<<feet<<"feet and "<<inches<<"inches.";
    }
    dist operator +(dist m)
    {
        dist temp;
        temp.inches=inches+m.inches;
        temp.feet=feet+m.feet+(temp.inches/12);
        temp.inches=temp.inches%12;
        return temp;
    }
};
int main()
{
    dist d1,d2,d3;
    cout<<"Enter Distance 1:"<<endl;
    d1.input();
    cout<<"Enter Distance 2:"<<endl;
    d2.input();
    d3=d1+d2;
    cout<<"Total Distance is:"<<endl;
    d3.output();
    cout<<endl;
    return 0;
}
