/*
1. What is function prototype ?
=> function prototype is a way to declare function before main() and write definition after main()
2. Why we use function protoytype Or where we define function prototype?
=>Some time we need to define fuction after main() function to make code clear.
*/

#include <iostream>
using namespace std;

int increateValue(int);// function prototype
void g();
void increateValueWithAddress(int&);

int main()
{
    int age = 51;
    int a = increateValue(age); // a = 52 and age = 51
    cout<<"After one year my age would be :"<<a<<endl;
    increateValueWithAddress(age);// age++
    cout<<"After one year my age would be :"<<age<<endl; // age = 52
    g(); //Hello world
    return 0;
}

int increateValue(int age){
    age++;
  return  age;
}
void g(){
    cout<<"Hello Soham\n";
}
void increateValueWithAddress(int &a){
    a++;
}