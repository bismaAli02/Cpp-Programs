#include <iostream>
using namespace std;
int number[9];
void Filling()
{
    for (int i = 0; i < 9; i++)
        cin >> number[i];
}
void sort_array()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            int temp;
            temp = number[j];
            if (temp > number[j + 1])
            {
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
}

int Missing()
{
    int chk = 1;
    int i;
    for (i = 0; i < 9; i++)
    {
        if (number[i] == chk)
        {
            chk++;
            continue;
        }
        else
            return chk;
    }
    return chk++;
    //return number[i];
}
int main()
{
    Filling();
    sort_array();
    cout << "Missing character is = " << Missing() << endl;
    // system("cls");
    // for (int i = 0; i < 9; i++)
    //     cout << number[i] << endl;

} //..End of main