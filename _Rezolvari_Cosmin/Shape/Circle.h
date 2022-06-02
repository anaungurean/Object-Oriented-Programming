//
// Created by sorod on 02/06/2022.
//

#ifndef SHAPE_CIRCLE_H
#define SHAPE_CIRCLE_H

#include"Shape.h"

class Circle:public Shape {
private:
    std::string color;
public:
    Circle(std::string col);
    std::string getName()override;
    std::string getColor();

};


#endif //SHAPE_CIRCLE_H
