/*
1. What is function ?
=> function is block of code which can be used for multiple  times for the same type of use.
2. What is function call ?
=> function call is syntex ex. function_name() , by which function can be invoked.
3. What is function definition ?
=> function definition is group of code/instruction where all calculation takes place
4. What is Arguments/Actual parameter and parameter/Formal parameter?

Function_name(paremeter/Formal parameter){

}

Function_name(Arguments/Actual parameter);


*/

#include <iostream>
using namespace std;
void increaseValue(int  &a){ // Parameter/Formal parameter
    a++;
}

void increaseValueWithPointer(int  *a){
    (*a)++;
}
int main()
{
    int a = 8;
    increaseValue(a); // a is Actual parameter/Arguments
    cout<<"the value of a is with & operator :"<<a<<endl;

    increaseValueWithPointer(&a);
    cout<<"the value of a is with & operator :"<<a<<endl;

    return 0;
}