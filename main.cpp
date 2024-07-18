#include <iostream>
#include <cmath>

// Create base class
class Shape {
public:
    virtual double area() const = 0;
};

// Derived Circle Class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {} // Constructor which initializes radius r;

    double area() const override {
        return M_PI * radius * radius;
    }

};

// Derived Rectangle Class
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};

int main() {
    // Create instance of circle class, initialize radius (r) and calculate area of circle
    Circle circle(5.3);
    std::cout << "Area of circle: " << circle.area() << "\n";

    // Create instance of circle rectangle, initialize width (w) and height (h) and calculate area of rectangle
    Rectangle rectangle(7.5, 6.3);
    std::cout << "Area of rectangle: " << rectangle.area() << "\n";
}
