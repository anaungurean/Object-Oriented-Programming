//
// Created by sorod on 02/06/2022.
//

#include "Circle.h"

Circle::Circle(std::string col): Shape("Circle") , color(col){

}

std::string Circle::getName(){
    return this->name;
}
std::string Circle::getColor(){
    return this->color;
}