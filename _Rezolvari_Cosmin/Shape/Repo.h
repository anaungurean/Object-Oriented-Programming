//
// Created by sorod on 02/06/2022.
//

#ifndef SHAPE_REPO_H
#define SHAPE_REPO_H

#include"Shape.h"
#include<vector>
using namespace std;
class Repo {
private:
vector<Shape*> vec;
public:
    Shape*   GetShape(string shapeType, string color);
    void Add(Shape* x);
   void Remove(string info);
    void PrintAll();
};


#endif //SHAPE_REPO_H
