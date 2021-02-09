//
// Created by 刘勇 on 2021/2/9.
//

#ifndef SIMPLEFACTORYPATTERN_SHAPEFACTORY_H
#define SIMPLEFACTORYPATTERN_SHAPEFACTORY_H

#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <string>

class ShapeFactory {
public:
    static Shape* manufactureShape(std::string shapeType);
};


#endif //SIMPLEFACTORYPATTERN_SHAPEFACTORY_H
