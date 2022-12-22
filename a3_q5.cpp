#include <iostream>
using namespace std;
class swapp
{
    int a,b;
    public:
    void swap(int *a,int *b)
    {
        int temp;
        temp = *a;
        *a=*b;
        *b=temp;

    }
    void input()
    {
       
        cout<<"Enter 2 nos ";
        cin>>a>>b;
        swap(&a,&b);

    }
    void display()
        {
            cout<<a<<" "<<b;
        }
    
};
int main()
{
    swapp p;
    p.input();
    p.display();
    return 0;
}