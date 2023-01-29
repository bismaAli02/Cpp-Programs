
#include <iostream>
#include <stdlib.h>
using namespace std;

void displayBoard(char[][3], const int, const int);
void playerInput(char board[][3],int&, int&,int);
bool gameEnder(char board[][3],int ,char& );


int main()
{
    const int row = 3, column = 3;
    int pr[2],pc[2] ;
    char board[row][column];
    char whoWins;
    cout << "Player 1 will always chose X and Player 2 will chose O.\n Always Begin the row and column input from 0.\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column;j++) {
            board[i][j] = '*';
        }
    }
    cout << endl;
    displayBoard(board, row, column);
    bool winOrLose = false;
    int p ;
    for (p=1;!winOrLose;)
    {
        playerInput(board,pr[p - 1], pc[p - 1], p);
        system("CLS");
        cout <<endl;
        displayBoard(board, row, column);
        winOrLose = gameEnder(board,p,whoWins);
        if (p == 2)
            p = 1;
        else
            p++;
    }

    if (whoWins=='X')
        cout << "Player 1 has Won. ";
    else if (whoWins=='O')
        cout << "Player 2 has Won. ";
    else 
        cout << "It was a draw.";
    cout << endl;
    system("pause");
    return 0;

}

void displayBoard(char board[][3],const int row,const int column) {
    for (int i = 0; i < row; i++)
    {
        cout << "\t \t|\t \t|\n";
        for (int j = 0; j < column; j++)
        {
            
            if (board[i][j]=='*')
            {
                cout << "\t \t";

            }
            else {
                cout << "\t" << board[i][j] << "\t";
            }
            if (j==0||j==1)
            {
                cout << "|";
            }

        }
        cout << endl;
        cout << "\t \t|\t \t|\n";
        if (i==0||i==1)
        {
            cout << " ";
            for (size_t i = 0; i < 49; i++)
            {
                cout << "-";
            }
        }
        cout << endl;
    }
}
void playerInput(char board[][3],int& pr,int& pc,int p) {
    char symbol;
    if (p == 1)
        symbol = 'X';
    else
        symbol = 'O';
    cout << "Enter Player " << p << " row(0-2): ";
    cin >> pr;
    while (!(pr>=0&&pr<=2))
    {
        cout << "The input was wrong.\n";
        cout << "Enter Player " << p << " row(0-2): ";
        cin >> pr;
    }
    cout << "Enter Player " << p << " column(0-2): ";
    cin >> pc;
    while (!(pc >= 0 && pc <= 2))
    {
        cout << "The input was wrong.\n";
        cout << "Enter Player " << p << " column(0-2): ";
        cin >> pc;
    }
    if (board[pr][pc] == 'X' || board[pr][pc] == 'O') {
        cout << "It already has a symbol.\n";
        playerInput(board,pr,pc,p);
    }
    else {
        board[pr][pc] = symbol;
    }
}
bool gameEnder(char board[][3],int p,char& whoWins) {
    char checker;
    static int counter=0;
    counter++  ;
    if (p == 1)
        checker = 'X';
    else
        checker = 'O';
    //Checking in Columns
    for (int c = 0; c < 3; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            if (board[r][c] != checker)
                break;
            if (r == 2) {
                whoWins = checker;
                return true;
            }
        }
    }
    //Checking in Rows
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (board[r][c] != checker)
                break;
            if (c == 2) {
                whoWins = checker;
                return true;
            }
        }
    }
    //Checking in Diagonal
    for (int c = 0,r=0; c < 3&&r<3; c++,r++)
    {
        if (board[r][c] != checker)
            break;
        if (r == 2) {


            whoWins = checker;
            return true;
        }
        
    }
    //Checking in Anti-Diagonal
    for (int c = 2, r = 0; c >-1 && r < 3; c--, r++)
    {
        if (board[r][c] != checker)
            break;
        if (r == 2) {
            whoWins = checker;
            return true;
        }

    }
    if (counter==9)
    {
        whoWins = 'D';
        return true;

    }
    return false;
}