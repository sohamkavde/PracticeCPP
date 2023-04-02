/*
1. What is friend function ?
=>Friend function refer to function which can be accessed to private member of the class, even if that function is not a member function of the class.
=> Prototype declaration is needed in class but it will not make function as member function of the class.
2. write code to  define friend function.
*/

#include <iostream>
using namespace std;

class Complex{
    int a,b;

    public:
        friend Complex newComplexNumber(Complex , Complex);
        void setNumber(int x,int y){
            a = x;
            b = y;
        }

        void getNumber(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};


// newComplexNumber is external function for Complex class but it can access private member of the Complex class because we declare as friend function in Complex class.
Complex newComplexNumber(Complex o1,Complex o2){
    Complex a1;
    a1.a = o1.a+o2.a;
    a1.b = o1.b+o2.b;
    return a1;
}


int main()
{
    Complex c1,c2,sum;

    c1.setNumber(1,3);
    c1.getNumber();

    c2.setNumber(2,5);
    c2.getNumber(); 
    cout<<"---------\n";
    sum= newComplexNumber(c1,c2);   
    sum.getNumber();

    return 0;
}