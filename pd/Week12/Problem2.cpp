#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
const int size = 3;
int arrA[size][size], arrB[size][size], arrC[size][size];
void ScreenCls();
char Menu();
main()
{
    system("cls");
    // while (1)
    // {
    //     char option = Menu();
    //     if (option == '1')
    //     {
    //     }
    //     else if (option == '2')
    //     {
    //     }
    //     else if (option == '3')
    //     {
    //     }
    //     else if (option == '4')
    //     {
    //     }
    //     else if (option == '5')
    //     {
    //     }
    //     else if (option == '6')
    //     {
    //     }
    //     else if (option == '7')
    //     {
    //     }
    //     else if (option == '8')
    //     {
    //     }
    //     else if (option == '9')
    //     {
    //     }
    //     else
    //     {
    //         cout << "Enter a valid option\n";
    //     }
    //     ScreenCls();
    // }
    cout << "Press1 to perform operations on two matrix\n";
    cout << "Press2 to check a perticular matrix\n";
    cout << "Press3 to print any of the arrays\n";
}
void ScreenCls()
{
    cout << "Enter any key to continue";
    getch();
    system("cls");
}
char Menu()
{
    cout << "Press1 To add Two Matrices\n";
    cout << "Press2 To subtract Two Matrices\n";
    cout << "Press3 To multiply Two Matrices\n";
    cout << "Press4 To multiply  Matrix with a scalar\n";
    cout << "Press5 To Check Identity Matrix\n";
    cout << "Press6 To Take Transpose\n";
    cout << "Press7 To Check Diagonal Matrix\n";
    cout << "Press8 To Check Symmetric Matrix\n";
    cout << "Press9 To Exit\n";
    char option;
    cin >> option;
    return option;
}