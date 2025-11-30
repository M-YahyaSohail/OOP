#include <iostream>
#include <string>

using namespace std;

class Staff {
protected:

    string name;
    int id;

public:

    Staff(const string& n, int i) : name(n), id(i) {}

    void displayBaseInfo() const {
        cout << "Name: " << name << ", ID: " << id;
    }

    virtual ~Staff() {}

    virtual void describeRole() const {
        cout << "I am a general university staff member." << endl;
    }
};

class Professor : public Staff {
private:
    string researchArea; 

public:

    Professor(const string& n, int i, const string& r) 
        : Staff(n, i), researchArea(r) {}

    void describeRole() const override {
        cout << "Role: Professor." << endl;
        displayBaseInfo();
        cout << ". My research area is " << researchArea << endl; 
    }
};

class Lecturer : public Staff {
private:
    string courseName;

public:

    Lecturer(const string& n, int i, const string& c) 
        : Staff(n, i), courseName(c) {}

    void describeRole() const override {
        cout << "Role: Lecturer." << endl;
        displayBaseInfo();
        cout << ". I teach " << courseName << endl; 
    }
};

int main() {
    
    Professor prof("Dr. Smith", 101, "AI");
    Lecturer lect("Ms. Jones", 205, "Computer Networks");

    cout << "--- University Staff Inheritance ---" << endl;

    Staff* staffMembers[2];
    staffMembers[0] = &prof;
    staffMembers[1] = &lect;

    staffMembers[0]->describeRole();
    staffMembers[1]->describeRole();

    return 0;
}
