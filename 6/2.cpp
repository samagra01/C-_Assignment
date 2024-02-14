#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

class Shape { // Base class (Abstract)
public:
    virtual void calculateArea() = 0; // Pure virtual function 
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    Circle(double radius);
    void calculateArea() override; 
    void draw() const override; 
private:
    double radius;
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height);
    void calculateArea() override;
    void draw() const override;
private:
    double width;
    double height;
};

class Triangle : public Shape {
public:
    Triangle(double base, double height);
    void calculateArea() override;
    void draw() const override;
private:
    double base;
    double height;
};

const double PI = 3.14159;

// Circle******
Circle::Circle(double radius) : radius(radius) {}

void Circle::calculateArea() {
    double area = PI * radius * radius;
    cout << "Circle area: " << area << endl;
}

void Circle::draw() const {
   cout << "Drawing a circle" << endl;
}

// Rectangle ******
Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

void Rectangle::calculateArea() {
    double area = width * height;
    cout << "Rectangle area: " << area << endl;
}

void Rectangle::draw() const {
    cout << "Drawing a rectangle" << endl;
}

// Triangle******
Triangle::Triangle(double base, double height) : base(base), height(height) {}

void Triangle::calculateArea() {
    double area = 0.5 * base * height;
    cout << "Triangle area: " << area << endl;
}

void Triangle::draw() const {
    std::cout << "Drawing a triangle" << endl;
}


int main() {
    Circle circle1(5.0);
    Rectangle rectangle1(4.0, 6.0);
    Triangle triangle1(3.0, 4.0);

    // Polymorphism using Shape pointers
    vector<Shape*> shapes = {&circle1, &rectangle1, &triangle1};

    for (Shape* shape : shapes) {
        shape->calculateArea();
        shape->draw();
        std::cout << std::endl; 
    }

    return 0;
}