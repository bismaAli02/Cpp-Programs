#include <iostream>
#include <fstream>
using namespace std;
string Data, notFound = "What....why did you make this?";
fstream File;
int StartsIdx, EndIdx;
void ReadData()
{
    File.open("4DataProblem.txt", ios::in);
    getline(File, Data);
    File.close();
}
void Showdata()
{
    for (int i = StartsIdx; i < EndIdx; i++)
    {
        cout << Data[i];
    }
}
void GetIdx()
{
    int count = 0, found = 0;
    for (int i = 0; Data[i] != '\0'; i++)
    {
        if ((Data[i] == '"') && count == 0)
        {
            StartsIdx = i + 1;
            count++;
            found = 1;
        }
        else if ((Data[i] == '"') && count == 1)
        {
            EndIdx = i;
            count++;
            Showdata();
            break;
        }
    }
    if (found == 0)
    {
        cout << notFound << endl;
    }
}
void WriteData()
{
    File.open("4DataProblem.txt", ios::out);
    for (int i = StartsIdx; i < EndIdx; i++)
    {
        File << Data[i];
    }
    File.close();
}
main()
{
    ReadData();
    GetIdx();
    WriteData();
}