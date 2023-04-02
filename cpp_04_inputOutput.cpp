/*
How to take inputs in C++?
=> using cin keyword
Using cin keyword an Integer value can be taken
using cin.getline keywork a string value  can be taken

How to Output the result or variable?
cout is used to output the value
*/

// #include<bits/stdc++.h>
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int a ;
    cout<<"Please Enter the value of a\n";
    cin>>a; // get value 
    cout<<"The value of a is: "<<a<<endl;
    char b;
    cout<<"What is your first character of your name ?\n";
    cin>>b;
    cout<<"b :"<<b<<endl;
    cin.ignore(256, '\n'); // this is importantline here otherwise below getline will not goint to work
    string c;
    cout<<"Enter your full name \n";
    getline(cin,c);
    cout<<c;
    return 0;
}
