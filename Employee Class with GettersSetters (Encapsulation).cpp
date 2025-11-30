#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name; 
    double salary;

public:

    void setName(const string& n) {
        name = n;
    }

    string getName() const {
        return name;
    }

    void setSalary(double s) {
        if (s > 0) {
            salary = s;
        } else {
            cout << "Invalid salary amount." << endl;
        }
    }

    double getSalary() const {
        return salary;
    }
};

int main() {
    
    Employee emp;

    emp.setName("Alice Johnson"); 
    emp.setSalary(75000.50);

    cout << "--- Employee Encapsulation ---" << endl;
    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Salary: $" << emp.getSalary() << endl;

    return 0;
}
