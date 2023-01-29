#include <iostream>
#include <fstream>

using namespace std;
int main()
{

    string word;

    fstream file;
    file.open("data.txt", ios::out);
    cin >> word;
    file << word;
    file.close();

    fstream fi;

    int count = 0;
    fi.open("data.txt", ios::in);
    fi >> word;
    file.open("data.txt", ios::out);
    for (int x = 0; word[x] != '\0'; x++)
    {
        if (!(word[x] == '[' || word[x] == ']'))
        {

            count = count + 1;
            // cout << word[x];
            file << word[x];
        }
    }
    if (count == 0)
    {
        file << "what...why did you make this?";
    }
    file.close();
    fi.close();
    return 0;
}