/*
1. How to create array of object ?
=> by define array as object name we can create array of object.
ex ClassName arr[4];
In above code we use arr[0] for first object arr[1] as second obejct
and can access value as arr[0].memberName/functionName

2. Why we create Array of object ?
=> Some time we want to take variable name dynamically suppose there 250 student so instead of creating 250 objects we can use array of object

*/

#include <iostream>
using namespace std;

class Name{
    string name;
    public:
        void setName(){
            cout<<"Enter your Name :"<<endl;
            cin>>name;
        }
        void getName(){
            cout<<"Your name is :" <<name<<endl;
        }
};

int main()
{
    Name name[4];
    name[0].setName();
    name[0].getName();

    for (int i = 1; i < 4; i++)
    {
        name[i].setName();
        name[i].getName();
    }
    
    return 0;
}