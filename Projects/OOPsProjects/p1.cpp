// Vehicle Hierarchy:
// Create a hierarchy of vehicles (Car, Truck, Motorcycle) using inheritance.
// Implement a method to calculate the total fuel cost for each vehicle.
// Utilize polymorphism to display vehicle information.

#include <iostream>
using namespace std;

const int cost = 105;

class Vehicle
{
public:
    string model;
    double average; // distance covered per litre of fuel

    Vehicle(string m, double a) : model(m), average(a)
    {
    }

    virtual double fuelCost(double distance)
    {
        return cost * distance / average;
    }

    void display()
    {
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle
{
public:
    Car(string m, double a) : Vehicle(m, a) {}

    double fuelCost(double distance) override {
        return Vehicle::fuelCost(distance)*1.1; //car 10% cost inc
    }


};

class Truck : public Vehicle
{
public:
    Truck(string m, double a) : Vehicle(m, a) {}

    double fuelCost(double distance) override {
        return Vehicle::fuelCost(distance)*1.2; //truck 20% cost inc
    }
    

};

class Motercycle : public Vehicle
{
public:
    Motercycle(string m, double a) : Vehicle(m, a) {}

    double fuelCost(double distance) override {
        return Vehicle::fuelCost(distance)*1.05; //motorcycle 5% cost inc
    }
    

};



int main()
{
    Car car("Bugatti", 40);
    Truck truck("mytikku", 30);
    Motercycle motorcycle("KTG", 50);

    Vehicle *vehicle[3] = {&car,&truck, &motorcycle};

    for(int i = 0; i < 3; i++){
        vehicle[i]->display();
        cout << "Cost for 120km: " << vehicle[i]->fuelCost(120) << endl;

    }

    for(auto v : vehicle){
         v->display();
        cout << "Cost for 120km: " << v->fuelCost(120) << endl;
    }



    return 0;
}