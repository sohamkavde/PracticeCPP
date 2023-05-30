// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


class Vehicle{
    public:
        string name;
        string type;
        Vehicle(string n,string type){
            this->name = n;
            this->type = type;
        }
        
        string getName(){
            return name;
        }
};

class ParkingSpace{
    int indexNumber;
    Vehicle* vh;
    bool isAvailable;
    public:
        ParkingSpace(int indexNum){
            this->indexNumber = indexNum;
            this->vh =nullptr;
            this->isAvailable = false;
        }
        int getIndex(){
            return indexNumber;
        }
        Vehicle* getVehicle(){
            return vh;
        }
        bool getAvailable(){
            return isAvailable;
        }
        
        void Occupied(Vehicle* vh){
            if(!getAvailable()){
                cout<<"Vehicle of "<<vh->name<<" is Parked in "<<indexNumber<<endl;
                this->vh = vh;
                this->isAvailable = true;
            }else{
                cout<<"Vehicle is already Parked \n";
            }
        }
        
        void removeVehicle(Vehicle* vh){
            if(getAvailable()){
                this->vh = nullptr;
                this->isAvailable = false;
                cout<<"Parking Number "<<indexNumber<<" is empty now";
            }
        }
};

class ParkingLot{
    public:
        vector<ParkingSpace*>spaces;
    
        ParkingLot(int capacity){
            for(int i=1;i<capacity;i++){
                spaces.push_back(new ParkingSpace(i));
            }
        }
        
        void Occupied(Vehicle* vh){
            for(auto space:spaces){
                if(!space->getAvailable()){
                    space->Occupied(vh);
                    return;
                }
            }
            cout<<"Not Find any entry for this vehicle \n";
        }
        
        void removeVehicle(Vehicle* vh){
            for(auto space : spaces){
                if(space->getVehicle()->getName() == vh->getName()){
                    space->removeVehicle(vh);
                    return;
                }
            }
            cout<<"Vehicle is not parked yet \n";
        }
        
        void displayParkingLot(){
            for(auto space:spaces){
                if(space->getAvailable()){
                    cout<<"[space no. "<<space->getIndex()<<" Parked ] \t";
                }else{
                    cout<<"[space no. "<<space->getIndex()<<" Available ] \t";
                }
            }cout<<endl;
        }
};

int main() {
    // Write C++ code here
    cout << "Parking Lot \n";
    ParkingLot ParkingLot(5);
    ParkingLot.displayParkingLot();
    
    // Creating Vehicle
    Vehicle v1("soham","Truck");
    Vehicle v2("Rohit","Bike");
    
    ParkingLot.Occupied(&v1); 
    ParkingLot.Occupied(&v2);
    
    ParkingLot.displayParkingLot();
    ParkingLot.removeVehicle(&v2);
    ParkingLot.displayParkingLot();

    return 0;
}