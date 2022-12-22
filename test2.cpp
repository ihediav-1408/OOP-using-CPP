#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of a."<<endl;
        cin>>a;
    }
    void output()
    {
        cout<<"a = "<<a<<endl;
    }
    void compare(A b)
    {
        if(this->a>b.a)
        {
            cout<<this->a<<" is greater than "<<b.a;
        }
        else if(b.a>this->a)
        {
            cout<<b.a<<" is greater than "<<this->a; 
        }
        else
        {
            cout<<"Both are equal."<<endl;
        }
    }
};
int main()
{
    A *arr,c,d;
    arr=&d;
    arr->input();
    arr->output();
    c.input();
    arr->compare(c);
    return 0;
}