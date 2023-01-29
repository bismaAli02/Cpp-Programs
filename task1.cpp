#include <iostream>
#include <fstream>
using namespace std;

fstream newfile;
string name;
int age;
string line;
char x;
int count = 0;
const int length = sizeof(line) / sizeof(line[0]);

string checkname(string line)
{
    string item;
    for (int i = 0; i < length; i++)
    {
        count = count + 1;
        if (line[i] == ',')
        {
            break;
        }
        else
        {

            item = item + line[i];
        }
    }
    return item;
}
string checkage(string line)
{
    string item;
    for (int i = count; i < length; i++)
    {
        count = count + 1;
        if (line[i] == ',')
        {
            break;
        }
        else
        {

            item = item + line[i];
        }
    }
    return item;
}

main()
{

    newfile.open("task1.txt", ios::in);
    getline(newfile , line);
    newfile >> line; 
    name = checkname(line);
    age = stoi(checkage(line));
    if(age%2 == 0)
    {
        x = '#';
    }
    else
    {
        x = '*';
    }
    for(int i = 0; i < 15; i++)
    {
        cout<<x;
    }
    cout<<endl;
    cout<<x<< " ";
    cout<<age <<"HB" <<name <<"!" <<age;
    cout<< " "<<x;
    cout<<endl;
    for(int i = 0; i < 15; i++)
    {
        cout<<x;
    }
    cout<<endl;
    
}