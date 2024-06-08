// Employee Management:
// Create an Employee class with subclasses for Manager, Engineer, and Salesperson.
// Implement methods to calculate the salary of each employee type.
// Utilize polymorphism to handle different employee types efficiently.

#include <iostream>
using namespace std;

class Employee
{
public:
    string id;
    double Basesalary;

    Employee(string id, double Basesalary)
    {
        this->id = id;
        this->Basesalary = Basesalary;
    }

    virtual void calcSalary()
    {
    }
};

class Manager : public Employee
{
    double increment;

public:
    Manager(string i, double b, double inc) : Employee(i, b), increment(inc) {}

    void calcSalary()
    {
        Basesalary = Basesalary + increment * Basesalary / 100;
        cout << "Salary of Manager : " << Basesalary << endl;
    }
};

class Engineer : public Employee
{
    int project;

public:
    Engineer(string i, double b, int pro) : Employee(i, b), project(pro) {}

    void calcSalary()
    {
        Basesalary = Basesalary + project * 1000; // per project 1000
        cout << "Salary of Engineer : " << Basesalary << endl;
    }
};

class SalesPerson : public Employee
{
    double profitPerc;

public:
    SalesPerson(string i, double b, double pro) : Employee(i, b), profitPerc(pro) {}

    void calcSalary()
    {
        Basesalary = Basesalary + profitPerc * Basesalary / 100; // per project 1000
        cout << "Salary of Salesperson : " << Basesalary << endl;
    }
};

int main()
{

    Manager m("@#10", 25000, 5);
    Engineer er("3w3j", 50000, 10);
    SalesPerson sp("3ueh", 45000, 15);

    Employee *ep[3] = {&m, &er, &sp};

    for (auto a : ep)
    {
        a->calcSalary();
    }

    return 0;
}
