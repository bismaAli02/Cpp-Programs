#include <iostream>
#include <fstream>
#include <conio.h>
#include <cmath>
#include <iomanip>
#include <time.h>
#include <windows.h>
using namespace std;
int bubbleX = 5;
int bubbleY = 11;
int enemyX = 2;
int enemyY = 5;
char pre_item = ' ';
//   bool gameRunning1 = bubble_movement();
void gotoxy(int x, int y);
void stre_maze();
void display_maze();
void load();
int score = 0;
void calculate_score();
void movebubbleleft();
void movebubbleright();
void movebubbleup();
void movebubbledown();
void print_result();
 char maze[24][71]; //={
//                    {"#####################################################################"},
//                    {"||.. .....................................................  ......  ||"},
//                    {"||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||"},
//                    {"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"},
//                    {"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"},
//                    {"||..        %%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||"},
//                    {"||..        |%|       . . |%|...    ............... |%| ..       .  ||"},
//                    {"||..        %%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||"},
//                    {"||..               |%|.             |%|......       |%| ..    |%|.  ||"},
//                    {"||..     ......... |%|.             |%|......|%|        ..    |%|.  ||"},
//                    {"||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.  ||"},
//                    {"||..|%|  |%|   |%|..     %%%%%%%%%%%%  ......|%|         .|%|.      ||"},
//                    {"||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||"},
//                    {"||..|%|            .           ...|%|               |%| ..|%|.      ||"},
//                    {"||..|%|  %%%%%%%%%%%%%         ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
//                    {"||...............................................   |%| ..........  ||"},
//                    {"||   ............................................          .......  ||"},
//                    {"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.      ||"},
//                    {"||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.      ||"},
//                    {"||..|%|            .           ...|%|               |%| ..|%|.      ||"},
//                    {"||..|%|  %%%%%%%%%%%%%         ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
//                    {"||...............................................   |%| ..........  ||"},
//                    {"||  .............................................          .......  ||"},
//                    {" #####################################################################"}};

                   
                   

void stre_maze()
{
    fstream file;
    file.open("maz.txt", ios ::out);
    for (int r = 0; r < 24; r++)
    {
        if (r > 0)
        {
            file << endl;
        }
        for (int c = 0; c < 71; c++)
        {
            file << maze[r][c];
        }
    }
    file.close();
}
void load()
{
   string line;
    fstream file;
    file.open("maz.txt", ios::in);
    for (int r = 0; r < 24; r++)
    {
        getline(file, line);
        for (int c = 0; c < 71; c++)
        {
            maze[r][c] = line[c];
            if (maze[r][c] == 'P')
            {
                bubbleX = r;
                bubbleY = c;
            }
            if (maze[r][c] == 'G')
            {
                enemyX = r;
                enemyY = c;
            }
        }
    }
    file.close();
}
void display_maze()
{
    for (int r = 0; r < 24; r++)
    {
        for (int c = 0; c < 71; c++)
        {
            cout << maze[r][c];
        }
        cout << endl;
    }
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void calculate_score()
{
    score = score + 1;
}
void movebubbleleft()
{
    // if (maze[bubbleX + 1][bubbleY] != '#')
    {
        if ((maze[bubbleX][bubbleY - 1] == ' ') || (maze[bubbleX][bubbleY - 1] == '.') || (maze[bubbleX][bubbleY - 1] == ','))
        {
            maze[bubbleX][bubbleY] = pre_item;
            gotoxy(bubbleY, bubbleX);
            cout << " ";
            bubbleY = bubbleY - 1;
            gotoxy(bubbleY, bubbleX);
            cout << "G";
            if (maze[bubbleX][bubbleY] == '.' || maze[bubbleX][bubbleY] == ',')
            {
                calculate_score();
            }
        }
    }
}
void movebubbleright()
{
    //  if (maze[bubbleX + 1][bubbleY] != '#')
    {
        if ((maze[bubbleX][bubbleY + 1] == ' ') || (maze[bubbleX][bubbleY + 1] == '.') || (maze[bubbleX][bubbleY + 1] == ','))
        {
            maze[bubbleX][bubbleY] = pre_item;
            gotoxy(bubbleY, bubbleX);
            cout << " ";
            bubbleY = bubbleY + 1;
            gotoxy(bubbleY, bubbleX);
            cout << "G";
            if (maze[bubbleX][bubbleY] == '.' || maze[bubbleX][bubbleY] == ',')
            {
                calculate_score();
            }
            maze[bubbleX][bubbleY] = 'G';
        }
    }
}
void movebubbleup()
{
    // if (maze[bubbleX + 1][bubbleY] != '#')
    {
        if ((maze[bubbleX - 1][bubbleY] == ' ') || (maze[bubbleX - 1][bubbleY] == '.') || (maze[bubbleX - 1][bubbleY] == ','))
        {
            maze[bubbleX][bubbleY] = pre_item;
            gotoxy(bubbleY, bubbleX);
            cout << " ";
            bubbleX = bubbleX - 1;
            gotoxy(bubbleY, bubbleX);
            cout << "G";
            if (maze[bubbleX][bubbleY] == '.' || maze[bubbleX][bubbleY] == ',')
            {
                calculate_score();
            }
        }
    }
}
void movebubbledown()
{
    // if (maze[bubbleX + 1][bubbleY] != '#')
    {
        if ((maze[bubbleX + 1][bubbleY] == ' ') || (maze[bubbleX + 1][bubbleY] == '.') || (maze[bubbleX + 1][bubbleY] == ','))
        {
            maze[bubbleX][bubbleY] = pre_item;
            gotoxy(bubbleY, bubbleX);
            cout << " ";
            bubbleX = bubbleX + 1;
            gotoxy(bubbleY, bubbleX);
            cout << "G";
            if (maze[bubbleX][bubbleY] == '.' || maze[bubbleX][bubbleY] == ',')
            {
                calculate_score();
            }
        }
    }
}
void print_result()
{
    gotoxy(75, 4);
    cout << "Total score: " << score << endl;
}
int main()
{
    load();
    bool gameRunning1 = true;
      system("CLS");
    display_maze();
    gotoxy(bubbleY, bubbleX);
    cout << "G";
    while (gameRunning1)
    {
        Sleep(50);
        // print_result();
        // total_lives();
        // timer();
        //  gameRunning1 = ghost_movement();
        if (GetAsyncKeyState(VK_LEFT))
        {
            movebubbleleft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movebubbleright();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movebubbleup();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movebubbledown();
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning1 = false; // stop the game
        }
    }
   // stre_maze();
}
