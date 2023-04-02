/*
What is encapusulation?
=> Encapsulation is a process to hide data from outside the world. It bind data member and member function in a single unite or class
Example : There are finance , Sales , HR department and They have thier data in one unit which can be accessed by perticular that department person.No other person from other department can access the data of other department data.
*/

#include <iostream>
using namespace std;


// Finance class is binding data a (data member) and functions (setData and getData as member function)
class Finance{
    private:
        // declaring private members
        int b, a;

    public:
        // set and get data of private member
        void setData(int x){
            // accessing only a 
            a = x;
        }

        int getData(){
            return a;
        }
};

int main()
{
    Finance f1;
    f1.setData(11);
    cout<<f1.getData()<<endl;
    return 0;
}
