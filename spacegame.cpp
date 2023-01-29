#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
char maize[16][34] = {{"###############################"},
					  {"#*****************************#"},
					  {"#  * * * * * * * * * % * * *  #"},
					  {"#  % * * * * * * * * * * *    #"},
					  {"#  * * * * * * % * * * * *    #"},
					  {"#    * * * * * %   * * * *    #"},
					  {"#                             #"},
					  {"#                             #"},
					  {"#                             #"},
					  {"#                             #"},
					  {"#                             #"},
					  {"#                             #"},
					  {"#                             #"},
					  {"#                             #"},
					  {"###############################"}};
int spaceX = 13;
int spaceY = 15;
bool game = true;
int score = 0;
int enemyX = 6;
int enemyY = 16;
int lives = 3;
int flag = 1;
int ghostdirection = 0;
char start;
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
void gameexit();
void header();
main()
{
	char start;
	header();
	cout << "Enter any Key To Start";
	cin >> start;
	system("cls");
	printmaize();
	gotoxy(spaceY, spaceX);
	cout << "<+>" << endl;
	while (game)
	{
		Sleep(100);
		printscore();
		live();
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
			game = false;
		}
		movefire();
		ghostmovement();
		moveenemyfire();
		if (lives <= 0)
		{
			game = false;
		}
		live();
	}
}
void printmaize()
{
	for (int x = 0; x < 16; x++)
	{
		for (int y = 0; y < 34; y++)
		{
			cout << maize[x][y];
		}
		cout << endl;
	}
}
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

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
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
}
void movefire()
{
	for (int x = 0; x < 16; x++)
	{
		for (int y = 0; y < 34; y++)
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
				}
				else if (maize[x - 1][y] == '%')
				{
					gotoxy(y, x - 1);
					cout << " ";
					maize[x - 1][y] = ' ';
					score = score + 5;
				}
			}
			if (maize[x][y] != '*' && maize[x][y] != '%')
			{
				flag = 0;
			}
		}
	}
}
int direction()
{
	srand(time(0));
	int result = 1 + (rand() % 4);
	return result;
}
void ghostmovement()
{
	int value = direction();
	gotoxy(enemyY, enemyX);
	cout << "E";
	maize[enemyX][enemyY] = 'E';
	if (ghostdirection == 0)
	{
		if (maize[enemyX][enemyY + 1] == ' ')
		{
			gotoxy(enemyY, enemyX);
			cout << " ";
			maize[enemyX][enemyY] = ' ';
			gotoxy(enemyY + 1, enemyX);
			cout << "E";
			maize[enemyX][enemyY + 1] = 'E';
			if (value == 1)
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
			cout << "E";
			maize[enemyX][enemyY - 1] = 'E';
			if (value == 1)
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

void moveenemyfire()
{
	for (int x = 16; x > 0; x--)
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
					lives--;
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

void printscore()
{
	gotoxy(38, 1);
	cout << " Your Score : " << score << endl;
}
void live()
{
	gotoxy(38, 2);
	cout << " Your Lives : " << lives << endl;
}
void header(){
   cout<<" Welcome"<<endl;	
}