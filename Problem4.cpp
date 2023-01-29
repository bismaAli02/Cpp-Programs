#include <iostream>
using namespace std;
int arr[3];
int n;
void Calculate()
{
    int mul = n * 2;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = arr[i] - mul;
        }
        else
        {
            arr[i] = arr[i] + mul;
        }
    }
}
main()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter how many times you want to perform the action: ";
    cin >> n;
    Calculate();
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << "\t";
    }
}