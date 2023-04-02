/*
What is Polymorphism?
=> Polymorphism means "many forms", and it occurs when we have  many classess that are related to each other by inheritance.
Example: Base class - Animal, Derived class - Cat and dog
Cat and dog are derived from Animal class or we can say They (cat and dog) are forms of Animal
*/

#include <iostream>
using namespace std;

class Animal{
    public:
        void say(){
            cout<<"Hi I am Animal \n";
        }

        void food(){
            cout<<"Animal likes food \n";
        }
};

class Cat : public Animal{
    public:
        void say(){
            cout<<"Hi I am Cat \n";
        }

        void CatFood(){
            cout<<"Cat likes milk \n";
        }
};


class Dog : public Animal{
    public:
        void say(){
            cout<<"Hi I am good \n";
        }

        void dogFood(){
            cout<<"Dog likes food \n";
        }
};


int main()
{

    Animal a; // a has only its property
    a.say();// it will call its say function
    a.food();

    Cat c; // Cat has extra method, inherited from Animal
    c.say(); // It has its own say() function So It has override Base class say() function
    c.food();
    c.CatFood();

    Dog d;// Dog has extra method, inherited from Animal
    d.say();// It has its own say() function So It has override Base class say() function
    d.food();
    d.dogFood();

    return 0;
}