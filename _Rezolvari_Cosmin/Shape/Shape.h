//
// Created by sorod on 02/06/2022.
//

#ifndef SHAPE_SHAPE_H
#define SHAPE_SHAPE_H

#include<string>
class Shape {
protected:
    std::string  name;
public:
    Shape(std::string name);
   virtual  std::string getName() = 0;
   virtual  std::string getColor() = 0;
};


#endif //SHAPE_SHAPE_H
