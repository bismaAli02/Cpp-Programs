#include <iostream>
using namespace std;
int main()
{
    int index;
    int swaps = 0;
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
                swaps++;
            }
        }
    }
    system("cls");
    cout << "Swaps  =  " << swaps << endl;

} //..End of main