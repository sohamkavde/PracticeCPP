/*
1. What is class ?
=> General defition of class : Class is blueprint for object. Which hold data member and member function.
2. Why we use class when we have structure, Union?
=> In structure and union, Every elements/variables is public. if you want to protect/ make private data members we need to use class3. What is object ?
4. What Syntax of object creation and Explain each keyword of object?
=> Object is a entity/real world entity which the help of object we can access class variable

5. what is access specifier Or explain private , protected , public keyword in class
=> Access Specifire are used to make data member/or member function private,public i.e. by Access specifier we can make elements public so that they can be easily accesseable by objects
Important Note : Bydefault every member of class is private
*/
#include <iostream>
using namespace std;


class Employee{
    private:
        int age;    
    public:
        string address;
        void setName(int age){
            this->age = age;
        }
        int getName(){
            return this->age;
        }

};

int main()
{
    Employee soham;
    soham.address = "I am from waraseoni";

    soham.setName(24);
    
    cout<<"My age is :"<<soham.getName()<<" "<<soham.address;    

    return 0;
}
