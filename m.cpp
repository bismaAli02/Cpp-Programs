#include <iostream>
#include <fstream>
#include <time.h>
#include <windows.h>
using namespace std;

// Global Variable
char maze[24][71] = {
    {"#####################################################################"},
    {"||.. .....................................................  ......  ||"},
    {"||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||"},
    {"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"},
    {"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"},
    {"||..        %%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||"},
    {"||..        |%|       . . |%|...    ............... |%| ..       .  ||"},
    {"||..        %%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||"},
    {"||..               |%|.             |%|......       |%| ..    |%|.  ||"},
    {"||..     ......... |%|.        P    |%|......|%|        ..    |%|.  ||"},
    {"||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.  ||"},
    {"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||"},
    {"||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||"},
    {"||..|%|            .           ...|%|               |%| ..|%|.      ||"},
    {"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
    {"||...............................................   |%| ..........  ||"},
    {"||   ............................................          .......  ||"},
    {"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.      ||"},
    {"||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.      ||"},
    {"||..|%|            .     G     ...|%|               |%| ..|%|.      ||"},
    {"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
    {"||...............................................   |%| ..........  ||"},
    {"||  .............................................          .......  ||"},
    {"#####################################################################"}};

void displaymaze();
int pacmanX = 9;  // X Coordinate of Pacman
int pacmanY = 31; // Y Coordinate of Pacman
int score = 0;

int ghostX = 19; // X Coordinate of Ghost
int ghostY = 25; // Y Coordinate of Ghost
int ghost2X = 3;
int ghost2Y = 3;
int ghost3X = 14;
int ghost3Y = 14;
char previousItem = ' ';
char previousItem1 = ' ';
char previousItem3 = ' ';
void printMaze();
void calculateScore();
void printScore();
void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void movePacmanDown();
bool ghostMovement();
bool movement1();
bool movement3();
int gmovement = 1;
int gmovement3 = 1;
int ghostDirection();
void gotoxy(int x, int y);
void loadMaze();
// Main Function
main()
{
    loadMaze();
    bool gameRunning = true;
    bool gamerunning1 = true;
    bool gamerunning3 = true;
    system("CLS");
    printMaze();
    gotoxy(pacmanY, pacmanX);
    cout << "P";
    gotoxy(ghostY, ghostX);
    cout << "G";
    gotoxy(ghost2Y, ghost2X);
    cout << "I";
    gotoxy(ghost3Y, ghost3X);
    cout << "A";

    while (gameRunning && gamerunning1&&gamerunning3)
    {
        Sleep(100);
        // system("CLS");

        gameRunning = ghostMovement();
        gamerunning1 = movement1();
        gamerunning3=movement3();
        gotoxy(0, 26);
        printScore();
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePacmanLeft(); // Function call to move Pacman towards left
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePacmanRight(); // Function call to move Pacman towards right
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movePacmanUp(); // Function call to move Pacman towards up
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePacmanDown(); // Function call to move Pacman towards down
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false; // Stop the game
        }
        ghostDirection();
    }
    printScore();
}
void printMaze()
{
    for (int row = 0; row < 24; row = row + 1)
    {
        for (int col = 0; col < 71; col = col + 1)
        {
            cout << maze[row][col];
        }
        cout << endl;
    }
}
void calculateScore()
{
    score = score + 1;
}
void printScore()
{
    cout << endl
         << "Score: " << score << endl;
}
void movePacmanLeft()
{
    if (maze[pacmanX][pacmanY - 1] == ' ' || maze[pacmanX][pacmanY - 1] == '.')
    {

        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanY = pacmanY - 1;
        gotoxy(pacmanY, pacmanX);
        cout << "P";
        if (maze[pacmanX][pacmanY] == '.')
        {
            calculateScore();
        }
        maze[pacmanX][pacmanY] = 'P';
    }
}

void movePacmanRight()
{
    if (maze[pacmanX][pacmanY + 1] == ' ' || maze[pacmanX][pacmanY + 1] == '.')
    {
        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanY = pacmanY + 1;
        gotoxy(pacmanY, pacmanX);
        cout << "P";
        if (maze[pacmanX][pacmanY] == '.')
        {
            calculateScore();
        }

        maze[pacmanX][pacmanY] = 'P';
    }
}

void movePacmanUp()
{
    if (maze[pacmanX - 1][pacmanY] == ' ' || maze[pacmanX - 1][pacmanY] == '.')
    {
        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanX = pacmanX - 1;
        gotoxy(pacmanY, pacmanX);
        cout << "P";
        if (maze[pacmanX][pacmanY] == '.')
        {
            calculateScore();
        }

        maze[pacmanX][pacmanY] = 'P';
    }
}

void movePacmanDown()
{
    if (maze[pacmanX + 1][pacmanY] == ' ' || maze[pacmanX + 1][pacmanY] == '.')
    {
        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanX = pacmanX + 1;
        gotoxy(pacmanY, pacmanX);
        cout << "P";
        if (maze[pacmanX][pacmanY] == '.')
        {
            calculateScore();
        }

        maze[pacmanX][pacmanY] = 'P';
    }
}

int ghostDirection()
{
    srand(time(0));
    int result = 1 + (rand() % 4);
    return result;
}

bool ghostMovement()
{
    int value = ghostDirection();

    if (value == 1)
    {
        if (maze[ghostX][ghostY - 1] == ' ' || maze[ghostX][ghostY - 1] == '.' || maze[ghostX][ghostY - 1] == 'P')
        {
            gotoxy(ghostY, ghostX);
            cout << previousItem;
            // maze[ghostX][ghostY] = previousItem;
            ghostY = ghostY - 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
            gotoxy(ghostY, ghostX);
            cout << "G";
            maze[ghostX][ghostY] = 'G';
        }
        else if (maze[ghostX][ghostY - 1] == 'I')
        {
        }
    }
    else if (value == 2)
    {
        if (maze[ghostX][ghostY + 1] == ' ' || maze[ghostX][ghostY + 1] == '.' || maze[ghostX][ghostY + 1] == 'P')
        {
            gotoxy(ghostY, ghostX);
            cout << previousItem;
            maze[ghostX][ghostY] = previousItem;
            ghostY = ghostY + 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
            gotoxy(ghostY, ghostX);
            cout << "G";
            maze[ghostX][ghostY] = 'G';
        }
        else if (maze[ghostX][ghostY + 1] == 'I')
        {
        }
    }
    else if (value == 3)
    {
        if (maze[ghostX - 1][ghostY] == ' ' || maze[ghostX - 1][ghostY] == '.' || maze[ghostX - 1][ghostY] == 'P')
        {
            gotoxy(ghostY, ghostX);
            cout << previousItem;
            maze[ghostX][ghostY] = previousItem;
            ghostX = ghostX - 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
            gotoxy(ghostY, ghostX);
            cout << "G";
            maze[ghostX][ghostY] = 'G';
        }
        else if (maze[ghostX - 1][ghostY] == 'I')
        {
        }
    }
    else if (value == 4)
    {
        if (maze[ghostX + 1][ghostY] == ' ' || maze[ghostX + 1][ghostY] == '.' || maze[ghostX + 1][ghostY] == 'P')
        {
            gotoxy(ghostY, ghostX);
            cout << previousItem;
            maze[ghostX][ghostY] = previousItem;
            ghostX = ghostX + 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
            gotoxy(ghostY, ghostX);
            cout << "G";
            maze[ghostX][ghostY] = 'G';
        }
        else if (maze[ghostX + 1][ghostY] == 'I')
        {
        }
    }
    return 1;
}
bool movement1()
{
    gotoxy(ghost2Y, ghost2X);
    cout << previousItem1;
    maze[ghost2X][ghost2Y] = previousItem1;
    if (gmovement == 0)
    {
        if (maze[ghost2X - 1][ghost2Y] == ' ' || maze[ghost2X - 1][ghost2Y] == '.' || maze[ghost2X - 1][ghost2Y] == 'P')
        {
            ghost2X = ghost2X - 1;
            previousItem1 = maze[ghost2X][ghost2Y];
            gotoxy(ghost2Y, ghost2X);
            cout << "I";
            maze[ghost2X][ghost2Y] = 'I';
        }
        else if (maze[ghost2X - 1][ghost2Y] == 'G')
        {
        }

        else if (maze[ghost2X - 1][ghost2Y] == '#')
        {
            gmovement = 1;
        }
    }
    else if (gmovement == 1)
    {
        if (maze[ghost2X + 1][ghost2Y] == ' ' || maze[ghost2X + 1][ghost2Y] == '.' || maze[ghost2X + 1][ghost2Y] == 'P')
        {
            ghost2X = ghost2X + 1;
            previousItem1 = maze[ghost2X][ghost2Y];
            gotoxy(ghost2Y, ghost2X);
            cout << "I";
            maze[ghost2X][ghost2Y] = 'I';
        }
        else if (maze[ghost2X + 1][ghost2Y] == 'G')
        {
        }
        else if (maze[ghost2X + 1][ghost2Y] == '#')
        {
            gmovement = 0;
        }
    }
    if (pacmanX == ghost2X && pacmanY == ghost2Y)
    {
        return 0;
    }
    return 1;
}
bool movement3()
{
   gotoxy(ghost3Y,ghost3X);
   cout<<previousItem3;
   maze[ghost3X][ghost3Y]=previousItem3;
     if (gmovement3 == 0)
    {
        if (maze[ghost3X ][ghost3Y-1] == ' ' || maze[ghost3X ][ghost3Y-1] == '.' || maze[ghost3X ][ghost3Y-1] == 'P')
        {
            ghost3Y= ghost3Y- 1;
            previousItem3 = maze[ghost3X][ghost3Y];
            gotoxy(ghost3Y, ghost3X);
            cout << "A";
            maze[ghost3X][ghost3Y] = 'A';
        }
        
        else if (maze[ghost3X ][ghost3Y-1] == '#')
        {
            gmovement3 = 1;
        }
    }
    else if(gmovement3==1){
         if (maze[ghost3X ][ghost3Y+1] == ' ' || maze[ghost3X ][ghost3Y+1] == '.' || maze[ghost3X ][ghost3Y+1] == 'P')
        {
            ghost3Y= ghost3Y+ 1;
            previousItem1 = maze[ghost3X][ghost3Y];
            gotoxy(ghost3Y, ghost3X);
            cout << "A";
            maze[ghost3X][ghost3Y] = 'A';
        }
            else if (maze[ghost3X ][ghost3Y+1] == '#')
        {
            gmovement3 = 0;
        }
    }
    if (pacmanX == ghost3X && pacmanY == ghost3Y)
    {
        return 0;
    }
    return 1;

    }
  

void displaymaze()
{
    for (int row = 0; row < 24; row++)
    {
        for (int col = 0; col < 71; col++)
        {
            cout << maze[row][col];
        }
        cout << endl;
    }
}

void gotoxy(int x, int y) // Function Definition
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void loadMaze()
{
    fstream f;
    string x;
    f.open("maze.txt", ios::in);
    for (int row = 0; row < 24; row++)
    {
        getline(f, x);
        for (int col = 0; col < 71; col++)
        {
            maze[row][col] = x[col];
            if (maze[row][col] == 'P')
            {
                pacmanX = row;
                pacmanY = col;
            }
            if (maze[row][col] == 'G')
            {
                ghostX = row;
                ghostY = col;
            }
        }
    }
    f.close();
}
