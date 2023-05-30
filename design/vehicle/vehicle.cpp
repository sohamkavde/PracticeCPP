#include <iostream>
using namespace std;

class Vehicle
{
    string color;
    string tyre;

public:
    Vehicle(string color, string tyre)
    {
        this->color = color;
        this->tyre = tyre;
    }

    string getColor()
    {
        return color;
    }
    string getTyre()
    {
        return tyre;
    }
    virtual void display()
    {
        cout << "My Car color is " << getColor() << " and it has " << getTyre() << "Tyre";
    }
};

class Car : public Vehicle
{

public:
    Car(string color, string tyre) : Vehicle(color, tyre)
    {
    }

    void display()
    {
        cout << "My Car color is " << getColor() << " and it has " << getTyre() << " Tyre";
    }
};

class Motorcycle : public Vehicle
{

public:
    Motorcycle(string color, string tyre) : Vehicle(color, tyre)
    {
    }

    void display()
    {
        cout << "My Motorcycle color is " << getColor() << " and it has " << getTyre() << " Tyre";
    }
};

class Truck : public Vehicle
{

public:
    Truck(string color, string tyre) : Vehicle(color, tyre)
    {
    }

    void display()
    {
        cout << "My Truck color is " << getColor() << " and it has " << getTyre() << " Tyre";
    }
};

int main()
{
    Car *car = new Car("Red", "4");
    Motorcycle *motorcycle = new Motorcycle("blue", "2");
    Truck *truck = new Truck("Voilet", "8");

    car->display();
    cout<<endl;
    motorcycle->display();
    cout<<endl;
    truck->display();
    cout<<endl;

    delete car;
    delete motorcycle;
    delete truck;

    return 0;
}