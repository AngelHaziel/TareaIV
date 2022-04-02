#pragma once
#include "Shape.h"
#include <iostream>
class Triangule:public Shape {
public:
    Triangule(){
        std::cout << "Triangulo creado" <<std::endl;
    }
    ~Triangule(){
        std::cout << "Triangulo Destruido" <<std::endl;
    }
    void draw(){
        for (int i = 0; i < 6; i++)
            {   
                for (int j = 0; j <= i; j++)
                {
                    std::cout<<" * ";
                }
                std::cout <<""<< std::endl;
            }
        }
};