#include <iostream>
using namespace std;
int main()
{
    string word;
    cout << "enter word" << endl;
    getline(cin, word);
    for (int x = 0; word[x] != '\0'; x++)
    {

        if (word[x] == 'a' || word[x] == 'A')
        {
            cout << ".-";
        }
        if (word[x] == 'B' || word[x] == 'b')
        {
            cout << "-...";
        }
        if (word[x] == 'c' || word[x] == 'C')
        {
            cout << "-.-.";
        }
        if (word[x] == 'D' || word[x] == 'd')
        {
            cout << "-..";
        }
        if (word[x] == 'e' || word[x] == 'E')
        {
            cout << ".";
        }
        if (word[x] == 'F' || word[x] == 'f')
        {
            cout << "..-.";
        }
        if (word[x] == 'g' || word[x] == 'G')
        {
            cout << "--.";
        }
        if (word[x] == 'H' || word[x] == 'h')
        {
            cout << "....";
        }
        if (word[x] == 'i' || word[x] == 'I')
        {
            cout << "..";
        }
        if (word[x] == 'J' || word[x] == 'j')
        {
            cout << ".---";
        }
        if (word[x] == 'k' || word[x] == 'K')
        {
            cout << "-.-";
        }
        if (word[x] == 'L' || word[x] == 'l')
        {
            cout << ".-..";
        }
        if (word[x] == 'm' || word[x] == 'M')
        {
            cout << "--";
        }
        if (word[x] == 'N' || word[x] == 'n')
        {
            cout << "-.";
        }
        if (word[x] == 'o' || word[x] == 'O')
        {
            cout << "---";
        }
        if (word[x] == 'P' || word[x] == 'p')
        {
            cout << ".--.";
        }
        if (word[x] == 'q' || word[x] == 'Q')
        {
            cout << "--.-";
        }
        if (word[x] == 'R' || word[x] == 'r')
        {
            cout << ".-.";
        }
        if (word[x] == 's' || word[x] == 'S')
        {
            cout << "...";
        }
        if (word[x] == 'T' || word[x] == 't')
        {
            cout << "-";
        }
        if (word[x] == 'u' || word[x] == 'U')
        {
            cout << "..-";
        }
        if (word[x] == 'V' || word[x] == 'v')
        {
            cout << "...-";
        }
        if (word[x] == 'w' || word[x] == 'W')
        {
            cout << ".--";
        }
        if (word[x] == 'X' || word[x] == 'x')
        {
            cout << "-..-";
        }
        if (word[x] == 'y' || word[x] == 'Y')
        {
            cout << "-.--";
        }
        if (word[x] == 'Z' || word[x] == 'z')
        {
            cout << "--..";
        }
        if (word[x] == ' ' || word[x] == ' ')
        {
            cout << ".....";
        }
    }
}