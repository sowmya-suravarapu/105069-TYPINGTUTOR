#include<time.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<dos.h>
#include<stdlib.h>

static int x=1;//used for x cursor co-ordinate
#define pos gotoxy(33,x++) /*for cursor movement*/
#define ln  printf(".......................");

 COORD coord={0,0};
 void gotoxy(int x,int y);
void gotoxy(int x,int y)//function to set the cursor position
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(unsigned int mseconds)//function for delay
{
    clock_t goal=mseconds+clock();
    while(goal>clock());
}


void sett();//sets time limit for playing game
int t=30;
int c=0;

char name[15];
void getscore(int score,int speed,int level);
void startgame();  //to start the game
void scorecard();  //to update high score
void help();


//main function
int main()
{       int ch;

	time_t t;
	time(&t);
	x=1;
	system("cls");
	pos;
	printf("Welcome to typing tutor ");
	pos;
	printf("%s",ctime(&t));
	pos;
    //ln pos;
	if(c==0)
	   {	printf("\nEnter player's name:");
		gets(name);
	   }
	   c++;
	pos;ln pos;
		printf("MAIN MENU");pos;
		ln
		pos;
		printf("1.start game");
		pos;
		printf("2.scorecard");
		pos;
		printf("3.Set the time limit:");
		pos;
		printf("4.Help");
		pos;
		printf("Enter your choice:");
		scanf("%d",&ch);
		pos;
		switch(ch)
		{   case 1:startgame();break;
			case 2:scorecard();break;
			case 3:sett();main();
			case 4:help();break;
			default:main();
		}

getch();
}
