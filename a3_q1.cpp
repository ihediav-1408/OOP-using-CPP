#include <iostream>

using namespace std;
class ar{
    public:
    float area(float r)
    {
        return (3.14*r*r);
    }
    int area(int l,int b)
    {
        return (l*b);
    }
    float area(float b1,float h)
    {
        return ((b1*h)/2);
    }
};
int main()
{
    ar a;
    float r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    cout<<"The Area of circle is "<<a.area(r)<<endl;
    int l,b;
    cout<<"Enter the length and breadth: ";
    cin>>l>>b;
    cout<<"The Area of rectangle is "<<a.area(l,b)<<endl;
    float b1,h;
    cout<<"Enter the base and height of a triangle: ";
    cin>>b1>>h;
    cout<<"The Area of triangle is "<<a.area(b1,h)<<endl;
    return 0;
}
