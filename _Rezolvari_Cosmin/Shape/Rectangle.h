//
// Created by sorod on 02/06/2022.
//

#ifndef SHAPE_RECTANGLE_H
#define SHAPE_RECTANGLE_H


#include"Shape.h"
class Rectangle:public Shape {
private: std::string color;
public:
    Rectangle(std::string col);
    std::string getName() override;
    std::string getColor()override;

};


#endif //SHAPE_RECTANGLE_H
