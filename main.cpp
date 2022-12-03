#include <iostream>
#include "TicTacToe.h"
int main(){
    std::cout<<"Hello World!"<<std::endl;
    TicTacToe Grid1;
    while (true){
    Grid1.DisplayGrid();
    Grid1.Player1Move();
    if(Grid1.CheckGameResult()==1){Grid1.CheckGameResult();
    break;}
    Grid1.DisplayGrid();
    Grid1.Player2Move();
    if(Grid1.CheckGameResult()==1){Grid1.CheckGameResult();
    break;}
    }
    return 0;
}