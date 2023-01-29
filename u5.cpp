#include <iostream>
#include <fstream>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

char space[24][71] = {
    {"#####################################################################"},
    {"||                                                                  ||"},
    {"||                                                                  ||"},
    {"||                                                                  ||"},
    {"||                                                                  ||"},
    {"||          %%%%%%%%                 %%%%%%%%%%%%%%                 ||"},
    {"||                                                                  ||"},
    {"||          %%%%%%%%%%              %%%%%%%%%%%%                    ||"},
    {"||                                                                  ||"},
    {"||                                                                  ||"},
    {"||                                                                  ||"},
    {"||                                                        |%|       ||"},
    {"||           |%|                           |%|            |%|       ||"},
    {"||  |%|                           |%|               |%|   |%|       ||"},
    {"||  |%|  %%%%%%%%%%%%%            |%|%%%%%%%%%%     |%|   |%|       ||"},
    {"||                                                  |%|             ||"},
    {"||                                                                  ||"},
    {"||  |%|                                             |%|   |%|       ||"},
    {"||  |%|                           |%|     %%%%%%    |%|   |%|       ||"},
    {"||  |%|                           |%|               |%|   |%|       ||"},
    {"||  |%|  %%%%%%%%%%%%%            |%|%%%%%%%%%%     |%|   |%|       ||"},
    {"||                                                  |%|             ||"},
    {"||                                                                  ||"},
    {" #####################################################################"}};
////// global variables////////
int spaceX = 22;
int spaceY = 31;
char p_item = ' ';
char h_item = ' ';
char h2_item = ' ';
char h3_item = ' ';
char h4_item = ' ';
char f_item = ' ';
int hurdleX1 = 19;
int hurdleY1 = 25;
int hurdleX2 = 10;
int hurdleX3 = 14;
int hurdleY2 = 60;
int hurdleY3 = 22;
int hurdleX4 = 16;
int hurdleY4 = 50;
int levelup = 0;
int level = 1;
int lives = 3;
bool gameRunning1 = true;
bool gameRunning2 = true;
bool gameRunning3 = true;
bool gameRunning4 = true;
bool H1Live = true;
bool H2Live = true;
bool H3Live = true;
bool H4Live = true;
int score = 0;

/////   /       prototypes/////////
void display_Space();
void movespaceshipLeft();
void movespaceshipRight();
void movespaceshipUp();
void movespaceshipDown();
void gotoxy(int x, int y);
int hurdel_direction();
bool hurdle_movement();
bool hurdle2_movement();
bool hurdle3_movement();
bool hurdle4_movement();
void split_fire();
void MoveFire();
void health();
void total_lives();
void calculate_score();
void print_result();
void header();
void split_hurdle_fire1();
void split_hurdle_fire2();
void split_hurdle_fire3();
void split_hurdle_fire4();
void hurdle_fire();

main()
{
    system("CLS");
    display_Space();
    header();
    gotoxy(spaceY, spaceX);
    cout << "+";
    while (gameRunning1 && gameRunning2 && gameRunning3 && gameRunning4)
    {
        Sleep(50);
        total_lives();
        print_result();
        if (H1Live)
        {
            gameRunning1 = hurdle_movement();
        }
        if (H2Live)
        {
            gameRunning2 = hurdle2_movement();
        }
        if (H3Live)
        {
            gameRunning3 = hurdle3_movement();
        }
        if (H4Live)
        {
            gameRunning4 = hurdle4_movement();
        }

        if (GetAsyncKeyState(VK_LEFT))
        {
            movespaceshipLeft();
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            movespaceshipRight();
        }

        if (GetAsyncKeyState(VK_UP))
        {
            movespaceshipUp();
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            movespaceshipDown();
        }

        if (GetAsyncKeyState(VK_SPACE))
        {
            split_fire();
        }

        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning1 = false; // stop the game
        }
        MoveFire();
        health();
    }
}

void display_Space()
{
    for (int r = 0; r < 24; r++)
    {
        for (int c = 0; c < 71; c++)
        {
            cout << space[r][c];
        }
        cout << endl;
    }
}

void movespaceshipLeft()
{
    if ((space[spaceX][spaceY - 1] == ' ') || (space[spaceX][spaceY - 1] == 'o'))
    {
        space[spaceX][spaceY] = p_item;
        gotoxy(spaceY, spaceX);
        cout << " ";
        spaceY = spaceY - 1;
        gotoxy(spaceY, spaceX);
        cout << "+";

        if (space[spaceX][spaceY] == 'o')
        {
            lives++;
        }
    }
}

