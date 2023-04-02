/*
 Define function outside the class as function is part of class i.e. instead of defining function inside the class you are going to difine function outside class.
*/
#include <iostream>
using namespace std;


class Employee{
    private:
        int age;    
    public:
        string address;       
        void setName(int age);
        int getName();
};

// function outside the class
void Employee :: setName(int age){
            this->age = age;
}
int Employee :: getName(){
          return  this->age;
}
int main()
{
    Employee soham;
    soham.address = "I am from waraseoni";

    soham.setName(24);
    
    cout<<"My age is :"<<soham.getName()<<" "<<soham.address;    

    return 0;
}
