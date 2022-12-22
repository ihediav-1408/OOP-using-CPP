#include <iostream>
using namespace std;
class number
{
    int n;
    public:
    void input()
    {
        cout<<"Enter a number.";
        cin>>n;
    }
    void square(number num);
    void cube(number num);
};
inline void number::square(number num)
{
    cout<<"The square of the number is "<<num.n*num.n<<endl;

}
inline void number::cube(number num)
{
    cout<<"The cube of the number is "<<num.n*num.n*num.n<<endl;
}
int main()
{
    number num;
    num.input();
    num.square(num);
    num.cube(num);
}