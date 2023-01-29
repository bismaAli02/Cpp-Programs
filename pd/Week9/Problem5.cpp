#include <iostream>
using namespace std;
string word1, word2;
int count = 0;
void Similarity()
{
    for (int i = 0; word1[i] != '\0'; i++)
    {
        for (int j = 0; word2[j] != '\0'; j++)
        {
            if (word1[i] == word2[j])
            {
                count++;
                word2[j] = ' ';
                break;
            }
        }
    }
}
main()
{
    cout << "Enter First word: ";
    cin >> word1;
    cout << "Enter Second word: ";
    cin >> word2;
    Similarity();

    cout << "Similar words are " << count;
}