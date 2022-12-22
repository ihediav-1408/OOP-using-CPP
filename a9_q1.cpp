#include <iostream>
using namespace std;
template <class T>
void sort(T a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                T temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array.";
    cin>>n;
    int int_array[n];
    float float_array[n];
    cout<<"Enter integer array elements:"<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>int_array[i];
	}
	cout<<"Enter floating array elements:"<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>float_array[i];
	}
	sort(int_array,n);
	sort(float_array, n);
	cout<<"After sorting they are :"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<int_array[i]<<endl;
	}
	cout<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<float_array[i]<<endl;
	}
	return 0;
}