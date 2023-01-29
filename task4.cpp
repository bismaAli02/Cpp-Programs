#include <iostream>
#include <fstream>
using namespace std;

fstream file;
string name,word;
int age,count = 0;
char a;
int size = sizeof(word) / sizeof(word[0]);

// function to seperate name using readfile method
string namefun(string word)
{
    string  add;
    for (int i = 0; i < size; i++)
    {
        count = count + 1;
        if (word[i] == ',')
        {
            break;
        }
        else
        {

            add = add + word[i];
        }
        
    }
    return add;
}

//function to seperate age
string agefun(string word)
{
    string add;
    for (int i = count; i < size; i++)
    {
        
        if (word[i] == ',')
        {
            break;
        }
        else
        {

            add = add + word[i];
        }
        count = count + 1;
    }
    return add;
}

main()

{
    //readig file
    file.open("names.txt", ios::in);
    getline(file , word);
    file >> word; 
    name = namefun(word);
    //stoi used to convert string into int
    age = (stoi(agefun(word)));
    if(age%2 == 0)
    {
        a = '#';
    }
    else
    {
        a = '*';
    }
    for(int i = 0; i < 15; i++)
    {
        cout<<a;
    }
    cout<<endl;
    cout<<a<< " ";
    cout<<age <<"HB" <<name <<"!" <<age;
    cout<< " "<<a;
    cout<<endl;
    for(int i = 0; i < 15; i++)
    {
        cout<<a;
    }
    cout<<endl;
    
}





 

        