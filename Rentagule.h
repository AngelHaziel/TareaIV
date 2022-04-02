#pragma once
#include "Square.h"
#include <iostream>
class Rectangule:public Square {
public:
    Rectangule(){
        std::cout << "Rectangulo creado" <<std::endl;
    }
    ~Rectangule(){
        std::cout << "Rectangulo Destruido" <<std::endl;
    }
    void draw(){
        for (int i = 0; i < 8; i++)
        {   
            for (int j = 0; j < 8/2; j++)
            {
                if(i==0||i==7){
                    std::cout<<" * ";
                }else if (j==0 || j==3)
                {
                   std::cout<<" * ";
                }else std::cout<<"   ";
            }
            std::cout <<""<< std::endl;
        }
    }

};