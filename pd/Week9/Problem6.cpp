#include <iostream>
using namespace std;
string colors[10];
int n;
void Time()
{
    int timeInColor = n * 2;
    int TimeInChange = (n - 1) * 1;

    for (int i = 0; i < n; i++)
    {
        if (colors[i] == colors[i + 1])
        {
            TimeInChange = TimeInChange - 1;
        }
    }
    int sum = timeInColor + TimeInChange;
    cout << "Total time required is: " << sum << " seconds";
}
main()
{
    cout << "Enter how many colors you want to add: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter color " << i + 1 << ": ";
        cin >> colors[i];
    }
    Time();
}