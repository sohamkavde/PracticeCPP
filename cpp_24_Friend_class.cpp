/*
1. What is friend class ?
=> Friend class is an external class which can access all private members of other class which Prototype name of the friend class.
2. Why we create friend class ?
=> Declaring thousands of function as a friend function of class for another class is not good solution instead of doing this we can make entire class as friend of other.

3. Write code for friend class.
*/
#include <iostream>
using namespace std;

class Complex;

class Calculator{
    public:
        int getSumOfRealNumber(Complex ,Complex);
        int getSumOfComplexNumber(Complex ,Complex);
};


class Complex{
    private:
        int a,b;
    // create friend function of another class Calculator
    // friend int Calculator :: getSumOfRealNumber(Complex,Complex);
    // friend int Calculator :: getSumOfComplexNumber(Complex,Complex);

    // Instead of making thousand of function as above I declare class as friend
    friend class Calculator;
    public:
       void setNumber(int x,int y){
            a=x;
            b=y;
       }

       void getNumber(){
            cout<<a<<" + "<<b<<"i"<<endl;
       }
};

int Calculator :: getSumOfRealNumber(Complex o1,Complex o2){
    return o1.a + o2.a;
}

int Calculator :: getSumOfComplexNumber(Complex o1,Complex o2){
        return o1.b + o2.b;
}
int main()
{
    Complex c1 , c2;
    c1.setNumber(1,2);
    c1.getNumber();
    c2.setNumber(4,6);
    c2.getNumber();

    Calculator calc;
    int res = calc.getSumOfRealNumber(c1,c2);
    cout<<"The sum of real number of c1 and c2 is :"<<res<<endl;
    int comp = calc.getSumOfComplexNumber(c1,c2);
    cout<<"The sum of real number of c1 and c2 is :"<<comp<<endl;

    return 0;
}