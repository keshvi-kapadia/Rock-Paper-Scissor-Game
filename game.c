#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int WhoWins(char com,char u)
{
     if(com==u)
     return 0;
     else if(com=='r' && u=='p')
     return 1;
     else if(com=='r' && u=='s')
     return -1;
     else if(com=='p' && u=='r')
     return -1;
     else if(com=='p' && u=='s')
     return 1;
     else if(com=='s' && u=='r')
     return 1;
     else if(com=='s' && u=='p')
     return -1;

     return 0;
}
int main()
{
     char comp,you;

     srand(time(0));
     int num=rand()%100+1;

     if(num<33)
     comp='r';
     else if(num>33 && num<66)
     comp='p';
     else comp='s';

     printf("Enter r for Rock p for Paper and s for Scissor\n");
     scanf("%c",&you);
     int result=WhoWins(comp,you);
     if(result==0)
     printf("Game Draws!!\n");
     else if(result==1)
     printf("You Wins!!\n");
     else
     printf("You Lose!!\n");

     printf("Computer played %c \nYou played %c\n",comp,you);
     return 0;
}
