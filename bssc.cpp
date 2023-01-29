#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>
using namespace std;
// Data Structures

char maize[19][34];// = {{"###############################"},
					//   {"#  *************************  #"},
					//   {"#  * * * * * * * * * % * * *  #"},
					//   {"#  % * * * * * * * * * * *    #"},
					//   {"#  * * * * * * % * * * * *    #"},
					//   {"#    * * * * * %   * * * *    #"},
					//   {"#                             #"},
					//   {"#                             #"},
					//   {"#                             #"},
					//   {"#                             #"},
					//   {"#                             #"},
					//   {"#                             #"},
					//   {"#                             #"},
					//   {"#                             #"},
					//   {"#                             #"},
					//   {"#                             #"},
					//   {"#                             #"},	  				
					//   {"###############################"}};			
    
int spaceY = 15;
int spaceX=16;
bool game = true;
int score = 0;
int enemyX = 6;
int enemyY = 19;
int enemyX2=7;
int enemyY2=14;
int enemyX3=8;
int enemyY3=9;
int lives = 23;
int count=0;
int totalfire=200;
int ghostdirection = 0;
char start;
int count1=0;
int healthofship=3;

// Function Prototypes

void printmaize();
void gotoxy(int x, int y);
void moveright();
void moveleft();
void fire();
void movefire();
void ghostmovement();
void moveenemyfire();
void printscore();
void display();
int direction();
void live();
void firecount();
void gameexit();
void header();
void ghost2movement();
void ghost3movement();
void health();
void moveenemy2fire();
void moveenemy3fire();
void savefile();
void loadfromfile();

// Main

main()
{ 
	char start;
	header();
	cout << "Enter any Key To Start :" <<endl;;
	cin >> start;
	system("cls");
	printmaize();
	savefile();
	gotoxy(spaceY, spaceX);
	cout << "<+>" << endl;
	while (game)
	{
		Sleep(100);
		printscore();
		live();
		health();
		if (GetAsyncKeyState(VK_RIGHT))
		{
			moveright();
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			moveleft();
		}
		if (GetAsyncKeyState(VK_UP))
		{
			fire();
		}

		if (GetAsyncKeyState(VK_ESCAPE))
		{  
			system("cls");
			header();
			cout<<" Game Over " <<endl;
			cout<<" Your Score : " << score <<endl;
			game = false;
		}
		movefire();
		ghostmovement();
		moveenemyfire();
			if (healthofship== 0)
		{
	    	lives--;
	    	healthofship=3;
	    	if(lives==0){
	    	system("cls");
	    	header();
			cout<<" Game Over " <<endl;
			cout<<" Your Score : " << score <<endl;
			game = false;				
			}
		}
        ghost2movement();
        moveenemy2fire();
         ghost3movement();
        moveenemy3fire();
		if(count1==72)
		{
			system("CLS");
			cout<<"hurrayyyy you won the game"<<endl;
           break;
		}
}
}

