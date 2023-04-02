/*
What is Inheritance ?
=> Inheritance is concept of reusability where we inherite properties of parent class or base class to use their properties in child class or derived class.

Why we use Inheritance ?
=> It help to make our code clean
=> It makes our code to follow dry principle.
=> We don't need to write function if that function is already exist in base class.


Whar are the type Inheritance ?
There are following types of Inheritance in CPP

1 Single level Inheritance
=> One base class and One derived class

2 Multi level Inheritance
=> One base class , One derived class from base class and One ChildDerived class from derived class (follow chainging)

3 Multiple Inheritance
=> Two or more parent class and one derived class

4 Hierarchical Inheritance
=> one parent class and Multiple child class


5 Hybrid Inheritance
=> Combination of Multi level , Multiple , Hybrid Inheritance. According to our need. 

Write code for inheritance ?

*/

#include <iostream>
using namespace std;

class Base{
    public:
        int a ,b;

        int sum(int x,int y){
            return x+y;
        }
};

// Single level Inheritance
class Derived : public Base{
    public:
        int Minus(){
            return a-b; // a and b is not define in this class but it can be used because it is define in Base class and we are inherite in Derived class
        }
        int multiply(int x,int y){
            return  x*y;
        }
};


// Multi level Inheritance Base -> Derived  -> ChildDerived
class ChildDerived : public Derived{
    public:
        int divide(){
            return (a/b);
        }
};

// Multiple Inheritance
class Father{
    public:
        int a;
        void say(){
            cout<<"I am Father \n";
        }

        void addMoney(int x){
            a = x;
            cout<<x<<endl;
        }
};

class Mother{
    public: 
        void say(){
            cout<<"I am  Mother \n";
        }

        void SaveMoney(int x){
            cout<<x<<endl;
        }
};

class child : public Father , public Mother{
    public: 
        void say(){
            cout<<"I am  Child \n";
        }

        void SpendMoney(int x){
            a -=x;
            cout<<a<<endl;
        }
};






// Hierarchical Inheritance
// Person is base class and by this class Soham and Rohan class is derived 
// Or Two class (soham and rohan ) have one parent class Person.
// Soham and rohan can use every property of Person class but they can't use property of each other. Because they  are saperate from each other.
class Person{
    public:
        int age;
        int salary;
    
        void say(){
            cout<<"Hi I am Person a parent class"<<endl;
        }
        void mulitpleOfAge(){
            cout<< age*salary<<endl;
        }
};


class Soham : public Person{
    public:
        void say(){
            cout<<"Hello I am soham \n";
        }
};


class Rohan : public Person{
    public:
        void say(){
            cout<<"Hi I am Rohan \n";
        }
};


// Hybrid Inheritance - Presenting by using above Hierrarchical Inheritance and multi level Inheritance. I am inheriting Soham to sonu. So Sonu will be derived class of Soham , Soham will be derived class of Person. Hence it will act as multi level Inheritance and Soham and Rohan is Inherited from Person also. So it is acting as Hierarchical Inheritance as well.


// Sonu can access properties of both Soham and Person
class Sonu: public Soham{
    public:
        void say(){
            cout<<"Hello I am Sonu \n";
        }
};
int main()
{
   /* Derived d;
    d.a = 1;
    d.b = 3;
    cout<<d.Minus()<<endl;// self class function
    cout<<d.sum(2,4)<<endl; // Base class functio By referrence of Derived class we can use sum function because of inheritance
    cout<<d.multiply(2,4)<<endl; // self class function

    // Multi level
    ChildDerived cd; // this class can access each and every member of both derived and Base class because their all members are public
    cd.a = 14;
    cd.b = 7;
    cout<<cd.divide()<<endl; // self class function
    cout<<cd.multiply(4,2)<<endl;
    */
    /*
     // Multiple Inheritance
    Father f;
    f.say(); 
    f.addMoney(10000);
    
    Mother m;
    m.say();
    m.SaveMoney(4000);

    child c; // this can be accessed data from from both Father and Mother class but father and mother can't access data from each other because they are not linked 
    c.say(); // function from child class
    c.addMoney(10000);// function from father class
    c.SaveMoney(9990); // function from Mother class

    c.SpendMoney(10); // function from child class
    */


    /* // Hierarchical Inheritance
    Person p;
    p.age = 4;
    p.salary = 60000;
    // I want to increase salary according to multiple of age.
    p.say();
    p.mulitpleOfAge();

    Soham s;
    s.age = 18;
    s.salary = 100000;
    s.say();
    s.mulitpleOfAge();

    Rohan r;
    r.age =2;
    r.salary = 1670000;
    r.say();
    r.mulitpleOfAge();
    */


    // Hybrid Inheritance
    Sonu sd;
    sd.say();
    sd.age = 23;
    sd.salary = 1000000;
    sd.mulitpleOfAge();




    return 0;
}