//virtual fn

#include <iostream>
using namespace std;

class Shape {
protected:
    string name;
    
public:
    // Constructor
    Shape(string n) : name(n) {
        cout << "Shape constructor called: " << name << endl;
    }
    
    // Pure virtual function (makes this class abstract)
    virtual void draw() = 0;
    
    virtual ~Shape() {
        cout << "Shape destructor called" << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    Circle(string n) : Shape(n) {
        cout << "Circle constructor called" << endl;
    }
    
    void draw() override {
        cout << "Drawing circle: " << name << endl;
    }
};

int main() {
    // Shape s("Shape");  // Error: cannot instantiate abstract class
    
    Circle c("My Circle");
    c.draw();
    
    return 0;
}
