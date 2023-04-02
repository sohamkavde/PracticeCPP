/*
1. What is operator precedence Or How to define which operator will resolve first ?
=> Operator precedence is rule for the operand and operators.It help to understand which expression will resolved first. It is not follow BODMAS rule always.

To understand which expression resolve first there is table for that but for making it easy use () braces which has always higher precendence.

There is one Name "Associativity".
Some time precendence for the operand is same at time Associativity help to find which expression resolved first.
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 5;
    // int c = a*b/1*a-b; // Learning precendence is complex so use () brackets
    int c = (a*b)/(1*(a+b)); // return 2.5 for int 2 
    // Now it is clear that firstly (a*b) will resolved than 1*(a-b) = (1*a-1*b) than a-b in the last (a*b)/(a-b)
    int d = (a*b)/1*(a+b); // return 250
    /*
    1 a*b = k (5*5)
    2 k/1 = k (25/1)
    3. (k)*(a+b) // a+b = n 5+5=10
    4. k*n = result 25*10=250
    */
 
    cout<<c;
    return 0;
}