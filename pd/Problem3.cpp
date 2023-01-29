#include <iostream>
#include <string.h>
using namespace std;
string arr[4];
void Matches(string arr[4])
{
    for (int i = 1; i < 4; i++)
    {
        if (arr[i] != arr[0])
        {
            cout << "False";
            break;
        }
        else if ((i == 3) && arr[i] == arr[0])
        {
            cout << "True";
        }
    }
}
main()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    Matches(arr);
}