void movespaceshipRight()
{
    if ((space[spaceX][spaceY + 1] == ' ') || (space[spaceX][spaceY + 1] == 'o'))
    {
        space[spaceX][spaceY] = p_item;
        gotoxy(spaceY, spaceX);
        cout << " ";
        spaceY = spaceY + 1;
        gotoxy(spaceY, spaceX);
        cout << "+";

        if (space[spaceX][spaceY] == 'o')
        {
            lives++;
        }
    }
}

void movespaceshipUp()
{
    if ((space[spaceX - 1][spaceY] == ' ') || (space[spaceX - 1][spaceY] == 'o'))
    {
        space[spaceX][spaceY] = p_item;
        gotoxy(spaceY, spaceX);
        cout << " ";
        spaceX = spaceX - 1;
        gotoxy(spaceY, spaceX);
        cout << "+";
    }

    if (space[spaceX][spaceY] == 'o')
    {
        lives++;
    }
}

void movespaceshipDown()
{
    if ((space[spaceX + 1][spaceY] == ' ') || (space[spaceX + 1][spaceY] == 'o'))
    {
        space[spaceX][spaceY] = p_item;
        gotoxy(spaceY, spaceX);
        cout << " ";
        spaceX = spaceX + 1;
        gotoxy(spaceY, spaceX);
        cout << "+";

        if (space[spaceX][spaceY] == 'o')
        {
            lives++;
        }
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int hurdle_direction()
{
    srand(time(0));
    int result = 1 + (rand() % 4);
    return result;
}

bool hurdle_movement()
{
    int move = hurdle_direction();
    if (move == 1)
    {
        if ((space[hurdleX1][hurdleY1 - 1] == ' ') || (space[hurdleX1][hurdleY1 - 1] == '+'))
        {
            space[hurdleX1][hurdleY1] = h_item;
            gotoxy(hurdleY1, hurdleX1);
            cout << h_item;
            gotoxy(hurdleY1, hurdleX1);
            cout << " ";
            hurdleY1 = hurdleY1 - 1;
            h_item = space[hurdleX1][hurdleY1];
            if (space[hurdleX1][hurdleY1] == 'Y')
            {
                hurdle_movement();
            }
            else
            {
                gotoxy(hurdleY1, hurdleX1);
                cout << "Y";
                space[hurdleX1][hurdleY1] = 'Y';
            }
        }
    } // move left

    if (move == 2)
    {
        if ((space[hurdleX1][hurdleY1 + 1] == ' ') || (space[hurdleX1][hurdleY1 + 1] == '+'))
        {
            space[hurdleX1][hurdleY1] = h_item;
            gotoxy(hurdleY1, hurdleX1);
            cout << h_item;
            gotoxy(hurdleY1, hurdleX1);
            cout << " ";
            hurdleY1 = hurdleY1 + 1;
            h_item = space[hurdleX1][hurdleY1];
            if (space[hurdleX1][hurdleY1] == 'Y')
            {
                hurdle_movement();
            }
            else
            {
                gotoxy(hurdleY1, hurdleX1);
                cout << "Y";
                space[hurdleX1][hurdleY1] = 'Y';
            }
        } // move right
    }

    if (move == 3)
    {
        if ((space[hurdleX1 - 1][hurdleY1] == ' ') || (space[hurdleX1 - 1][hurdleY1] == '+'))
        {
            space[hurdleX1][hurdleY1] = h_item;
            gotoxy(hurdleY1, hurdleX1);
            cout << h_item;
            gotoxy(hurdleY1, hurdleX1);
            cout << " ";
            hurdleX1 = hurdleX1 - 1;
            h_item = space[hurdleX1][hurdleY1];
            if (space[hurdleX1][hurdleY1] == 'Y')
            {
                hurdle_movement();
            }
            else
            {
                gotoxy(hurdleY1, hurdleX1);
                cout << "Y";
                space[hurdleX1][hurdleY1] = 'Y';
            }
        } // move up
    }
    if (move == 4)
    {
        if ((space[hurdleX1 + 1][hurdleY1] == ' ') || (space[hurdleX1 + 1][hurdleY1] == '+'))
        {
            space[hurdleX1][hurdleY1] = h_item;
            gotoxy(hurdleY1, hurdleX1);
            cout << h_item;
            gotoxy(hurdleY1, hurdleX1);
            cout << " ";
            hurdleX1 = hurdleX1 + 1;
            h_item = space[hurdleX1][hurdleY1];
            if (space[hurdleX1][hurdleY1] == 'Y')
            {
                hurdle_movement();
            }
            else
            {
                gotoxy(hurdleY1, hurdleX1);
                cout << "Y";
                space[hurdleX1][hurdleY1] = 'Y';
            }
        }

    } // move down

    if (spaceX == hurdleX1 && spaceY == hurdleY1)
    {
        gotoxy(hurdleY1, hurdleX1);
        cout << "Y";
        return 0;
    }
    split_hurdle_fire1();
    return 1;
}

/////////////////  2nd hurdle ////////////

bool hurdle2_movement()
{
    int move = hurdle_direction();
    if (move == 1)
    {
        if ((space[hurdleX2][hurdleY2 - 1] == ' ') || (space[hurdleX2][hurdleY2 - 1] == '+'))
        {
            space[hurdleX2][hurdleY2] = h2_item;
            gotoxy(hurdleY2, hurdleX2);
            cout << h2_item;
            gotoxy(hurdleY2, hurdleX2);
            cout << " ";
            hurdleY2 = hurdleY2 - 1;
            h2_item = space[hurdleX2][hurdleY2];
            if (space[hurdleX2][hurdleY2] == 'Y')
            {
                hurdle2_movement();
            }
            else
            {
                gotoxy(hurdleY2, hurdleX2);
                cout << "Y";
                space[hurdleX2][hurdleY2] = 'Y';
            }
        }
    } // move left

    if (move == 2)
    {
        if ((space[hurdleX2][hurdleY2 + 1] == ' ') || (space[hurdleX2][hurdleY2 + 1] == '+'))
        {
            space[hurdleX2][hurdleY2] = h2_item;
            gotoxy(hurdleY2, hurdleX2);
            cout << h2_item;
            gotoxy(hurdleY2, hurdleX2);
            cout << " ";
            hurdleY2 = hurdleY2 + 1;
            h2_item = space[hurdleX2][hurdleY2];
            if (space[hurdleX2][hurdleY2] == 'Y')
            {
                hurdle2_movement();
            }
            else
            {
                gotoxy(hurdleY2, hurdleX2);
                cout << "Y";
                space[hurdleX2][hurdleY2] = 'Y';
            }
        } // move right
    }

    if (move == 3)
    {
        if ((space[hurdleX2 - 1][hurdleY2] == ' ') || (space[hurdleX2 - 1][hurdleY2] == '+'))
        {
            space[hurdleX2][hurdleY2] = h2_item;
            gotoxy(hurdleY2, hurdleX2);
            cout << h2_item;
            gotoxy(hurdleY2, hurdleX2);
            cout << " ";
            hurdleX2 = hurdleX2 - 1;
            h2_item = space[hurdleX2][hurdleY2];
            if (space[hurdleX2][hurdleY2] == 'Y')
            {
                hurdle2_movement();
            }
            else
            {
                gotoxy(hurdleY2, hurdleX2);
                cout << "Y";
                space[hurdleX2][hurdleY2] = 'Y';
            }
        } // move up
    }
    if (move == 4)
    {
        if ((space[hurdleX2 + 1][hurdleY2] == ' ') || (space[hurdleX2 + 1][hurdleY2] == '+'))
        {
            space[hurdleX2][hurdleY2] = h2_item;
            gotoxy(hurdleY2, hurdleX2);
            cout << h2_item;
            gotoxy(hurdleY2, hurdleX2);
            cout << " ";
            hurdleX2 = hurdleX2 + 1;
            h2_item = space[hurdleX2][hurdleY2];
            if (space[hurdleX2][hurdleY2] == 'Y')
            {
                hurdle2_movement();
            }
            else
            {
                gotoxy(hurdleY2, hurdleX2);
                cout << "Y";
                space[hurdleX2][hurdleY2] = 'Y';
            }
        }
    } // move down
    if (spaceX == hurdleX2 && spaceY == hurdleY2)
    {
        gotoxy(hurdleY2, hurdleX2);
        cout << "Y";
        return 0;
    }
   split_hurdle_fire2();
    return 1;
}

////////////  3rd hurdel /////////////

bool hurdle3_movement()
{
    int move = hurdle_direction();
    if (move == 1)
    {
        if ((space[hurdleX3][hurdleY3 - 1] == ' ') || (space[hurdleX3][hurdleY3 - 1] == '+'))
        {
            space[hurdleX3][hurdleY3] = h3_item;
            gotoxy(hurdleY3, hurdleX3);
            cout << h3_item;
            gotoxy(hurdleY3, hurdleX3);
            cout << " ";
            hurdleY3 = hurdleY3 - 1;
            h3_item = space[hurdleX3][hurdleY3];
            if (space[hurdleX3][hurdleY3] == 'Y')
            {
                hurdle3_movement();
            }
            else
            {
                gotoxy(hurdleY3, hurdleX3);
                cout << "Y";
                space[hurdleX3][hurdleY3] = 'Y';
            }
        }
    } // move left

    if (move == 2)
    {
        if ((space[hurdleX3][hurdleY3 + 1] == ' ') || (space[hurdleX3][hurdleY3 + 1] == '+'))
        {
            space[hurdleX3][hurdleY3] = h3_item;
            gotoxy(hurdleY3, hurdleX3);
            cout << h3_item;
            gotoxy(hurdleY3, hurdleX3);
            cout << " ";
            hurdleY3 = hurdleY3 + 1;
            h3_item = space[hurdleX3][hurdleY3];
            if (space[hurdleX3][hurdleY3] == 'Y')
            {
                hurdle3_movement();
            }
            else
            {
                gotoxy(hurdleY3, hurdleX3);
                cout << "Y";
                space[hurdleX3][hurdleY3] = 'Y';
            }

        } // move right
    }

    if (move == 3)
    {
        if ((space[hurdleX3 - 1][hurdleY3] == ' ') || (space[hurdleX3 - 1][hurdleY3] == '+'))
        {
            space[hurdleX3][hurdleY3] = h3_item;
            gotoxy(hurdleY3, hurdleX3);
            cout << h3_item;
            gotoxy(hurdleY3, hurdleX3);
            cout << " ";
            hurdleX3 = hurdleX3 - 1;
            h3_item = space[hurdleX3][hurdleY3];
            if (space[hurdleX3][hurdleY3] == 'Y')
            {
                hurdle3_movement();
            }
            else
            {
                gotoxy(hurdleY3, hurdleX3);
                cout << "Y";
                space[hurdleX3][hurdleY3] = 'Y';
            }
        } // move up
    }
    if (move == 4)
    {
        if ((space[hurdleX3 + 1][hurdleY3] == ' ') || (space[hurdleX3 + 1][hurdleY3] == '+'))
        {
            space[hurdleX3][hurdleY3] = h3_item;
            gotoxy(hurdleY3, hurdleX3);
            cout << h3_item;
            gotoxy(hurdleY3, hurdleX3);
            cout << " ";
            hurdleX3 = hurdleX3 + 1;
            h3_item = space[hurdleX3][hurdleY3];
            if (space[hurdleX3][hurdleY3] == 'Y')
            {
                hurdle3_movement();
            }
            else
            {
                gotoxy(hurdleY3, hurdleX3);
                cout << "Y";
                space[hurdleX3][hurdleY3] = 'Y';
            }
        }
    } // move down
    if (spaceX == hurdleX3 && spaceY == hurdleY3)
    {
        gotoxy(hurdleY3, hurdleX3);
        cout << "Y";
        return 0;
    }
  //  split_hurdle_fire3();
    return 1;
}

///////  4th hurdle ////////////

bool hurdle4_movement()
{
    int move = hurdle_direction();
    if (move == 1)
    {
        if ((space[hurdleX4][hurdleY4 - 1] == ' ') || (space[hurdleX4][hurdleY4 - 1] == '+'))
        {
            space[hurdleX4][hurdleY4] = h4_item;
            gotoxy(hurdleY4, hurdleX4);
            cout << h4_item;
            gotoxy(hurdleY4, hurdleX4);
            cout << " ";
            hurdleY4 = hurdleY4 - 1;
            h4_item = space[hurdleX4][hurdleY4 - 1];
            if (space[hurdleX4][hurdleY4] == 'Y')
            {
                hurdle4_movement();
            }
            else
            {
                gotoxy(hurdleY4, hurdleX4);
                cout << "Y";
                space[hurdleX4][hurdleY4] = 'Y';
            }
        }
    } // move left

    if (move == 2)
    {
        if ((space[hurdleX4][hurdleY4 + 1] == ' ') || (space[hurdleX4][hurdleY4 + 1] == '+'))
        {
            space[hurdleX4][hurdleY4] = h4_item;
            gotoxy(hurdleY4, hurdleX4);
            cout << h4_item;
            gotoxy(hurdleY4, hurdleX4);
            cout << " ";
            hurdleY4 = hurdleY4 + 1;
            h4_item = space[hurdleX4][hurdleY4];
            if (space[hurdleX4][hurdleY4] == 'Y')
            {
                hurdle4_movement();
            }
            else
            {
                gotoxy(hurdleY4, hurdleX4);
                cout << "Y";
                space[hurdleX4][hurdleY4] = 'Y';
            }

        } // move right
    }

    if (move == 3)
    {
        if ((space[hurdleX4 - 1][hurdleY4] == ' ') || (space[hurdleX4 - 1][hurdleY4] == '+'))
        {
            space[hurdleX4][hurdleY4] = h4_item;
            gotoxy(hurdleY4, hurdleX4);
            cout << h4_item;
            gotoxy(hurdleY4, hurdleX4);
            cout << " ";
            hurdleX4 = hurdleX4 - 1;
            h4_item = space[hurdleX4][hurdleY4];
            if (space[hurdleX4][hurdleY4] == 'Y')
            {
                hurdle4_movement();
            }
            else
            {
                gotoxy(hurdleY4, hurdleX4);
                cout << "Y";
                space[hurdleX4][hurdleY4] = 'Y';
            }

        } // move up
    }
    if (move == 4)
    {
        if ((space[hurdleX4 + 1][hurdleY4] == ' ') || (space[hurdleX4 + 1][hurdleY4] == '+'))
        {
            space[hurdleX4][hurdleY4] = h4_item;
            gotoxy(hurdleY4, hurdleX4);
            cout << h4_item;
            gotoxy(hurdleY4, hurdleX4);
            cout << " ";
            gotoxy(hurdleY4, hurdleX4);
            cout << " ";
            hurdleX4 = hurdleX4 + 1;
            h4_item = space[hurdleX4][hurdleY4];
            if (space[hurdleX4][hurdleY4] == 'Y')
            {
                hurdle4_movement();
            }
            else
            {
                gotoxy(hurdleY4, hurdleX4);
                cout << "Y";
                space[hurdleX4][hurdleY4] = 'Y';
            }
        }
    } // move down

    if (spaceX == hurdleX4 && spaceY == hurdleY4)
    {
        gotoxy(hurdleY4, hurdleX4);
        cout << "Y";
        return 0;
    }
  // split_hurdle_fire4();
    return 1;
}

void split_fire()
{
    if (space[spaceX - 1][spaceY] != '|' && space[spaceX - 1][spaceY] != '#' && space[spaceX - 1][spaceY] != '%')
    {
        gotoxy(spaceY, spaceX - 1);
        cout << ".";
        space[spaceX - 1][spaceY] = '.';
    }
}
void MoveFire()
{
    for (int r = 0; r < 24; r++)
    {
        for (int c = 0; c < 71; c++)
        {
            if (space[r][c] == '.')
            {
                gotoxy(c, r);
                cout << " ";
                space[r][c] = ' ';
                if (space[r - 1][c] != '|' && space[r - 1][c] != '#' && space[r - 1][c] != '%' && space[r - 1][c] != 'o')
                {
                    gotoxy(c, r - 1);
                    cout << ".";
                    if (space[r - 1][c] == 'Y')
                    {
                        score = score + 5;
                        gotoxy(c, r - 1);
                        cout << "o ";
                        space[r - 1][c] = 'o';
                        levelup ++;
                        if (hurdleX1 == r - 1 && hurdleY1 == c)
                        {
                            H1Live = false;
                        }
                        if (hurdleX2 == r - 1 && hurdleY2 == c)
                        {
                            H2Live = false;
                        }
                        if (hurdleX3 == r - 1 && hurdleY3 == c)
                        {
                            H3Live = false;
                        }
                        if (hurdleX4 == r - 1 && hurdleY4 == c)
                        {
                            H4Live = false;
                        }
                    }
                    else if (space[r - 1][c] == ',')
                    {
                        gotoxy(c, r - 1);
                        cout << ".";
                        space[r - 1][c] = '.';
                    }
                    else
                    {
                        space[r - 1][c] = '.';
                    }
                }
            }
        }
    }
}
void health()
{
    bool total_lives = gameRunning1 && gameRunning2 && gameRunning3 && gameRunning4;
    if (!total_lives)
    {
        if (lives != 0)
        {
            gameRunning1 = true;
            gameRunning2 = true;
            gameRunning3 = true;
            gameRunning4 = true;
            gotoxy(spaceY, spaceX);
            cout << " ";
            spaceX = 22;
            spaceY = 31;
            gotoxy(spaceY, spaceX);
            cout << "+";
            lives--;
        }
        else
        {
            system("CLS");
            cout << "///////////////////////////////////////" << endl;
            cout << "//             GAME OVER             //" << endl;
            cout << "///////////////////////////////////////" << endl;
        }
    }
}

void total_lives()
{
    gotoxy(75, 16);
    cout << "Total lives: " << lives;
}

void calculate_score()
{
    score = score + 1;
}

void print_result()
{
    gotoxy(75, 10);
    cout << "-------------------------------";
    gotoxy(75, 11);
    cout << "--        SCORE BOARD        --";
    gotoxy(75, 12);
    cout << "-------------------------------";
    gotoxy(75, 14);
    cout << "Total score: " << score;
    gotoxy(75, 18);
    cout << "Level: " <<level ;

}

void header()
{

    gotoxy(75, 0);
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    gotoxy(75, 1);
    cout << "|||||               SPACE INVADERS               |||||" << endl;
    gotoxy(75, 2);
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
}

void hurdle_fire()
{

    for (int r = 23; r > 0; r--)
    {
        for (int c = 0; c < 71; c++)
        {
            if (space[r][c] == ',')
            {
                gotoxy(c, r);
                cout << " ";
                space[r][c] = ' ';
                if (space[r + 1][c] != '|' && space[r + 1][c] != '#' && space[r + 1][c] != '%')
                {
                    // if (space[r + 1][c] == '+')
                    if (spaceX == r + 1 && spaceY == c)
                    {
                        gotoxy(c, r + 1);
                        cout << " ";
                        space[r + 1][c] = ' ';
                        lives--;
                        spaceX = 22;
                        spaceY = 31;
                        gotoxy(spaceY, spaceX);
                        cout << "+";
                    }
                    else
                    {
                        gotoxy(c, r + 1);
                        cout << ",";
                        space[r + 1][c] = ',';
                    }
                }
            }
        }
    }
}

void split_hurdle_fire1()
{
    if (space[hurdleX1 + 1][hurdleY1] != '|' && space[hurdleX1 + 1][hurdleY1] != '#' && space[hurdleX1 + 1][hurdleY1] != '%')
    {
        gotoxy(hurdleY1, hurdleX1 + 1);
        cout << ",";
        space[hurdleX1 + 1][hurdleY1] = ',';
        hurdle_fire();
    }
}



void split_hurdle_fire2()
{
    if (space[hurdleX2 + 1][hurdleY2] != '|' && space[hurdleX2 + 1][hurdleY2] != '#' && space[hurdleX2 + 1][hurdleY2] != '%')
    {
        gotoxy(hurdleY2, hurdleX2 + 1);
        cout << ",";
        space[hurdleX2 + 1][hurdleY2] = ',';
        hurdle_fire();
    }
}

void split_hurdle_fire3()
{
    if (space[hurdleX3 + 1][hurdleY3] != '|' && space[hurdleX3 + 1][hurdleY3] != '#' && space[hurdleX3 + 1][hurdleY3] != '%')
    {
        gotoxy(hurdleY3, hurdleX3 + 1);
        cout << ",";
        space[hurdleX3 + 1][hurdleY3] = ',';
        hurdle_fire();
    }
}

void split_hurdle_fire4()
{
    if (space[hurdleX4 + 1][hurdleY4] != '|' && space[hurdleX4 + 1][hurdleY4] != '#' && space[hurdleX4 + 1][hurdleY4] != '%')
    {
        gotoxy(hurdleY4, hurdleX4 + 1);
        cout << ",";
        space[hurdleX4 + 1][hurdleY4] = ',';
        hurdle_fire();
    }
}