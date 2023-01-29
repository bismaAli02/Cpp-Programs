#include <iostream>
using namespace std;
int code;
string MOVES[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
string Code[4];
void Trans()
{
    string code;
    cout << "Enter your Pin: ";
    cin >> code;
    int x = 0;
    int a;
    int exit = 0;
    while (code[x] != '\0')
    {
        a = code[x] - 48;
        for (int i = 0; i < 10; i++)
        {
            if (a == i)
            {
            }
            if (i == 9 && a != i)
            {
                cout << "Invalid Input";
                exit = 1;
                break;
            }
        }
        if (exit == 1)
        {
            break;
        }

        if (a == 9 && x != 0)
        {
            a = 0;
            a = a + x - 1;
        }
        else
        {
            a = a + x;
        }
        Code[x] = MOVES[a];
        cout << Code[x] << "\t";
        x++;
    }
}
main()
{
    Trans();
}