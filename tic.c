#include<stdio.h>
int main()
{
int ab, n=2,i,j,m=0,aj,tr=0;
char a[3][3];
for(i=0; i<3; i++)
for(j=0; j<3; j++)
a[i][j]=' ';

printf("player 1 symbol is X and player 2 symbol is O");
printf("\n   %c|%C   |%C     ",a[0][0],a[0][1],a[0][2]  );
printf("\n____|____|____   "                          );
printf("\n   %C|%C   |%C     ",a[1][0],a[1][1],a[1][2]  );
printf("\n____|____|____   "                          );
printf("\n   %c|%c   |%C     ",a[2][0],a[2][1],a[2][2]  );
printf("\n    |    |       "                          );
while(n!=5)
{

printf("\nplayer 1 move");
scanf(" %d%d",&i,&j);
m++;
a[i-1][j-1]='X';

printf("\n   %c|%C   |%C     ",a[0][0],a[0][1],a[0][2]  );
printf("\n____|____|____   "                          );
printf("\n   %C|%C   |%C     ",a[1][0],a[1][1],a[1][2]  );
printf("\n____|____|____   "                          );
printf("\n   %c|%c   |%C     ",a[2][0],a[2][1],a[2][2]  );
printf("\n    |    |       "                          );


if((a[1][1]=='X'))
{aj=2;
  a[0][0]='O';
  

if((a[2][2]=='X')&&(tr<10))
{
printf("error");
 aj=4;
 a[0][2]='O';
if(a[0][1]=='X')
{
 aj=6;
 a[2][1]='O';
if(a[1][0]=='X')
{
 aj=8;
a[1][2]='O';
if(a[2][0]=='X')
printf("this match is draw");
}
}
}


if(a[2][1]=='X'&&aj!=4)
{
 tr=10;
 a[0][1]='O';
if(a[0][2]=='X')
{
 tr=12;
 a[2][0]='O';
if(a[1][0]=='X')
{
 tr=14;
a[1][2]='O';
printf("hello");
if(a[2][2]=='X')
printf("this match is draw");
}
}
}
if(a[2][0]=='X')
{
 ab=4;
 a[0][2]='O';
if(a[0][1]=='X')
{
 aj=6;
 a[2][1]='O';
if(a[1][0]=='X')
{
 aj=8;
a[1][2]='O';
if(a[2][0]=='X')
printf("this match is draw");
}
}
}



} 






printf("\n   %c|%C   |%C     ",a[0][0],a[0][1],a[0][2]  );
printf("\n____|____|____   "                          );
printf("\n   %C|%C   |%C     ",a[1][0],a[1][1],a[1][2]  );
printf("\n____|____|____   "                          );
printf("\n   %c|%c   |%C     ",a[2][0],a[2][1],a[2][2]  );
printf("\n    |    |       "                          );

for(i=0; i<3; i++)
{
if((a[i][0]=='X'&&a[i][1]=='X'&&a[i][2]=='X')||(a[0][i]=='X'&&a[1][i]=='X'&&a[2][i]=='X'))
{
printf("player 1 wins the game");
n=5;
break;
}
if((a[i][0]=='O'&&a[i][1]=='O'&&a[i][2]=='O')||(a[0][i]=='O'&&a[1][i]=='O'&&a[2][i]=='O'))
{
printf("you lose the game");
n=5;
break;
}
}
n=5;
for(i=0; i<3; i++)
for(j=0; j<3; j++)
if(a[i][j]==' ')
 n=4;
if(n==5)
printf("*********THANKYOU FOR PLAYING GAME********"); 


}
return 0;
}
