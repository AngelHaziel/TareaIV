#pragma once
#include "Shape.h"
#include <iostream>
class Menu
{
public:
    Menu(){}
    ~Menu(){}
    int imprimirmenu(){
        int option=0,decision=0;
        std::cout<<"Que figura pintara: "<<std::endl;
        std::cout<<"1- Cuadrado "<<std::endl;
        std::cout<<"2- Triangulo "<<std::endl;
        std::cout<<"3- Rectangulo "<<std::endl;
        std::cin>>option;
        if(option == 1){
            std::cout<<"Desea que el cuadrado este vacio? (yes = 1 / no = 2 ): "<<std::endl;
            std::cin>>decision;
            if (decision == 1)
            {
                option = 5;
            }

        } else if (option == 2)
        {
            std::cout<<"Que triangulo desea: "<<std::endl;
            std::cout<<"1- Escaleno "<<std::endl;
            std::cout<<"2- Equilatero "<<std::endl;
            std::cin>>decision;
            if(decision == 2){
                option = 4;
            }
        }
        
        return option;
    }

};
