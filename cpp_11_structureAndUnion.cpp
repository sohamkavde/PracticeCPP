/*
1. What is structure ?
=> Structure is derived data type which is used to store values of multiple datatype
2. What is union ?
3. What is difference between structure and uniou Or Calculate size of structure and union ?
*/

#include <iostream>
using namespace std;
struct Calc
{
    int a;
    char c;
};


union Calcu
{
    int a;
    char c;
};

int main()
{
    struct Calc c;
    c.a = 5;
    c.c = 'c';

    cout<<c.a<<" "<<c.c<<endl;
    cout<<"Union\n";
    // Union can use only one data structur
    union Calcu b;
    b.a = 5;
    // b.c = '3'; // it will give garbage value 51 to stop it we need to uese one variable of union only
    cout<<b.a<<" "; // 51 kaise
    // cout<<b.c<<"\n";


    return 0;
}