#include <iostream>
using namespace std;
int arr[20];
bool IsRepeat(int length, int n)
{
    int m = n / length;
    m++;
    for (int i = length; i < n; i++)
    {
        if (arr[i] != arr[i - length])
        {
            return false;
        }
    }
    return true;
}
main()
{
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    int length;
    cout << "Enter the length of cycle: ";
    cin >> length;
    bool found;
    found = IsRepeat(length, n);

    cout << found;
}