#include <iostream>
using namespace std;
class check
{
    static int c;
    public:
    void count()
    {
        c++;
    }
    static void display()
    {
        cout<<"The number of objects is: "<<c;
    }
};
int check::c;
int main()
{
    check p,q,r,s;
    p.count();
    q.count();
    r.count();
    s.count();
    check::display();
    return 0;
}