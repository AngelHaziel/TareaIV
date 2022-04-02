#include "Triangule.h"
#include "Square.h"
#include "Rentagule.h"
#include "Canvas.h"
#include "Menu.h"
#include "Trianguloequilatero.h"

int main(){
    Shape* s = nullptr;
    Canvas c;
    Menu h;
    int option;
    option = h.imprimirmenu(); 
    if(option == 1){
        s = new Square();
    }else if (option == 2)
    {
        s = new Triangule();
    }else if (option == 3)
    {
        s = new Rectangule();
    }else if(option == 4)
    {
        s = new Trianguloequilatero();
    }else if(option == 5)
    {
        Square cud;
        cud.drawhueco();
    }    
    if(s != nullptr){
        c.printshape(s);
        delete s;
    }

}