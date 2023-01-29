#include <iostream>
#include <fstream>
using namespace std;
const int size = 3;

bool myF(int ar[3][3], int colID, int rowID)
{
    for (int i = 0; i < size; i++)
    {
        if (ar[rowID][i] != ar[i][colID])
        {
            return false;
        }
    }
    return true;
}
bool myF1(int ar[size][size], int colID)
{
    for (int i = 0; i < size; i++)
    {
        if (myF(ar, colID, i))
        {
            return true;
        }
    }
    return false;
}
bool myF2(int ar[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (myF(ar, i, j))
            {
                return true;
            }
        }
    }
    return false;
}
main()
{
    int arr[size][size] = {
        {1, 2, 3},
        {2, 5, 8},
        {3, 8, 9}};
    cout << myF(arr, 1, 1) << endl;
    cout << myF1(arr, 1) << endl;
    cout << myF2(arr) << endl;
}