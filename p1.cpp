#include<iostream>
#include<fstream>
using namespace std;
int count = 0;
  fstream newFile;
// void Name()
// {
//    string line;
//    fstream newFile;
//    cout<<"Enter your name: ";
//    getline(cin , line);
//    newFile.open("Myname.txt", ios :: out);
//    newFile << line;
//    newFile.close();
// }
string checkname(string line);
string checkage(string line);
void getBirthadayCake(string name, int age);
main()
{
   // Name();
   string name;
   int age;
    getBirthadayCake(name,age);

}

string checkname(string line)
{
    string item;
     for (int i=0 ; line[i] != '\0'; i++)
       {
       while(line[i] != ',')
       { 
        item = item + line[i];
        count++;
       }
       }
    return item;
}
string checkage(string line)
{
    string item;
    
       for (int x = count; line[x] !='\0'; x++)
       {
           item = item + line[x];
       } 

    
    return item;
}

void getBirthadayCake(string name, int age)
{
   int count = 0;
   string line;
   newFile.open("Myname.txt", ios :: in);
   while((!newFile.eof()))
   {
    getline(newFile , line);
    newFile >> line; 
   }
   name = checkname(line);
   age = stoi(checkage(line));
   
   if (age%2== 0)
   {
       cout<<"###############"<<endl;
       cout<<"# "<<age<<" HB "<<name<<"! "<<age<<" #"<<endl;
       cout<<"###############";
   }
   else
   {
       cout<<"***************"<<endl;
       cout<<"* "<<age<<" HB "<<name<<"! "<<age<<" *"<<endl;
       cout<<"***************";
   }
}