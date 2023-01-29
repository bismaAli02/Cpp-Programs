#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    string word;
    file.open("alph.txt", ios::out);
    cin >> word;
    file << word;
    file.close();
    int v;
    file.open("alph.txt", ios::app);
    file >> word;
    for (int y = 97; y <= 122; y++)
    {
        for (int x = 0; word[x] != '\0'; x++)
        {

            if (char(y) == word[x])
            {
                v = 0;
                break;
            }
            v = 1;
        }
        if (v == 1)
        {
            cout << char(y) << endl;
            char a = char(y);
            file << a << endl;
        }
    }
    file.close();
}