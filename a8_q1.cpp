#include <iostream>
using namespace std;
class shape
{
    public:
    virtual void area()=0;
};
class circle: public shape
{
    float r, a1;
    public:
    void input()
    {
        cout<<"Enter radius of the circle."<<endl;
        cin>>r;
    }
    void area()
    {
        a1=r*r*r;
        cout<<"The area of the circle is: "<<a1<<endl;
    }
};
class square: public shape
{
    float s, a2;
    public:
    void input()
    {
        cout<<"Enter side of the square."<<endl;
        cin>>s;
    }
    void area()
    {
        a2=s*s;
        cout<<"The area of the square is: "<<a2<<endl;
    }
};
class triangle: public shape
{
    float b, h, a3;
    public:
    void input()
    {
        cout<<"Enter base and height of the triangle."<<endl;
        cin>>b>>h;
    }
    void area()
    {
        a3=0.5*b*h;
        cout<<"The area of the triangle is: "<<a3<<endl;
    }
};
int main()
{
    circle c;
    c.input();
    c.area();
    square sq;
    sq.input();
    sq.area();
    triangle t;
    t.input();
    t.area();
    return 0;
}