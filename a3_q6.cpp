#include <iostream>
using namespace std;
class increment
{
    public:
    void input()
    {
        cout<<"Enter a value ";
        int n;
        cin>>n;
        inc(n);
    }
    void inc(int n)
    {
        ++n;
        cout<<n;
    }
};
int main()
{
    increment i;
    i.input();
}