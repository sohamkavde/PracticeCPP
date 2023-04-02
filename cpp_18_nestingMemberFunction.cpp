/*
1. Nesting member function
*/

#include <iostream>
using namespace std;


class Empoleyee{
    private:
        int salary;
        void EnterDetails(){
            cout<<"Enter your salary :";
        }
    public:
        void setSalary(){
            EnterDetails(); // nested memeber function
            cin>>this->salary;
        }

        void getSalary(){
            cout<<"The salary is "<<this->salary<<endl;
        }

};


int main()
{
    Empoleyee soham;
    soham.setSalary();
    soham.getSalary();

    return 0;
}