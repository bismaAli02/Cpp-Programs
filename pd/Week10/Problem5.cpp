#include <iostream>
using namespace std;
int n;
// int arr[];
bool Consecutive(int arr[], int sorted[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (sorted[i] != arr[i])
        {
            return false;
        }
    }
    return true;
}
bool index(int arr[], int n)
{
    int sorted[n];
    sorted[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        sorted[i] = i + 1;
    }

    bool IsConsecutive = Consecutive(arr, sorted, n);
    return IsConsecutive;
}
bool Sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    bool Found = index(arr, n);
    return Found;
}

main()
{
    cout << "Enter the length of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value" << i + 1 << ": ";
        cin >> arr[i];
    }
    bool found;
    found = Sort(arr, n);
    cout << found;
}