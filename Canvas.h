#pragma once
#include "Shape.h"
class Canvas
{
public:
    void printshape(Shape* s){
        s -> draw();
    }
};
