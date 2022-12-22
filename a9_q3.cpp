#include <iostream>
using namespace std;
template <class T>
class Array
{
    T arr[10];
    public:
    void getData()
    {
        int i;
        for(i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    }
    void sort()
    {
        int i;T temp;
        for(i=0;i<10;i++)
        {
            for(int j=i+1;j<11;j++)
            {
                if(arr[j]<arr[i])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        display();
    }
    void display()
    {
        for(int i=0;i<10;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Array<int>obj1;
    Array<float>obj2;
    obj1.getData();
    obj1.sort();
    obj2.getData();
    obj2.sort();
    return 0;
}
