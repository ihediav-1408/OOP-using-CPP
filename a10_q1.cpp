#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    fstream file;
    file.open("Text.txt");
    char ch;
    while(file)
    {
        file.get(ch);
        cout<<ch;
    }
    return 0;
}