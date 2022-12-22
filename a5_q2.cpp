#include <iostream>
using namespace std;
class student
{
    string name;
    int rolln;
    int age;
    public:
    void input()
    {
        cout<<"Enter the name of the student.";
        cin>>name;
        cout<<"Enter the roll number of the student.";
        cin>>rolln;
        cout<<"Enter the age of the student.";
        cin>>age;
    }
    void output()
    {
        cout<<"\nName: "<<name;
        cout<<"\nRoll No.: "<<rolln;
        cout<<"\nAge: "<<age;
    }
};
class test: public student
{
    public:
    int m[5];
    void input1()
    {
        input();
        cout<<"Enter the marks of the student in 5 subjects.";
        for(int i=0;i<5;i++)
        {
            cin>>m[i];
        }
    }
    void output1()
    {
        output();
        cout<<"\nMarks: ";
        for(int i=0;i<5;i++)
        {
            cout<<m[i]<<"\t";
        }
    }
};
class result: public test
{
    int tot=0;
    float per=0.0;
    public:
    void calculate()
    {
        input1();
        for(int i=0;i<5;i++)
        {
            tot+=m[i];
        }
        per=tot/5;
    }
    void output2()
    {
        output1();
        cout<<"\nTotal Marks: "<<tot;
        cout<<"\nPercentage: "<<per;
    }
};
int main()
{
    result r;
    r.calculate();
    r.output2();
    return 0;
}