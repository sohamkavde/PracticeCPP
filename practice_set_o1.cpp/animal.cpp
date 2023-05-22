// Write a program with a class animal. Inside it define a name and an age variables, and set_value() function.Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra information (e.g. place of origin).

#include <iostream>
#include <string.h>
using namespace std;

class animal
{
protected:
    string name;
    int age;

public:
    void set_value(string n, int a)
    {
        name = n;
        age = a;
    }
};

class zebra : public animal
{
    string place;

public:
    void set(string vla)
    {
        place = vla;
    }
    void print_message()
    {
        cout << "Name: " << name << " age " << age << " place : " << place<<endl;
    }
};

class dolphin : public animal
{
    string place;

public:
    void set(string vla)
    {
        place = vla;
    }
    void print_message()
    {
        cout << "Name: " << name << " age " << age << " place : " << place;
    }
};

int main()
{
    string place1 = "africa";
    zebra z;
    z.set_value("Z1",23);
    z.set(place1);
    z.print_message();

    place1 = "Antarctica";
    dolphin d;
    d.set_value("D1",53);
    d.set(place1);
    d.print_message();

    return 0;
}