#include<conio.h>
#include<stdio.h>
#include<string.h>
char array[3][3]={'1','2','3','4','5','6','7','8','9'};
char player1,player2;
int count=0;

int main() {

printf("enter the name of first player\n");
scanf("%s",&player1);
printf("your sign is X\n\n");
printf("enter the name of second player\n");
scanf("%s",&player2);
printf("your sign is O\n\n");
    drawboard();
    get_input();
              printf("\nGAME OVER\n");

              getch();
              return 0;
}

void drawboard(){

  int i,j;
  for(i=0;i<3;i++){
    printf("\t");
    for(j=0;j<3;j++){
        printf(" %c ",array[i][j]);

    }
 }
}
char checkwin(){
if(array[0][0]=='X'&& array[1][1]=='X'&& array[2][2]=='X') /*1st diagonal*/
    return 'X';
if(array[0][2]=='X'&& array[1][1]=='X'&& array[2][0]=='X')/*2nd diagonal*/
    return 'X';
if(array[0][0]=='X'&& array[1][0]=='X'&& array[2][0]=='X')/*1st col*/
     return 'X';
if(array[0][1]=='X'&& array[1][1]=='X'&& array[2][1]=='X')/*2nd col*/
     return 'X';
if(array[0][1]=='X'&& array[1][1]=='X'&& array[2][1]=='X')/*3rd col*/
     return 'X';
if(array[0][0]=='X'&& array[0][1]=='X'&& array[0][2]=='X')/*1st row*/
     return 'X';
if(array[1][0]=='X'&& array[1][1]=='X'&& array[1][2]=='X')/*2nd row*/
     return 'X';
if(array[2][0]=='X'&& array[2][1]=='X'&& array[2][2]=='X')/*3rd row*/
     return 'X';

else
if(array[0][0]=='O'&& array[1][1]=='O'&& array[2][2]=='O')/*1st diagonal*/
    return 'O';
else if(array[0][2]=='O'&& array[1][1]=='O'&& array[2][0]=='O')/*2nd diagonal*/
    return 'O';
else if(array[0][0]=='O'&& array[1][0]=='O'&& array[2][0]=='O')/*1st col*/
     return 'O';
else if(array[0][1]=='O'&& array[1][1]=='O'&& array[2][1]=='O')/*2nd col*/
     return 'O';
else if(array[0][1]=='O'&& array[1][1]=='O'&& array[2][1]=='O')/*3rd col*/
     return 'O';
else if(array[0][0]=='O'&& array[0][1]=='O'&& array[0][2]=='O')/*1st row*/
     return 'O';
else if(array[1][0]=='O'&& array[1][1]=='O'&& array[1][2]=='O')/*2nd row*/
     return 'O';
else if(array[2][0]=='O'&& array[2][1]=='O'&& array[2][2]=='O')/*3rd row*/
     return 'O';
else
    return '/';
}
void get_input() {
int i,j;
char n,a;

while(1){
    printf("\n\nIts turn of %s \n",player1);
      count++;
      scanf("%c",&n);
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                if(n==array[i][j]){
                    if(count%2==0)
                         array[i][j]='O';
                      else
                        array[i][j]='X';
                }


                   }
        }

      drawboard();
       a=checkwin();
  if(a=='X'){
      printf("\n\n %s : You won",player1);

      count=0;
      break;
  }
   else if(a=='/' && count==9){
      printf("\n\n its a draw");

      count=0;
      break;
          }

        printf("\n\nIts turn of %s \n",player2);
      count++;
      scanf("%c",&n);
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                if(n==array[i][j]){
                    if(count%2==0)
                         array[i][j]='O';
                      else
                        array[i][j]='X';
                }
            }
        }
    drawboard();
    a=checkwin();
  if(a=='O'){
      printf("\n\n %s : You won",player2);

      count=0;
      break;
  }

}

}




