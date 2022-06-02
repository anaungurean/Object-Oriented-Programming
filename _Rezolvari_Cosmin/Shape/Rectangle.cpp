//
// Created by sorod on 02/06/2022.
//

#include "Rectangle.h"


Rectangle::Rectangle(std::string col): Shape("Rectangle") , color(col){

}

std::string Rectangle::Rectangle::getName(){
    return this->name;
}
std::string Rectangle::getColor(){
    return this->color;
}