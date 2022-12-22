#include <iostream>

using namespace std;

class employee
{
    private:
    int id;
    string name;
    int age;
    float bs;
    public:
    int gs,da,hra;
    void input()
    {
        cout<<"Enter ID."<<endl;
        cin>>id;
        cout<<"Enter name."<<endl;
        cin>>name;
        cout<<"Enter age."<<endl;
        cin>>age;
        cout<<"Enter basic salary."<<endl;
        cin>>bs;
    }
    void compute()
    {
        da=0.8*bs;
        hra=0.1*bs;
        gs=bs+da+hra;
    }
    void print()
    {
        cout<<"EMPLOYEE DETAILS"<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Basic Salary: "<<bs<<endl;
        cout<<"Gross Salary: "<<gs<<endl;
    }
};
int main()
{
    int i,n;
    cout<<"Enter the number of employees.";
    cin>>n;
    employee e[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter deatails of employee"<<i+1<<endl;
        e[i].input();
    }
    for(i=0;i<n;i++)
    {
        e[i].compute();
    }
    for(i=0;i<n;i++)
    {
        e[i].print();
    }
    return 0;
}