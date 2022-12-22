#include <iostream>

using namespace std;

void print(char x = '*', int n = 80) 
{
    for(int i = 0; i < n; i++) 
    {
        cout<<x;
    }
    cout<<endl;
}
int main() 
{
    print();
    print('V');
    print('#',7);
    return 0;
}