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
    int m[5];
    public:
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
int main()
{
    test t;
    t.input1();
    t.output1();
    return 0;
}