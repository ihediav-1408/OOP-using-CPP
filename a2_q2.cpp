#include <iostream>

using namespace std;

class student
{
    private:
    string name;
    int roll;
    int total;
    public:
    void input()
    {
        cout<<"Enter name."<<endl;
        cin>>name;
        cout<<"Enter roll number."<<endl;
        cin>>roll;
        cout<<"Enter total marks."<<endl;
        cin>>total;
    }
    void print()
    {
        cout<<"STUDENT DETAILS"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll NUmber: "<<roll<<endl;
        cout<<"Total Marks: "<<total<<endl;
    }
};
int main()
{
    int i,n;
    cout<<"Enter the number of students.";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter details of student"<<i+1<<endl;
        s[i].input();
    }
    for(i=0;i<n;i++)
    {
        s[i].print();
    }
    return 0;
}