//getline.cpp
//example of function getline()

#include<iostream>
using namespace std;

const int MAX =50;
char str1 [MAX];
char str2 [MAX];

int main();

{
    cout<<"Enter a string terminated by newline: "<<endl;
    cin.getline(str1, MAX);
    cout<<"Enter multiple string terminated by $"<<endl;
    cin.getline(str2, MAX, $);
    cout<<"String you entered are: "<<endl;
    cout<<"String 1: "<<str1<<endl;
    cout<<"String 2: "<<str2<<endl;

    return 0; 
}