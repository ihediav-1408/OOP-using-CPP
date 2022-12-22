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
class sports
{
    public:
    int sp;
    void input2()
    {
        cout<<"Enter the marks in sports activity.";
        cin>>sp;
    }
    void output2()
    {
        cout<<"\nSports Marks: "<<sp;
    }
};
class result: public test,sports
{
    int tot=0;
    float per=0.0;
    public:
    void calculate()
    {
        input1();
        input2();
        for(int i=0;i<5;i++)
        {
            tot+=m[i];
        }
        tot=tot+sp;
        per=tot/6;
    }
    void output3()
    {
        output1();
        output2();
        cout<<"\nTotal Marks: "<<tot;
        cout<<"\nPercentage: "<<per;
    }
};
int main()
{
    result r;
    r.calculate();
    r.output3();
    return 0;
}