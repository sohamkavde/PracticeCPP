/*
1. What is typedef ?
=> With  typedef we can give name (Altername name) to structure and union and other datatype as well
2. What are use of typedef Or implement typedef with structure and union ?
=>Below is the answer
3. Can we use string data type in union and structure?
In case of structure we can use string data  type but  for union we can not use string data type instead of this array of char type can be used.
*/

#include <iostream>
using namespace std;

typedef struct employee
{
    int age;
    string work;
} ep; // ep is alternate name for employee 


typedef union earn
{
    int age;
    int money; //4
    // string work; //1 string is not takes in union
} m;

int main()
{
    ep soham;
    soham.age = 5;
    soham.work = "soham";

    cout<<"I am :"<<soham.work<<" and my age is : "<<soham.age<<endl;

    m m1;
    // m1.age = 55;  use only one variable of union else get garbage value
    m1.money = 3333;
    cout<<"The money I have is :"<<m1.money;
    

   

    return 0;
}
