#include<stdio.h>
#include<conio.h>

void printBoard();

char board[]={'0','1','2','3','4','5','6','7','8','9'};

void main(){

   int player=1,Giveplace;
     printBoard();
   char mark=(player==1)?'X':'0';

  scanf("%d",&Giveplace);

  if(Giveplace<1 || Giveplace>9){
    printf("Invalid input");
  }

  board[Giveplace]=mark;
    printBoard();



  
        
}


void printBoard(){
    printf("\n\n");
    printf("**** Tic Tac Toe ****");
    printf("\n\n");
    printf("     |        |     \n");
    printf(" %c   |   %c    |  %c  \n",board[1],board[2],board[3]);
    printf("_____|________|_____\n");
    printf("     |        |     \n");
    printf("  %c  |   %c    |  %c  \n",board[4],board[5],board[6]);
    printf("_____|________|_____\n");
    printf("     |        |     \n");
    printf("  %c  |   %c    |  %c  \n",board[7],board[8],board[9]);
    printf("     |        |      \n");
}