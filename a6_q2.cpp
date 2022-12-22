#include <iostream>
using namespace std;
class array
{
    int n;
    int a[10];
    public:
    array()
    {}
    void array1(int size)
    {
        n=size;
        for(int i=0;i<n;i++)
        {
            a[i]=0;
        }
    }
    friend ostream & operator << (ostream &out, const array &c);
    friend istream & operator >> (istream &in,  array &c);
};
ostream & operator << (ostream &out, const array &c)
{
    for(int i=0;i<c.n;i++)
    {
        out<<c.a[i]<<endl;
    }
    return out;
}
istream & operator >> (istream &in,  array &c)
{
    cout<<"Enter the elements of the array.";
    for(int i=0;i<c.n;i++)
    {
        in>>c.a[i];
    }
    return in;
}
int main()
{
    int size;
    array arr;
    cout<<"Enter the size of the array.";
    cin>>size;
    arr.array1(size);
    cin>>arr;
    cout<<"The array is as following:";
    cout<<arr;
    return 0;
}
