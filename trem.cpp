#include "trem.h"
#include <QtCore>

//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    this->velocidade = 100;
}

void Trem::setVel(int val){
    this->velocidade = val;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        switch(ID){
        case 1:     //Trem 1
            if (y == 20 && x < 330)
                x+=10;
            else if (x == 330 && y < 140)
                y+=10;
            else if (x > 60 && y == 140)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 2: //Trem 2
            if (y == 20 && x < 600)
                x+=10;
            else if (x == 600 && y < 140)
                y+=10;
            else if (x > 330 && y == 140)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 3: //Trem 3
            if (y == 20 && x < 870)
                x+=10;
            else if (x == 870 && y < 140)
                y+=10;
            else if (x > 600 && y == 140)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 4: //Trem 4
            if (y == 140 && x < 480)
                x+=10;
            else if (x == 480 && y < 260)
                y+=10;
            else if (x > 210 && y == 260)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 5: //Trem 5
            if (y == 140 && x < 750)
                x+=10;
            else if (x == 750 && y < 260)
                y+=10;
            else if (x > 480 && y == 260)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        default:
            break;
        }
        msleep(this->velocidade);
    }
}




