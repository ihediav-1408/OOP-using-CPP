#include <iostream>
using namespace std;
template <class T>
class show
{
    public:
    T add(T a,T b)
    {
       return a+b;
    }
};
int main()
{
    show <int>ob1;
    show <float>ob2;
    cout<<ob1.add(3,2)<<endl;
    cout<<ob2.add(3.5,2.5)<<endl;
    return 0;
}