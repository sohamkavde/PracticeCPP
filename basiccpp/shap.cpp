// link of the website :https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/object-oriented_programming__oop_and_inheritance/exercises_oop.html
//Write a program that defines a shape class with a constructor that gives value to width and height. The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

#include <iostream>
using namespace std;

class Shape
{
protected:
    float width;
    float height;

public:
    void set_data(int w, int h)
    {
        this->width = w;
        this->height = h;
    }
};
class Triangle : public Shape
{
public:
    float area()
    {
        return ((width * height) / 2);
    }
};

class Rectangle : public Shape
{
public:
    float area()
    {
        return ((width * height));
    }
};

int main()
{

    Shape a;
    Rectangle r;
    r.set_data(4,5);
    cout<< r.area()<<endl;
    Triangle tri;
    tri.set_data(4,5);
   cout<< tri.area();

    return 0;
}