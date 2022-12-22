#include <iostream>
using namespace std;
class st
{
    string s;
    int l;
    public:
    st(void)
    {
        cout<<"Enter String ";
        cin>>s;
        l=s.length();
    }
    st(string a)
    {
        s=a;
    }
    st(st &t)
    {
        s=t.s;
    }
    void join1(st &r,st &v)
    { 
        
        cout<<"The joined string is "<<(r.s+v.s)<<endl;
    }
    void display()
    {
        cout<<s<<endl;
    }

};
int main()
{
    st i;
    string a;
    cout<<"Enter string ";
    cin>>a;
    st o(a);
    st n(i);
    cout<<"The first string is: "<<endl;
    i.display();
    cout<<"The second string is: "<<endl; 
    o.display();
    n.join1(i,o);
    return 0;
}