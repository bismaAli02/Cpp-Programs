#include <iostream>
#include <fstream>
using namespace std;
fstream Alphabets;
string alphabetsInput;
string missing;
int missingIdx = 0;
void input()
{
    Alphabets.open("2alphabetsProblem.txt", ios::out);
    cout << "Enter: ";
    getline(cin, alphabetsInput);
    Alphabets << alphabetsInput << endl;
    Alphabets.close();
}
void Missing()
{
    Alphabets.open("2alphabetsProblem.txt", ios::in);
    Alphabets >> missing;
    for (int i = 0; missing[i] != '\0'; i++)
    {
        for (int j = i + 1; missing[j] != '\0'; j++)
        {
            if (missing[i] > missing[j])
            {
                char temp;
                temp = missing[j];
                missing[j] = missing[i];
                missing[i] = temp;
            }
        }
    }
    Alphabets.close();
}
void AppMissing()
{
    Alphabets.open("2alphabetsProblem.txt", ios::app);
    int Idx = 0;
    for (int i = 97; i < 123; i++)
    {
        if (char(missing[Idx]) != i)
        {
            cout << char(i);
            Alphabets << char(i);
        }
        else
        {
            Idx++;
        }
    }
    Alphabets.close();
}
main()
{
    input();
    Missing();
    AppMissing();
}