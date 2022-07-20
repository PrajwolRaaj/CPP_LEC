//use_of_ignore.cpp
//program to show use of function ignore()

#include<iostream>
using namespace std;

int main()
{
    char str1 [20],str[20];
    cout<<"Enter first string: ";
    cin.get(str1. 20);
    cout<<"Enter second string ";
    cin.ignore();   //remove the newline left by get()
    cin.get(str2 , 20);
    cout<<"you entered: "<<endl;
    cout<<"String 1: "<<str1<<endl;
    cout<<"String 2: "<<str2<<endl;

    return 0;
}


