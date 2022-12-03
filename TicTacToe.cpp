#include <iostream>
#include "TicTacToe.h"
using namespace std;
TicTacToe::TicTacToe(){
    int i;
    int j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            Grid[i][j]=0;
        }
    }
}
void TicTacToe::DisplayGrid(){
    int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout<<Grid[i][j]<<"\t";
            }
        cout<<endl;
        }
    }
int TicTacToe::CheckGameResult(){
    int result=0;
    int i,j;
    int temphorizontal;
    int tempvertical;
    int tempdiagonal;
    for(i=0;i<3;i++){
        tempdiagonal=0;
        tempvertical=0;
        temphorizontal=0;
        for(j=0;j<3;j++){
            if(Grid[i][j]==1){ temphorizontal+=Grid[i][j];
            if (temphorizontal==3){
            cout<<"Player 1 has Won"<<endl;
            result=1;
            break;}
            }
            else if(Grid[j][i]==1){tempvertical+=Grid[j][i];
            if(tempvertical==3){cout<<"Player 1 has Won"<<endl;
            result=1;
            break;
            }}
            else if(Grid[j][j]==1){ tempdiagonal+=Grid[j][j];
            if(tempdiagonal==3){cout<<"Player 1 has Won"<<endl;
            result=1;
            break;
            }
            
            }
            else if(Grid[i][j]==2){temphorizontal+=Grid[i][j];
            if(temphorizontal==6){cout<<"Player 2 has Won"<<endl;
            result=1;
            break;}
            }
            else if(Grid[j][i]==2){tempvertical+=Grid[j][i];
        if(tempvertical==6){cout<<"Player 2 has Won"<<endl;
            result=1;
            break;}
            }
            else if(Grid[j][j]==2){tempdiagonal+=Grid[j][j];
            if (tempdiagonal==6){cout<<"Player 2 has Won"<<endl;
            result=1;
            break;
                
            }
            }
            else{cout<<"Match Draw!";}
        
        
          
}
        }

return result;
}
 
   


void TicTacToe::Player1Move(){
       
while (true){
 int Row=0,Column=0;
    cout<<"Player 1 Enter Row and Column where you would like to make your move separated by a space respectively."<<endl;
    cin>>Row>>Column;
    Row--;
    Column--;

if (Grid[Row][Column]==0){
Grid[Row][Column]=1;
break; }
else{cout<<"Invalid Move. Please Try Again"<<endl;
}
}
}
void TicTacToe::Player2Move(){
    while (true){
    cout<<"Player 2 Enter Row and Column where you would like to make your move."<<endl;
    int Row=0,Column=0;
    cin>>Row>>Column;
    Row--;
    Column--;

if (Grid[Row][Column]==0){
Grid[Row][Column]=2;
break; }
else{cout<<"Invalid Move. Please Try Again"<<endl;

}
    }
}
