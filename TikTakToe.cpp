#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;
const int rows = 7;
const int col = 7;
char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '},
};
int User = 1;

void display()
{
    int numbering_along_y_axis = 0;
    HANDLE console_color;
    console_color = GetStdHandle(
        STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(
        console_color, 3);
    cout << "      A   B   C" << endl;
    for (int i = 0; i < 3; i++)
    {
        SetConsoleTextAttribute(
            console_color, 2);
        cout << "    ";
        for (int j = 0; j < 13; j++)
            cout << "-";
        cout << endl;
        for (int j = 0; j < 3; j++)
        {

            if (j == 0)
            {
                SetConsoleTextAttribute(
                    console_color, 3);
                cout << numbering_along_y_axis << " ";
                numbering_along_y_axis++;
            }
            SetConsoleTextAttribute(
                console_color, 2);
            cout << "  |";
            SetConsoleTextAttribute(
                console_color, 4);
            cout << board[i][j];
        }
        SetConsoleTextAttribute(
            console_color, 2);
        cout << "  |";
        cout
            << endl;
    }
    cout << "    ";
    for (int j = 0; j < 13; j++)
        cout << "-";
    cout << endl;
}

string User_Input()
{

    string Input;
    cout << "Player " << User << " its Your Turn : ";
    if (User == 1)
    {
        cin >> Input;
        User = 2;
    }
    else
    {
        cin >> Input;
        User = 1;
    }
    return Input;
}

void Filling_Of_Board(string Input)
{

    string temp(1, Input[0]);
    int row = stoi(temp);
    int col;
    char col_alpha = Input[1];
    if (board[row][col] == 'x' || board[row][col] == 'o')
        board[row][col] = ' ';
    else
    {
        if (col_alpha == 'A')
            col = 0;
        else if (col_alpha == 'B')
            col = 1;
        else if (col_alpha == 'C')
            col = 2;
        if (!(board[row][col] == 'o' || board[row][col] == 'x'))
        {
            if (User == 1)
                board[row][col] = 'x';
            else if (User == 2)
                board[row][col] = 'o';
        }
    }
}

bool chkRow()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 'x')
                count++;
        }
    }
    if (count == 3)
        return 1;
    else
        return 0;
}

int main()
{
    // cls
    while (1)
    {
        system("cls");
        display();
        Filling_Of_Board(User_Input());
    }

} //..End of main