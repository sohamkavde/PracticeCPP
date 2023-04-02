/*
1. What is pointer ?
=> pointer is an data type/ variable to hold address of other data type/variables
2. Syntaxt for pointer ?
=> data type * = &reference variable; // *(value at) is called deference variable and & (address of) reference variable

3. Why we use pointer ?
=> pointer is used in dynamic programming in dynamic memory allocation. it is used to save memory


4. Difference between pointer and referrence variable ?
=> pointet is used to hold address of data and reference variable is used to create other variable which point to address of previosly define variable

*/

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *b = &a; // b is pointer
    cout<<" The value of a and *b is same :"<<a<<" "<<*b<<endl;
    cout<<"The value of &a and b is same : "<<&a<<" "<<b<<" Both pointing to same memory address\n";
    a++;// 5 become 6
    (*b)++; // 6 become 7  @imp
    // *b++; //this will first resolve b++ than *b think about operator precendence 
    cout<<"a: "<<a<<" b :"<<*b<<endl; // a and b = 7

    // pointer to pointer
    int **p = &b;// first * hold value and after that *p hold or ***k hold addrerss
    cout<<" The value of a : "<<a<<" b :"<<*b<<" p:"<<**p<<" is same\n";
    cout<<" The adress of a : "<<&a<<" b : "<< b <<" p :"<<*p<<" is same\n";


    return 0;

}
