#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream st;
    st.open("Text.doc",ios::out);
    if(!st)
    {
        cout<<"Creation failed.";
    }
    else
    {
        cout<<"Succesful";
    }
    st.close();
}