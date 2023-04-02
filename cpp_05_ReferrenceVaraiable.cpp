/*
1. What is referrence variable ?
Reference variable is an alternative name of the privouly created variable which point to same  memory address.
2. What are use of referrence variable ?

=> Mostly we use it to recieve as function parameter. Suppose we create a object and object size is very big in that situation reference variable is accept in funcion parameter.

3. where we use this referrence variable.Explain with one example ? OR What if We take function parameter as normal parameter not reference parameter?

=> For normal parameter it create new copy of argument (variable or objects).and the object size could be big in that case it will take too much time to create and take another extra space unneccessary.
*/

#include <iostream>
using namespace std;

void increaseValue(int &a) // I can name anything to the variable or same name as well
{
    a++;    
}

void notincreaseValue(int a){
    a++;
}
int main()
{
    int a = 5;
    int& b = a; // reference variable is created using & operator. & it should be added after data type and before variable name
    b++; // b is increase by 1 but it will also change the value of a
    cout<<"The value of a is increase by 1: "<<a<<endl;

    increaseValue(a);
    cout<<"The value of a is again increase because I am accepting it as  a  reference variable in increase function :"<<a<<endl;

    notincreaseValue(a);
    cout<<"The value of a is not increased because I am not accepting it as  a  reference variable in not increase function :"<<a<<endl;

    return 0;
}