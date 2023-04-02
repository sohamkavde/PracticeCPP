/*
1. what is variable?
=> Variable is containere to hold different type of data.

2. what is use of variable?

int ans = 5;
In above code ans is variable which hold integer type data. Also a value 5 is assigned to it.


3. what is scope and based on scope define global and local variables?

Scope is area or block where a variable is accessible and the variable is accessible for that area/block region only.

There are two types variable scope - glogal scope and local scope
Global scope: When a variable is define out of curly braces {    } it can be accessed in the curly braces as well.
Local scope: When a variable is define inside of curly braces it can be accessed within the curly braces only.

*/
#include <iostream>
using namespace std;
int main()
{
    int a = 5; // a is define outside the curly braces hence it is Globla variable for below bracket.
    {
        int b = 6; // b is define inside the curly braces hence is it local variable for this bracket only. After this bracket b is inaccessible.
        cout<<a<<" "<<b<<"\n";
        a = a+1;// I can modify value of a in local scope as well
    }
    cout<<a<<endl;
    // cout<<b<<endl;// throw an error.

    return 0;
}
