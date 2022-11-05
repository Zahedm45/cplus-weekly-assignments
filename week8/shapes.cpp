//
// Created by MD. Zahed on 04/11/2022.
//

#include <cmath>

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual double height() = 0;
    virtual double width() = 0;
    virtual void rotate() = 0;
};

class Square : public Shape{

protected:
    double length_or_radius;

public:
    Square(double length_or_radius) {
        this->length_or_radius = length_or_radius;
    }

    double height() override { return length_or_radius; }
    double width() override { return length_or_radius; }

    double area() override {
        return length_or_radius * length_or_radius;
    }

    double perimeter() override { return length_or_radius * 4; }

    void rotate() override {}



};




class Rectangle : public Square {
private:
    double h;

public:
    Rectangle( double height, double width) : Square(width) {
        this->h = height;
    }


    double height() override {
        return h;
    }



    double area() override {
        return h * length_or_radius;
    }


    double perimeter() override {
        return (length_or_radius + h) * 2;
    }

    void rotate() override {
        double temp = h;
        this->h = length_or_radius;
        length_or_radius = temp;
    }
};



class Circle : public Square{

public:
    Circle(double lengthOrRadius) : Square(lengthOrRadius){

    }

    double area() override {
        return Square::area() * M_PI;
    }

    double perimeter() override {
        return 2 * M_PI * length_or_radius;
    }

    double height() override {
        return Square::height() * 2;
    }

    double width() override {
        return Square::width() * 2;
    }

};




