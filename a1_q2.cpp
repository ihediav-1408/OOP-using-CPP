#include <iostream>
using namespace std;
struct student{
	char name[30];
	int roll;
	int m1,m2,m3,m4,m5;
	int total; 
	float per;
}; 
//a.   Find  total  marks  and  percentage  of  all  n  students.
void tot(struct student s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	    s[i].total=s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
	    s[i].per=s[i].total/5;
	}
}
//b.   Display  details  of  a  student  with  a  given  roll  number.
void disp1(struct student s[],int n,int rolln)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(rolln==s[i].roll)
		{
			cout<<"Name: "<<s[i].name;
			cout<<"Roll number: "<<s[i].roll;
			cout<<"Marks ";
		    cout<<s[i].m1<<" "<<s[i].m2<<" "<<s[i].m3<<" "<<s[i].m4<<" "<<s[i].m5;
			cout<<"Total marks: "<<s[i].total;
			cout<<"Percentage: "<<s[i].per;
			cout<<endl;
			break;
		}
	}
}
//c.   Display  the  details  for  all  the  students  having  percentage  in  a  given range.
void disp2(struct student s[],int n,float per1,float per2 )
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s[i].per>=per1 && s[i].per<=per2)
		{
			cout<<"Name: "<<s[i].name;
			cout<<"Roll number: "<<s[i].roll;
			cout<<"Marks ";
		    cout<<s[i].m1<<" "<<s[i].m2<<" "<<s[i].m3<<" "<<s[i].m4<<" "<<s[i].m5;
			cout<<"Total marks: "<<s[i].total;
			cout<<"Percentage: "<<s[i].per;
			cout<<endl;
		}
	}
}
//d.   Sort  the  array  in  ascending order of marks.
void  sort(struct student s[],int n)
{
	int i,j;
	for (i=0; i < n-1; i++)
    {
		for (j = 0; j < n-i-1; j++)
		{
			if (s[j].total > s[j+1].total)
			{
				struct student temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<"Name: "<<s[i].name;
		cout<<"Roll number: "<<s[i].roll;
		cout<<"Marks ";
		cout<<s[i].m1<<" "<<s[i].m2<<" "<<s[i].m3<<" "<<s[i].m4<<" "<<s[i].m5;
		cout<<"Total: "<<s[i].total;
		cout<<"Percentage: "<<s[i].per;
		cout<<endl;
	}
}
int main()
{
	struct student s[100];
	int n,i;
	int rolln;
	float per1;
	float per2;
	cout<<"Enter the number of students: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the student's name: ";
		cin>>s[i].name;
		cout<<"Enter the student's roll number: ";
		cin>>s[i].roll;
		cout<<"Enter the student's mark: ";
		cin>>s[i].m1>>s[i].m2>>s[i].m3>>s[i].m4>>s[i].m5;
		cout<<endl;
	}
	tot(s,n);
	cout<<"Enter the student's roll number to search: ";
	cin>>rolln;
	disp1(s,n,rolln);
	cout<<"Enter the student's percentage 1 to search: ";
	cin>>per1;
	cout<<"Enter the student's percentage 2 to search: ";
	cin>>per2;
	disp2(s,n,per1,per2);
	cout<<"Sorting  the  array  in  ascending order of marks. ";
	sort(s,n);
	cout<<endl;
	return 0;
}