/*
What is Abstraction ?
=> Abstraction is method to hide unneccessary information from the world/users.
There are two ways to implement Abstraction.
1 Class => We have access specifier which help to hide unneccessary data member and member function from the users. like where we store data In oracle or mysqli, no one knows
2 Header files => When we use pow() function from <math.h> header file we simply pass the value/arguments. We don't know the algorithms behind the pow funcion.
*/

#include <iostream>
// Abstraction using Header files
#include<math.h>
using namespace std;


//Abstraction using class
class Data{
    private:
        int a,b; // a and b is unknown for outside world or unknown for the object (that created using Data class). They don't know how many variable are there in private specifier.
        // That object can be set  value with help of setdatax() and setdatay() function or likewise functions for manipulation of data.
    
    public:
        void setdatax(int x){
            a = x; // this function sets value of a but user don't know  that this is variable a or there is other variable in the class
        }
        void getdatax(){
            cout<<a<<endl;
        }

        void setdatay(int y){
            b = y;// this function sets value of b but user don't know  that this is variable a or there is other variable in the class
        }

        void getdatay();
};

void Data :: getdatay(){
    cout<<b<<endl;
}



int main()
{

    Data d;
    d.setdatax(122);
    d.getdatax();

    d.setdatay(124);
    d.getdatay();

    int a;
    cout<<"Please Enter Value \n";
    cin>>a;
    int ans = pow(a,2);
    cout<<ans<<endl;
    return 0;
}