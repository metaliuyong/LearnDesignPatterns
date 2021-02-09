//
// Created by 刘勇 on 2021/2/9.
//

#include "ShapeFactory.h"
#include <iostream>

Shape* ShapeFactory::manufactureShape(std::string shapeType) {
    Shape* shape = nullptr;
    if(shapeType == "Circle"){
        shape = new Circle();
    }else if(shapeType == "Triangle"){
        shape = new Triangle();
    }else if(shapeType == "Rectangle"){
        shape = new Rectangle();
    }else{
        std::cout << "Factory had not define the shape you want." << std::endl;
        return nullptr;
    }
    return shape;
}