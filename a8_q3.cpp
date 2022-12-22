#include <iostream>
using namespace std;
class account
{
    public:
    int ac_no;
    string name;
    float bal=0.0;
    void input()
    {
        cout<<"Enter the account number."<<endl;
        cin>>ac_no;
        cout<<"Enter the name of the account holder."<<endl;
        cin>>name;
        cout<<"Enter balance."<<endl;
        cin>>bal;
    }
    virtual void display()
    {
        cout<<"ACCOUNT NUMBER: "<<ac_no<<endl;
        cout<<"NAME: "<<name<<endl;
        cout<<"BALANCE: "<<bal<<endl;
    }
};
class savings: public account
{
    float min, w;
    public:
    void input()
    {
        cout<<"Enter minimum balance."<<endl;
        cin>>min;
    }
    void withdraw()
    {
        cout<<"Enter the amount to be withdrawn."<<endl;
        cin>>w;
        if(w>=min)
        {
            cout<<"Withdrawal amount exceeds the minimum balance."<<endl;
        }
        else
        {
            cout<<"Withdrawal Possible."<<endl;
            bal=bal-w;
        }
    }
    void display()
    {
        cout<<"MINIMUM BALANCE: "<<min<<endl;
        cout<<"BALANCE: "<<bal<<endl;
    }
};
class current: public account
{
    float dep, over, w1;
    public:
    void deposit()
    {
        cout<<"Enter the amount to be deposited."<<endl;
        cin>>dep;
        bal=bal+dep;
    }
    void withdraw()
    {
        cout<<"Enter the amount to be withdrawn."<<endl;
        cin>>w1;
        if(w1>bal)
        {
            over=w1-bal;
        }
        else
        {
            bal=bal-w1;
            over=0;
        }
    }
    void display()
    {
        cout<<"OVERDUE AMOUNT: "<<over<<endl;
        cout<<"BALANCE: "<<bal<<endl;
    }
};
int main()
{
    account a;
    a.input();
    a.display();
    savings s;
    s.input();
    s.withdraw();
    s.display();
    current c;
    c.deposit();
    c.withdraw();
    c.display();
    return 0;
}