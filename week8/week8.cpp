/*
//
// Created by MD. Zahed on 04/11/2022.
//
#include <iostream>
//#include "shapes.cpp"

#include "shapes.h"
using namespace std;

int main() {

    Rectangle u(2,3);
    Square v(2);
    Circle w(1);

    // Print all areas
    cout << "Areas..." << endl;
    cout << round(u.area()) << endl;
    cout << round(v.area()) << endl;
    cout << round(w.area()) << endl;


    // Print all perimeters
    cout << "Perimeters..." << endl;
    cout << round(u.perimeter()) << endl;
    cout << round(v.perimeter()) << endl;
    cout << round(w.perimeter()) << endl;


  */
/*  Shape *shape;

    Square *square = new Square(2);

    cout << square->height() << endl;
    cout << square->width() << endl;


    Rectangle *rectangle = new Rectangle(4, 2);
    cout << rectangle->width() << endl;
    cout << rectangle->height() << endl;
    cout << rectangle->areal() << endl;

    cout << "Hello there" << endl;

    rectangle->rotate();

    cout << rectangle->width() << endl;
    cout << rectangle->height() << endl;
    cout << rectangle->areal() << endl;
    cout << rectangle->perimeter() << endl;



    cout << "Circle" << endl;

    Circle *circle = new Circle(4);

    cout << circle->width() << endl;
    cout << circle->height() << endl;
    cout << circle->area() << endl;
    cout << circle->perimeter() << endl;
*//*



}*/


#include <iostream>
#include <vector>
#include <cmath>
#include "shapes.h"

using namespace std;

int main9(void){

    vector<Shape *> shapes;

    Rectangle u(2,5);
    shapes.push_back(&u);
    Square v(3);
    shapes.push_back(&v);
    Circle w(2);
    shapes.push_back(&w);
    // Enumerating all areas
    cout << "Areas..." << endl;
    double area = 0;
    for(int i=0; i<shapes.size(); i++){
        cout << round(shapes[i]->area()) << " ";
        area += shapes[i]->area();
    }
    cout << endl << "Total area is " << round(area) << endl;

    // Enumerating all areas
    cout << "Perimeters..." << endl;
    double perimeter = 0;
    for(int i=0; i<shapes.size(); i++){
        cout << round(shapes[i]->perimeter()) << " ";
        perimeter += shapes[i]->perimeter();
    }
    cout << endl << "Total area is " << round(perimeter) << endl;

    // I want to put them side-by-side
    // And see how much space they use (width and height)
    cout << "Placing side-by-side..." << endl;
    double width = 0;
    double height = 0;
    for(int i=0; i<shapes.size(); i++){
        width += shapes[i]->width();
        if(height < shapes[i]->height()){
            height = shapes[i]->height();
        }
    }
    cout << "Total width is " << round(width) << endl;
    cout << "Total height is " << round(height) << endl;

    // I now try to do the same, but minimizing width
    // First, I rotate those shapes that need it
    for(int i=0; i<shapes.size(); i++){
        if(shapes[i]->width() > shapes[i]->height()) {
            shapes[i]->rotate();
        }
    }
    // Then I proceed as before
    // Then I proceed as before
    cout << "Placing side-by-side..." << endl;
    width = 0;
    height = 0;
    for(int i=0; i<shapes.size(); i++){
        width += shapes[i]->width();
        if(height < shapes[i]->height()){
            height = shapes[i]->height();
        }
    }


    cout << "Total width is " << round(width) << endl;
    cout << "Total height is " << round(height) << endl;

    return 0;

}
