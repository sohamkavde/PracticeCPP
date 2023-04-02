/*
1. Explain static keyword ?
=> When a static data member is created, there is only a single copy of the data member which is shared between all the objects of the class. 

When you want to create a global variable which can be accessible by all objects, static variable should create. 

2. Diference between static data member and normal data member ?
=>A static member function can only access static data member, other static member functions and any other functions from outside the class.

=>Normal function call access both static and normal variabl but It is dependent to perticular objects
*/

#include<iostream>
using namespace std;

class Emp{
    private:
        static int a; // this a value will access one memory address and object which will create using Emp class can have that one memory access. Only one memeory address So when the object increase the value of a it will also show for other objects as well.
        int count;// Count has saparate copy for different objects
    public:       
        int getValueOfA(){
            return a;
        }

        void setValueOfCount(int val){
            count = val;
            a++;
        }
        int getValueOfCount(){
            return count;
        }

        static void occurenceOfA(){
            cout<<"The value of coun is :"<<a<<endl;
        }
};

int Emp::a; // It is imortant to initialise. By default value is 0

int main(){

    Emp soham,rohan;
    soham.setValueOfCount(1);
    cout<<"The value of soham's a is :"<<soham.getValueOfA()<<" and soham's count :"<<soham.getValueOfCount()<<endl;

    Emp :: occurenceOfA();

    rohan.setValueOfCount(1);

    cout<<"The value of rohan's a is :"<<rohan.getValueOfA()<<" and rohan's count :"<<rohan.getValueOfCount()<<endl;

    Emp :: occurenceOfA();
    return 0;

}