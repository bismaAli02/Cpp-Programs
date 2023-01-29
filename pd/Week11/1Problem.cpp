#include <iostream>
#include <fstream>
using namespace std;
string name;
int age;
int idx = 0;
char hashOrStar = '#';
fstream WriteFile;
string parseRecord(string record, int field)
{
    int commaCount = 1;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount = commaCount + 1;
        }
        else if (commaCount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}
void inputData()
{
    string word;
    fstream f_variable;
    f_variable.open("Problem1Read.txt", ios::in);
    while (!(f_variable.eof()))
    {
        getline(f_variable, word);
        name = parseRecord(word, 1);
        age = stoi(parseRecord(word, 2));
    }
}
void HashOrStar()
{
    if (age % 2 == 0)
    {
        hashOrStar = '#';
    }
    else
    {
        hashOrStar = '*';
    }
}
void Print()
{
    WriteFile.open("Problem1Write.txt", ios::app);
    for (int i = 0; i < 15; i++)
    {
        cout << hashOrStar;
        WriteFile << hashOrStar;
    }
    WriteFile << "\n";
    cout << endl;
    WriteFile.close();
}
void BirthdayMSG()
{
    WriteFile.open("Problem1Write.txt", ios::app);
    cout << hashOrStar << age << " HB " << name << " " << age << hashOrStar << endl;
    WriteFile << hashOrStar << age << " HB " << name << " " << age << hashOrStar << endl;
    WriteFile.close();
}
main()
{
    inputData();
    HashOrStar();
    Print();
    BirthdayMSG();
    Print();
}