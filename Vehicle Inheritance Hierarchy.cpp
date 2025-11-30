#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected: 
    string brand;
    string model;

public:
    void setCommonDetails(const string& b, const string& m) {
        brand = b;
        model = m;
    }

    void displayBaseInfo() const {
        cout << "Brand: " << brand << ", Model: " << model;
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    void setupCar(const string& b, const string& m, int doors) {
        setCommonDetails(b, m); 
        numberOfDoors = doors;  
    }

    void displayInfo() const {
        cout << "\n CAR: ";
        displayBaseInfo(); 
        cout << ", Doors: " << numberOfDoors << endl;
    }
};

class Motorcycle : public Vehicle {
private:
    string handleType;

public:
    void setupBike(const string& b, const string& m, const string& hType) {
        setCommonDetails(b, m); 
        handleType = hType;     
    }

    void displayInfo() const {
        cout << "\n BIKE: ";
        displayBaseInfo(); 
        cout << ", Handle Type: " << handleType << endl;
    }
};

int main() {
    
    Car myCar;
    myCar.setupCar("Toyota", "Camry", 4);
    
    Motorcycle myBike;
    myBike.setupBike("Harley", "Road King", "Cruiser bars");

    myCar.displayInfo();
    myBike.displayInfo();

    return 0;
}
