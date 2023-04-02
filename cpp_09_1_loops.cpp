/*
1. What is loops ?
=> loop is used to iterate some code
2. Define different type loops- for Loop, while Loop , do while Loop ,For each loop .
3. break and continue statements
4. switch case statement and explain default keyword.
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout<<"for loop\n";
    for (int i = 0; i < a; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"While loop \n";

    while(a--){
        cout<<a<<" ";
    }
    cout<<"\ndo while loop\n";
    a = 1;
    do{
        cout<<a<<" ";
    }while(a--);
    
    cout<<"\nSwitch Case\n";
    int k = 4;
    switch (k)
    {
    case 3:
        cout<<"The value is 3";
        break;
    case 5:
        cout<<"The value is 5";
        break;    
    default:
        cout<<"No value";
        break;
    }
    cout<<endl;

    return 0;
}