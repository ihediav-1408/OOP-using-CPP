#include <iostream>
using namespace std;
class complex
{
    private:
    int real;
    int imag;
    public:
    void input()
    {
        cout<<"Enter the real part of complex number."<<endl;
        cin>>real;
        cout<<"Enter the imaginary part of complex number."<<endl;
        cin>>imag;
    }
    void print()
    {
        cout<<"COMPLEX NUMBER DETAILS"<<endl;
        cout<<real<<"+i"<<imag<<endl;
    }
};
int main()
{
    int i;
    complex c[10];
    for(i=0;i<10;i++)
    {
        cout<<"Enter the deatils of complex number"<<i+1<<endl;
        c[i].input();
    }
    for(i=0;i<10;i++)
    {
        c[i].print();
    }
    return 0;
}