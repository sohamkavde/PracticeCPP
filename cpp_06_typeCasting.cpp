/*
1. What is type casting ?
=> Changing one data type variabl  to another data type is called typecasting.
2. What is the syntax of type casting. Write 2 way of syntax for type casting ?
=> first type is: int(variable_name);
=> second type is : (int)variabl_name;

3. Write code for every datatype?
=>Below is the code.
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    double b =5.1323;
   
    cout<<"The sizeof a is:"<<double(a)<<endl;
    cout<<"The sizeof a is:"<<(double)a<<endl;

    cout<<"The sizeof b is:"<<int(b)<<endl;
    cout<<"The sizeof b is:"<<(int)b<<endl;
    // To all values is same. So the typecast is done I am displaying size of the variable
    /*
        type    size
        int     4
        float   4
        double  8

    */
   cout<<"\n\nGet size\n";
    cout<<"The sizeof a is:"<<sizeof(double(a))<<endl;
    cout<<"The sizeof a is:"<<sizeof((double)a)<<endl;

    cout<<"The sizeof b is:"<<sizeof(int(b))<<endl;
    cout<<"The sizeof b is:"<<sizeof((int)b)<<endl;

    return 0;
}