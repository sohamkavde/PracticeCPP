/*
1. How to pass object as a function argument ? Explain with example.
=> There is no catch it is same as sending argument in function call
*/

#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
        void setNumber(int,int);
        void getNumber(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
        void setDataforObject(Complex a1,Complex a2){
            cout<<"-------------\n";
            a = a1.a+a2.a;
            b = a1.b+a2.b;
        }
};

void Complex :: setNumber(int a ,int b){
    this->a = a;
    this->b = b;
}


int main(){
    Complex c1,c2,c3;
    c1.setNumber(1,2);
    c1.getNumber();

    c2.setNumber(2,4);
    c2.getNumber();

    c3.setDataforObject(c1,c2); // sending object c1 and c2 as object
    c3.getNumber();
    return 0;
}