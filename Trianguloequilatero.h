#pragma once
#include "Shape.h"
class Trianguloequilatero:public Shape
{

public:
    Trianguloequilatero(){}
    ~Trianguloequilatero(){}
    void draw(){
        for(int i=1; i<=8; i++) {
        for (int j=1; j<=8-i; j++) std::cout << " ";
        for (int j=1; j<=2*i-1; j++) std::cout << "*";
        std::cout << std::endl;
        }
    }
};


