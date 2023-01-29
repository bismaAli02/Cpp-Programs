#include <iostream>
using namespace std;
int n = 10;
void sevenBoom(int arr[10])
{
    int seven;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 7)
        {
            cout << "Boom";
            seven = 7;
            break;
        }
    }
    if (seven != 7)
    {
        cout << "There is no 7 in the array";
    }
}
main()
{
    // int n;
    cout << "Enter how many numbers you want to add: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    sevenBoom(arr);
}