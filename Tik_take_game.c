#include<stdio.h>
#include<conio.h>

void printBoard();
int cheakWiner();
void system();

char board[]={'0','1','2','3','4','5','6','7','8','9'};

void main(){

   int player=1,Giveplace,staus=-1;
     printBoard();

     while (staus==-1)
     {
      player=(player%2==0)?2:1;
      char mark=(player==1)?'X':'0';
      printf("Please Enter the Number of Player  %d\n",player);

      scanf("%d",&Giveplace);

      if(Giveplace<1 || Giveplace>9){
        printf("Invalid input\n");
        continue; 
      }

      if(board[Giveplace] == 'X' || board[Giveplace] == 'O'){
        printf("This place is already filled. Please choose another.\n");
        continue; 
      }

      board[Giveplace]=mark;
      printBoard();

      int result=cheakWiner();

      if(result==1){
        printf("Winner is = %d\n",player);
        staus = 1;
      }
      else if(result==0){
        printf("Draw\n");
        return;
      }

      player++;
     }
}

void printBoard(){
  system("cls");
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
    printf("     |        |      \n\n");
}

int cheakWiner(){

  if(board[1]==board[2]&&board[2]==board[3]){
    return 1;
  }
  if(board[1]==board[4]&&board[4]==board[7]){
    return 1;
  }
  if(board[7]==board[8]&&board[8]==board[9]){
    return 1;
  }
  if(board[3]==board[6]&&board[6]==board[9]){
    return 1;
  }
  if(board[1]==board[5]&&board[5]==board[9]){
    return 1;
  }
  if(board[3]==board[5]&&board[5]==board[7]){
    return 1;
  }
  if(board[2]==board[5]&&board[5]==board[8]){
    return 1;
  }
  if(board[4]==board[5]&&board[5]==board[6]){
    return 1;
  }

  int count=0;

  for ( int i = 1; i <= 9; i++)
  {
    if(board[i]=='X' || board[i]=='o'){
      count++;
    }
  }

  if(count==9){
    return 0;
  }

  return -1;
}
