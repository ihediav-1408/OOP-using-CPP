#include <iostream>
using namespace std;
class employee
{
    string name;
    int id;
    float salary;
    public:
    void input()
    {
        cout<<"Enter the name of the employee."<<endl;
        cin>>name;
        cout<<"Enter the ID of the employee."<<endl;
        cin>>id;
        cout<<"Enter the basic salary of the employee."<<endl;
        cin>>salary;
    }
    virtual void sal()
    {
        cout<<"Name of the employee: "<<name;
        cout<<"ID of the employee: "<<id;
        cout<<"Basic Salary of the employee: "<<salary;
    }
};
class regular: public employee
{
    float da, hra, sa, ts;
    public:
    void sal()
    {
        cout<<"Enter salary."<<endl;
        cin>>sa;
        da=0.5*sa;
        hra=0.8*sa;
        ts=da+hra+sa;
        cout<<"The salary of a regular employee is: "<<ts;
    }
};
class part_time: public employee
{
    int h;
    float pay, gs;
    public:
    void sal()
    {
        cout<<"Enter the number of payable hours."<<endl;
        cin>>h;
        cout<<"Enter the pay per hour."<<endl;
        cin>>pay;
        gs=h*pay;
        cout<<"The salary of a part-time employee is: "<<gs;
    }
};
int main()
{
    employee e;
    e.input();
    e.sal();
    regular r;
    r.sal();
    part_time p;
    p.sal();
    return 0;
}