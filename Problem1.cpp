#include <iostream>
using namespace std;
string name;
int count = 0;
void length()
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    if (count % 2 == 0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
main()
{
    cout << "Enter any word: ";
    cin >> name;
    length();
}