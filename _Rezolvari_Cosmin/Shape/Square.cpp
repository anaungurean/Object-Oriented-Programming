//
// Created by sorod on 02/06/2022.
//

#include "Square.h"

Square::Square(std::string col): Shape("Square") , color(col){

}

std::string Square::getName(){
    return this->name;
}
std::string Square::getColor() {
    return this->color;
}
