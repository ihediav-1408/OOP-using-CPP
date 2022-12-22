#include <iostream>

using namespace std;
class vol{
    public:
    float volume(float r)
    {
        return (4*3.14*r*r*r);
    }
    float volume(float s,float h)
    {
        return (3.14*s*s*h);
    }
    float volume(float l,float b,float h1)
    {
        return (l*b*h1);
    }
};
int main()
{
    vol v;
    float r;
    cout<<"Enter the radius of the sphere: ";
    cin>>r;
    cout<<"The Volume of sphere is "<<v.volume(r)<<endl;
    float s,h;
    cout<<"Enter the side and height of the cylinder: ";
    cin>>s>>h;
    cout<<"The Volume of cylinder is "<<v.volume(s,h)<<endl;
    float l,b,h1;
    cout<<"Enter the length, breadth and height of a cuboid: ";
    cin>>l>>b>>h1;
    cout<<"The Volume of cuboid is "<<v.volume(l,b,h1)<<endl;
    return 0;
}
