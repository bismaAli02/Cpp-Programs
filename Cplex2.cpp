#include <iostream>
using namespace std;
int main()
{
    int index;
    cout << "ENter Index of array : ";
    cin >> index;
    int arr[index];
    for (int i = 0; i < index; i++)
    {
        cout << "Enter " << i + 1 << " number : ";
        cin >> arr[i];
    }
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < index - 1; j++)
        {
            int temp;
            temp = arr[j];
            if (temp > arr[j + 1])
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    system("cls");
    int n;
    cout << "Which smallest integer u want : ";
    cin >> n;
    if (n > index)
        cout << "-1";
    else
    {
        cout << arr[n - 1];
    }

} //..End of main