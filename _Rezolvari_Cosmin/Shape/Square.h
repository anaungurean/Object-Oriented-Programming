//
// Created by sorod on 02/06/2022.
//

#ifndef SHAPE_SQUARE_H
#define SHAPE_SQUARE_H

#include"Shape.h"
class Square: public Shape {
private: std::string color;
public:
    Square(std::string col);

    std::string getName()override;
    std::string getColor ()override;
};


#endif //SHAPE_SQUARE_H
