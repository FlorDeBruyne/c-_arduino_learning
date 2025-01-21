//    - Create a program that demonstrates polymorphism through a "Shape" class.
#include <iostream>
#include <string>
// #include <math.h>
#include <cmath>

# define M_PI           3.14159265358979323846

using namespace std;

// Base class
class Shape {
public:

    virtual float getCircumference(){ cout << "Return the circumference of the shape" << endl; return 0; };
    virtual float getArea(){ cout << "Return Area of the shape" << endl; return 0; };
    void print() {cout << "This is the Base class" << endl;};

};


class Circle : public Shape {
private:
    float radius;

public:
    
    Circle(float r) : radius(r) {}

    float getCircumference() override {
        return 2*M_PI*radius;
    };

    float getArea() override {
        return M_PI * pow(radius, radius);
    };

    void print() {
        cout << "This is the Circumference: " << getCircumference() << " , Area: " << getArea() << endl;
    }
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float length, float width) : length(length), width(width)  {}

    float getPerimeter() {
        return 2 * (length + width);
    };

    float getArea() override {
        return length * width;
    };

    void print() {
        cout << "This is the Perimeter: " << getPerimeter() << " , Area: " << getArea() << endl;
    }
};


class Square : public Shape {
private:
    float side;

public:
    Square(float side) : side(side) {}

    float getPerimeter() {
        return 4 * side;
    };

    float getArea() override {
        return pow(side, side);
    };

        void print() {
        cout << "This is the Perimeter: " << getPerimeter() << " , Area: " << getArea() << endl;
    };
};

int main(){

    Shape shape;
    shape.print();

    float radius;
    cout << "What is the radius of the Circle? ";
    cin >> radius;
    Circle circle(radius);
    circle.print();

    float length, width;
    cout << "What is the length of the rectangle? ";
    cin >> length;
    cout << "What is the width of the rectangle? ";
    cin >> width;
    Rectangle rectangle(length, width);
    rectangle.print();

    float side;
    cout << "What is the side of the square? ";
    cin >> side;
    Square square(side);
    square.print();

    return 0;
}