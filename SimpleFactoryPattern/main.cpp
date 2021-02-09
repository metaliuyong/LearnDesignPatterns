#include <iostream>
#include "Shape.h"
#include "ShapeFactory.h"

int main() {
    Shape* circle = ShapeFactory::manufactureShape("Circle");
    circle->getShape();

    Shape* rectangle = ShapeFactory::manufactureShape("Rectangle");
    rectangle->getShape();

    Shape* triangle = ShapeFactory::manufactureShape("Triangle");
    triangle->getShape();
    
    return 0;
}
