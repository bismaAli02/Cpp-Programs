#include <iostream>
using namespace std;
int n;
void miniPeaks(int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i != n - 1)
        {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            {
                cout << arr[i] << "\t";
            }
        }
    }
}
main()
{
    cout << "Enter the length of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    miniPeaks(arr);
}