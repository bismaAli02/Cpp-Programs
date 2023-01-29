#include <iostream>
using namespace std;
int n;
int LetterCounter(char arr[])
{
    char letter;
    int x = 0;
    cout << "Enter the letter you want to find: ";
    cin >> letter;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == letter)
        {
            x++;
        }
    }
    return x;
}
main()
{

    cout << "Enter length of array: ";
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1;
        cin >> arr[i];
    }

    int x = LetterCounter(arr);
    cout << x;
}