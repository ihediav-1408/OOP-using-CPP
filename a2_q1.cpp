#include <iostream>

using namespace std;

class name
{
    private:
    string na;
    public:
    void print()
    {
        cout<<"Enter your name.";
        cin>>na;
        cout<<"Hello "<<na;
    }
};
int main()
{
    name n;
    n.print();
    return 0;
}