// Main Ends
// Function to Print Maize
void printmaize()
{ 
    loadfromfile();
	for(int x=0; x<19; x++){
	for(int y=0; y<34; y++){
	cout<< maize[x][y];	
	}
	cout<<endl;	
	}		
}	    
// Function To move Ship Right
void moveright()
{

	if (maize[spaceX][spaceY + 3] == ' ')
	{
		gotoxy(spaceY, spaceX);
		cout << " ";
		gotoxy(spaceY - 1, spaceX);
		cout << " ";
		gotoxy(spaceY + 1, spaceX);
		cout << " ";
		maize[spaceX][spaceY - 1] = ' ';
		maize[spaceX][spaceY] = ' ';
		maize[spaceX][spaceY + 1] = ' ';
		spaceY = spaceY + 1;
		gotoxy(spaceY - 1, spaceX);
		cout << "<";
		gotoxy(spaceY + 1, spaceX);
		cout << ">";
		gotoxy(spaceY, spaceX);
		cout << "+";
		maize[spaceX][spaceY - 1] = '<';
		maize[spaceX][spaceY] = '+';
		maize[spaceX][spaceY + 1] = '>';
	}
}
// Function To move Ship Left
void moveleft()
{
	if (maize[spaceX][spaceY - 3] == ' ')
	{
		gotoxy(spaceY, spaceX);
		cout << " ";
		gotoxy(spaceY - 1, spaceX);
		cout << " ";
		gotoxy(spaceY + 1, spaceX);
		cout << " ";
		maize[spaceX][spaceY - 1] = ' ';
		maize[spaceX][spaceY] = ' ';
		maize[spaceX][spaceY + 1] = ' ';
		spaceY = spaceY - 1;
		gotoxy(spaceY - 1, spaceX);
		cout << "<";
		gotoxy(spaceY + 1, spaceX);
		cout << ">";
		gotoxy(spaceY, spaceX);
		cout << "+";
		maize[spaceX][spaceY - 1] = '<';
		maize[spaceX][spaceY] = '+';
		maize[spaceX][spaceY + 1] = '>';
	}
}
// Function of GotoXY
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
// Function For the Ship to Fire
void fire()
{ 

	gotoxy(spaceY, spaceX - 1);
	cout << "|";
	maize[spaceX - 1][spaceY] = '|';
	gotoxy(spaceY, spaceX);
	cout << "+";
	gotoxy(spaceY - 1, spaceX);
	cout << "<";
	gotoxy(spaceY + 1, spaceX);
	cout << ">";
	totalfire--;	
}
// Function for the Ship to move fire
void movefire()
{
	for (int x = 0; x < 19; x++)
	{
		for (int y = 0; y <34; y++)
		{
			if (maize[x][y] == '|')
			{
				gotoxy(y, x);
				cout << " ";
				maize[x][y] = ' ';
				if (maize[x - 1][y] != '#' && maize[x - 1][y] != '*' && maize[x - 1][y] != '%')
				{
					gotoxy(y, x - 1);
					cout << "|";
					maize[x - 1][y] = '|';
				}
				else if (maize[x - 1][y] == '*')
				{
					gotoxy(y, x - 1);
					cout << " ";
					maize[x - 1][y] = ' ';
					score++;
					count1++;
				}
				else if (maize[x - 1][y] == '%')
				{
					gotoxy(y, x - 1);
					cout << " ";
					maize[x - 1][y] = ' ';
					score = score + 5;
					count1++;
				}
			}
			
		}
	}
}
// Function for Direction
int direction()
{
	srand(time(0));
	int result = 1 + (rand() % 4);
	return result;
}
// Function for the movement of First Enemy
void ghostmovement()
{
	int value=direction();
	gotoxy(enemyY, enemyX);
	cout << "=";
	maize[enemyX][enemyY] = '=';
	if (ghostdirection == 0)
	{
		if (maize[enemyX][enemyY + 1] == ' ')
		{
			gotoxy(enemyY, enemyX);
			cout << " ";
			maize[enemyX][enemyY] = ' ';
			gotoxy(enemyY + 1, enemyX);
			cout << "=";
			maize[enemyX][enemyY + 1] = '=';
			if (value==1)
			{
				gotoxy(enemyY + 1, enemyX + 1);
				cout << 'o';
				maize[enemyX + 1][enemyY + 1] = 'o';
			}
			enemyY = enemyY + 1;
			if (maize[enemyX][enemyY + 1] == '#')
			{
				ghostdirection = 1;
			}
		}
	}
	if (ghostdirection == 1)
	{
		if (maize[enemyX][enemyY - 1] == ' ')
		{
			gotoxy(enemyY, enemyX);
			cout << " ";
			maize[enemyX][enemyY] = ' ';
			gotoxy(enemyY - 1, enemyX);
			cout << "=";
			maize[enemyX][enemyY - 1] = '=';
			if (value==1)
			{
				gotoxy(enemyY - 1, enemyX + 1);
				cout << 'o';
				maize[enemyX + 1][enemyY - 1] = 'o';
			}
			enemyY = enemyY - 1;
			if (maize[enemyX][enemyY - 1] == '#')
			{
				ghostdirection = 0;
			}
		}
	}
}
// Function For the firing of First Enemy
void moveenemyfire()
{
	for (int x = 19; x > 0; x--)
	{
		for (int y = 0; y < 34; y++)
		{
			if (maize[x][y] == 'o')
			{
				gotoxy(y, x);
				cout << " ";
				maize[x][y] = ' ';
				if (maize[x + 1][y] == '<' || maize[x + 1][y] == '+' || maize[x + 1][y] == '>')
				{
					healthofship--;
				}
				if (maize[x + 1][y] != '#' && maize[x + 1][y] != '<' && maize[x + 1][y] != '+' && maize[x + 1][y] != '>')
				{
					gotoxy(y, x + 1);
					cout << 'o';
					maize[x + 1][y] = 'o';
				}
			}
		}
	}
}
// Function To Print Score
void printscore()
{
	gotoxy(38, 1);
	cout << " Your Score : " << score << endl;
}
// Function to display Head
void header(){
   cout<<" ************************************************" <<endl;
   
   cout<<"           STAR     SHOOTER    GAME "             <<endl;
                     
   cout<<"*************************************************" <<endl;            	
}
// Function For the movement of Second Enemy
void ghost2movement(){
	int value=direction();
	gotoxy(enemyY2, enemyX2);
	cout << "=";
	maize[enemyX2][enemyY2] = '=';
	if (ghostdirection == 1)
	{
		if (maize[enemyX2][enemyY2 + 1] == ' ')
		{
			gotoxy(enemyY2, enemyX2);
			cout << " ";
			maize[enemyX2][enemyY2] = ' ';
			gotoxy(enemyY2 + 1, enemyX2);
			cout << "=";
			maize[enemyX2][enemyY2 + 1] = '=';
			if (value==2)
			{
				gotoxy(enemyY2 + 1, enemyX2 + 1);
				cout << 'o';
				maize[enemyX2 + 1][enemyY2 + 1] = 'o';
			}
			enemyY2 = enemyY2 + 1;
			if (maize[enemyX2][enemyY2 + 1] == '#')
			{
				ghostdirection = 0;
			}
		}
	}
	if (ghostdirection == 0)
	{
		if (maize[enemyX2][enemyY2 - 1] == ' ')
		{
			gotoxy(enemyY2, enemyX2);
			cout << " ";
			maize[enemyX2][enemyY2] = ' ';
			gotoxy(enemyY2 - 1, enemyX2);
			cout << "=";
			maize[enemyX2][enemyY2 - 1] = '=';
		  if(value==2){
				gotoxy(enemyY2 - 1, enemyX2 + 1);
				cout << 'o';
				maize[enemyX2 + 1][enemyY2 - 1] = 'o';
			}
			enemyY2 = enemyY2 - 1;
			if (maize[enemyX2][enemyY2 - 1] == '#')
			{
				ghostdirection = 0;
			}
		}
	}
}
void firecount(){
gotoxy(38,3);
cout<<" Fires  : " << totalfire <<endl;	
}
// Function for the movemt Of third Enemy
void ghost3movement(){
int value=direction();
int value1=direction();
	gotoxy(enemyY3, enemyX3);
	cout << "=";
	maize[enemyX3][enemyY3] = '=';
	if (value1==1)
	{
		if (maize[enemyX3][enemyY3+1] == ' ')
		{
			gotoxy(enemyY3, enemyX3);
			cout << " ";
			maize[enemyX3][enemyY3] = ' ';
			gotoxy(enemyY3+1, enemyX3);
			cout << "=";
			maize[enemyX3][enemyY3+1] = '=';
			if (value1==1)
			{
				gotoxy(enemyY3+1, enemyX3+1);
				cout << 'o';
				maize[enemyX3+1][enemyY3+1] = 'o';
			}
			enemyY3= enemyY3 + 1;
			if (maize[enemyX3][enemyY3+1] == '#')
			{
				value1==2;
			}
		}
	}
	if (value1==2)
	{
		if (maize[enemyX3][enemyY3- 1]==' ')
		{
			gotoxy(enemyY3, enemyX3);
			cout << " ";
			maize[enemyX3][enemyY3] = ' ';
			gotoxy(enemyY3-1, enemyX3);
			cout << "=";
			maize[enemyX3][enemyY3-1] = '=';
		  if(value1==2){
				gotoxy(enemyY3-1, enemyX3+1);
				cout << 'o';
				maize[enemyX3+1][enemyY3-1] = 'o';
			}
			enemyY3 = enemyY3-1;
			if (maize[enemyX3][enemyY3-1] == '#')
			{
				value1=1;
			}
		}
	}
}
// Function for the lives of ship
void live()
{
	gotoxy(38, 2);
	cout << " Your Lives : " << lives << endl;
}
// Function for the Health of ship
void health(){
 gotoxy(38,3);
 cout<<" Health : " <<healthofship <<endl;	
}
// Function For the Firing Of second Enemy
void moveenemy2fire(){
for (int x = 19; x > 0; x--)
	{
		for (int y = 0; y < 34; y++)
		{
			if (maize[x][y] == 'o')
			{
				gotoxy(y, x);
				cout << " ";
				maize[x][y] = ' ';
				if (maize[x + 1][y] == '<' || maize[x + 1][y] == '+' || maize[x + 1][y] == '>')
				{
					healthofship--;
				}
				if (maize[x + 1][y] != '#' && maize[x + 1][y] != '<' && maize[x + 1][y] != '+' && maize[x + 1][y] != '>')
				{
					gotoxy(y, x + 1);
					cout << 'o';
					maize[x + 1][y] = 'o';
				}
			}
		}
	}
}
// Function For the Firing of the Third Enemy
void moveenemy3fire(){
for (int x = 19; x > 0; x--)
	{
		for (int y = 0; y < 34; y++)
		{
			if (maize[x][y] == 'o')
			{
				gotoxy(y, x);
				cout << " ";
				maize[x][y] = ' ';
				if (maize[x + 1][y] == '<' || maize[x + 1][y] == '+' || maize[x + 1][y] == '>')
				{
					healthofship--;
				}
				if (maize[x + 1][y] != '#' && maize[x + 1][y] != '<' && maize[x + 1][y] != '+' && maize[x + 1][y] != '>')
				{
					gotoxy(y, x + 1);
					cout << 'o';
					maize[x + 1][y] = 'o';
				}
			}
		}
	}
}
// Function To save the maize in the file
void savefile(){
fstream file;
string line;
file.open("Maze.txt",ios::out);
for(int x=0; x<19; x++){
for(int y=0; y<34; y++){
file << maize[x][y];	
}
file <<endl;	
}	
file.close();	
}
void loadfromfile(){
    string line;
    fstream file;
    file.open("maze.txt", ios::in);
    for (int r = 0; r < 19; r++)
    {
        getline(file, line);
        for (int c = 0; c < 34; c++)
        {
            maize[r][c] = line[c];
       
         }
    }
    file.close();
}
// ____________________Game Over__________________






