#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    fstream file;
    file.open("Text.txt",ios::out);
    if(!file)
    {
       cout<<"Error in creating file!!!";
       return 0;
    }
    cout<<"File created successfully.";
    file.close();
    file.open("Text.text");
    char ch;
    while(file)
    {
        file.get(ch);
        cout<<ch;
    }
    return 0;
}