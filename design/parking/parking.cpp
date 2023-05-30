#include <iostream>
#include <vector>
using namespace std;

class Vehicle
{
private:
    string ownerName;
    string vehicletype;

public:
    Vehicle(string ownerName, string vehicletype)
    {
        this->ownerName = ownerName;
        this->vehicletype = vehicletype;
    }

    string getOwnerName()
    {
        return ownerName;
    }
    string getvehicletype()
    {
        return vehicletype;
    }
};

// individual space
class ParkingSpace
{
    int number;
    Vehicle *vh;
    bool Occupied;

public:
    ParkingSpace(int n) : number(n), vh(nullptr), Occupied(false)
    {
    }

    bool isOccupied()
    {
        return Occupied;
    }

    Vehicle *getVehicle()
    {
        return vh;
    }

    void setVehicle(Vehicle *v)
    {
        if (!Occupied)
        {
            vh = v;
            Occupied = true;
            cout << "Parking number " << number << " is alloted to " << v->getOwnerName() << endl;
        }
        else
        {
            cout << "Parking is full\n";
        }
    }

    void removerVehicle()
    {
        if (Occupied)
        {
            vh = nullptr;
            Occupied = false;
            cout << "Parking number " << number << " is empty now \n";
        }
        else
        {
            cout << "Parking number " << number << " is already empty now \n";
        }
    }
};

// this will create whole parking lot
class ParkingLot
{
private:
    vector<ParkingSpace *> spaces;

public:
    ParkingLot(int capacity)
    {
        for (int i = 1; i <= capacity; i++)
        {
            // According to capacity Parking lot is created
            spaces.push_back(new ParkingSpace(i));
        }
    }

    void ParkedVehicle(Vehicle *v)
    {
        for (ParkingSpace *space : spaces)
        {
            if (!space->isOccupied())
            {
                space->setVehicle(v);
                return;
            }
        }
        cout << "No Parking is available \n";
    }

    void removerVehicle(Vehicle *v)
    {
        for (ParkingSpace *space : spaces)
        {
            if (space->isOccupied() && v->getOwnerName() == space->getVehicle()->getOwnerName())
            {
                space->removerVehicle();
                return;
            }
        }
        cout << "This vehicle is not in the Parking Lot \n";
    }
};

int main()
{

    ParkingLot p(5);

    Vehicle v1("soham", "Car");
    Vehicle v2("Rohit", "Bike");
    Vehicle v3("Rishabh", "Truck");

    p.ParkedVehicle(&v1);
    p.ParkedVehicle(&v2);
    p.ParkedVehicle(&v3);

    p.removerVehicle(&v1);
    return 0;
}