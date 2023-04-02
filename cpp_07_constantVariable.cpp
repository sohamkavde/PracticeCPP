/*
1. what is constant variable ?
=> Constant variable are the variable which has unchangeable variable. The value of variable can't be changed
2. Why should we use constant variable ?
=> To make variable unchangeable. Some data are only to read/show. We don't want that anyone would change the value of variable.
3. Syntax for constant variable ?

*/
#include <iostream>
using namespace std;

#define GlobalValue  5;

int main()
{
    const int a = 5; // first way to define constant
    // a = 56; // thrown error 
    const int arr[5] = {1,2,3,4,5};
    // arr[0] = 44; // error

    cout<<GlobalValue;
    


    return 0;
}