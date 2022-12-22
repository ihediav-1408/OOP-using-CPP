#include <iostream>
using namespace std;
class student
{
    private:
    char *name;
    int age;
    int roll;
    float avg;
    public:
    student()
    {
        cout<<"Enter details of the student."<<endl;
        cout<<"Enter name."<<endl;
        name=new char;
        cin>>name;
        cout<<"Enter age."<<endl;
        cin>>age;
        cout<<"Enter roll number."<<endl;
        cin>>roll;
        cout<<"Enter average marks."<<endl;
        cin>>avg;
    }
    student(student &t)
    {
        name=t.name;
        cout<<"Name: "<<name<<endl;
        age=t.age;
        cout<<"Age: "<<age<<endl;
        roll=t.roll;
        cout<<"Roll No.: "<<roll<<endl;
        avg=t.avg;
        cout<<"Average Marks: "<<avg<<endl;
    }
    friend void compare(student &a, student &b);
};
void compare(student &a, student &b)
    {
        if(a.avg>b.avg)
        {
            cout<<a.name<<" is the highest scorer.";
        }
        else if(b.avg>a.avg)
        {
            cout<<b.name<<" is the highest scorer.";
        }
        else
        {
            cout<<"Both are equal scorers.";
        }
    }
int main()
{
    student x;
    student y;
    compare(x,y);
    return 0;
}