#include <iostream>
using namespace std;
template <class T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<add<int>(3,2)<<endl;
    cout<<add<float>(3.5,2.5)<<endl;
    return 0;
}