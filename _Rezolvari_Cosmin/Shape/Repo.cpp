//
// Created by sorod on 02/06/2022.
//

#include "Repo.h"
#include"Circle.h"
#include"Square.h"
#include"Rectangle.h"
#include<iostream>
Shape*   Repo::GetShape(string shapeType, string color){
    if(shapeType=="Circle")
    {
        Shape *f = new Circle(color);
            return f;
    }else if(shapeType=="Square")
    {
        Shape *f = new Square(color);
        return f;
    }
    else
    { Shape *f = new Rectangle(color);
        return f;
    }

}
void Repo::Add(Shape* x){
    this->vec.push_back(x);
}
void Repo::Remove(string info){
    vector<Shape*>::iterator it=this->vec.begin();
    int nr=0;
    while( it != this->vec.end())
    {
        if((*it)->getName()==info || (*it)->getColor()==info)
        {
            this->vec.erase(it);
            it=this->vec.begin()+nr;
        }
        else {
            ++nr;
            ++it;
        }
    }
}
void Repo::PrintAll(){
    for (auto a : this->vec)
    {
        std::cout<<"Shape: "<<a->getName()<<"\n"<<"Color: "<<a->getColor()<<"\n";
    }
    std::cout<<"----\n";
}