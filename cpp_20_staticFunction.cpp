/*
1. What is static Funtion ?
=> when be define function with static keyword before the function definiton, it is called as static function. We can access static function without objects as well (optional) using scope resolution operator :: 
2. Why we use static function and How to access static function ?
=> Static functio is used to store/access all static variable at one place. it is independen of any objects of the class

*/

#include<iostream>
using namespace std;
class Name{
    static int id;
    string name;

    public:
        void setName(){
            cout<<"Enter Your Name \n";
            getline(cin,name);
            id++;
        }
        static void getName(){
            cout<<"Total number is : "<<id<<endl;
        }
};

int Name :: id;
int main(){
    Name soham , rohan;
    soham.setName();
    Name::getName();
    rohan.setName();
    Name::getName();
    return 0;
}