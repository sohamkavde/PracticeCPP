/*
1. What is data type?
=> Data type is a type of data. Confused wait !
--- int ans = 5;
as the above code ans is consist of integer type data i.e. ans can hold only integer value.

2. Types of data type?
=> There are three types of data types.
   Predefine data , User define data, Derived data

3. Explain each data type with examples

=> Predefine Data Type: It is data type which is provided by C++ itself.
Some of them are following-
int,float,char,doubl,boolean

=> Derived Data Type:- It is data type which is created using predefine data types.
Some of them are following-
Struture,Union,Enum

=> User Define Data type:- It is data type which is create by user to perform multiple operations
Some of them are following-
Array,Function,Pointer
*/

#include <iostream>
using namespace std;
int main()
{
   int a = 1;
   float b = 1.45;
   char c = 'c';
   double d = 1.34;
   bool e = false; // false equls to 0 and true equls to 1

   cout<<"The value of integer a is :"<<a<<endl;
   cout<<"The value of fload b is :"<<b<<endl;
   cout<<"The value of char c is :"<<c<<endl;
   cout<<"The value of double d is :"<<d<<endl;
   cout<<"The value of bool e is :"<<e<<endl;
   
   cout<<"\nSize of all data types are:\n\n";
   cout<<"The size of integer a is :"<<sizeof(a)<<endl;
   cout<<"The size of fload b is :"<<sizeof(b)<<endl;
   cout<<"The size of char c is :"<<sizeof(c)<<endl;
   cout<<"The size of double d is :"<<sizeof(d)<<endl;
   cout<<"The size of bool e is :"<<sizeof(e)<<endl;



   return 0;
}
