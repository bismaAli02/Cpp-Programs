#include <iostream>
using namespace std;

int arr[5] = {5, 4, 6, 8, 11};
int temp, idx, highest_idx;
int largest;

// function
int highest(int s)
{
    largest = -1;
    for (int i = s; i < 5; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
            idx = i;
        }
    }
    return idx;
}

main()
{
    for (int s = 0; s < 5; s++)
    {
        highest_idx = highest(s);
        temp = arr[highest_idx];
        arr[highest_idx] = arr[s];
        arr[s] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}