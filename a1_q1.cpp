#include <iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float m1,m2,m3,m4,m5;
};
int main()
{
    student s;
    cout<<"Enter name of the student.";
    cin>>s.name;
    cout<<"Enter roll no. of the student.";
    cin>>s.roll;
    cout<<"Enter marks of the student in 5 subjects.";
    cin>>s.m1>>s.m2>>s.m3>>s.m4>>s.m5;
    cout<<"STUDENT INFORMATION:"<<endl;
    cout<<"Name: "<<s.name<<endl<<"Roll No.: "<<s.roll<<endl<<"Marks: "<<s.m1<<" "<<s.m2<<" "<<s.m3<<" "<<s.m4<<" "<<s.m5;
    return 0;
}