#pragma once
#include "Shape.h"
#include <iostream>
class Square:public Shape {
public:
    Square(){
        std::cout << "Cuadrado creado" <<std::endl;
    }
    ~Square(){
        std::cout << "Cuadrado Destruido" <<std::endl;
    }
    void drawhueco(){
        for (int i = 0; i < 6; i++)
        {   
            for (int j = 0; j < 5; j++)
            {
                if(i==0||i==5){
                    std::cout<<" * ";
                }else if (j==0 || j==4)
                {
                   std::cout<<" * ";
                }else std::cout<<"   ";
            }
            std::cout <<""<< std::endl;
        }

    }
    void draw(){
        for (int i = 0; i < 6; i++)
        {   
            for (int j = 0; j < 5; j++)
            {
                    std::cout<<" * ";
            }
            std::cout <<""<< std::endl;
        }
    }

};