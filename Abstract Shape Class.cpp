#include <iostream>

using namespace std;

const double PI = 3.14159; 

class Shape {
public:
    virtual double calculateArea() = 0; 
};

class Circle : public Shape {
private:
    double radius; 

public:
    void setRadius(double r) {
        radius = r;
    }

    double calculateArea() { 
        return PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;  // Needs width [cite: 30]
    double height; // Needs height [cite: 30]

public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    double calculateArea() {
        return width * height;
    }
};

void printArea(Shape& s) {
    cout << "Calculated Area: " << s.calculateArea() << endl;
}

int main() {
    
    Circle myCircle;
    myCircle.setRadius(5.0);

    Rectangle myRectangle;
    myRectangle.setDimensions(4.0, 6.0);

    cout << "--- Abstract Shape Demonstration ---" << endl;

    cout << "Circle (Radius 5.0): ";
    printArea(myCircle);

    cout << "Rectangle (4.0 x 6.0): ";
    printArea(myRectangle);

    return 0;
}
