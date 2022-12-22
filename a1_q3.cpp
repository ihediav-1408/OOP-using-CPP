#include <iostream>
using namespace std;
struct employee
{
    char name[20];
    int id;
    int age;
    double salary;
};

double salary(double s)
{
    double da, hra, gs;
    da = 0.8*s;
    hra = 0.1*s;
    gs = da + hra + s;
    return gs;
}

int main()
{
    int i, n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    struct employee e[n], *emp;
    cout<<"Enter details of the employee"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<"Employee "<<i+1<<":"<<endl;
        cout<<"Name: ";
        cin>>e[i].name;
        cout<<"ID: ";
        cin>>e[i].id;
        cout<<"Age: ";
        cin>>e[i].age;
        cout<<"Basic Salary: ";
        cin>>e[i].salary;
    }
    cout<<"EMPLOYEE DETAILS"<<endl;
    for (i = 0; i < n; i++)
    {
        emp = &e[i];
        cout<<"Employee "<<i+1<<":"<<endl;
        cout<<"Name: "<<e[i].name<<endl;
        cout<<"ID: "<<e[i].id<<endl;
        cout<<"Age: "<<e[i].age<<endl;
        cout<<"Basic Salary: "<<e[i].salary<<endl;
        cout<<"Gross Salary: "<<salary(emp->salary)<<endl;
    }
    cout<<endl;
    return 0;
}