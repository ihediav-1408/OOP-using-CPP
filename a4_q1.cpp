#include <iostream>
using namespace std;
class complex
{
    float real;
    float imag;
    public:
    complex()
    {
        real=0.0;
        imag=0.0;
    }
    complex(float a, float b)
    {
        real=a;
        imag=b;
        cout<<"The complex number is: "<<real<<"+i"<<imag;
    }
    complex(complex &x, complex &y)
    {
        real=x.real;
        imag=y.imag;
    }
    ~complex()
    {
        cout<<"Destructer called.";
    }
};
int main()
{
    float a, b;
    cout<<"Enter the real part of the complex number.";
    cin>>a;
    cout<<"Enter the imaginary part of the complex number.";
    cin>>b;
    complex();
    cout<<endl;
    complex c= complex (a,b);
    cout<<endl;
    complex d(c);
    cout<<endl;
    return 0;
}
