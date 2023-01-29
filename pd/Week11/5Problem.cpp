#include <iostream>
#include <fstream>
using namespace std;
string name;
int minOrder, minPrice[100];
string Price;
fstream File;
int count = 0;
int order, price;
int idx = 0;
void Input()
{
    cout << "Enter the no. of orders: ";
    cin >> order;
    cout << "Enter the Price: ";
    cin >> price;
}
string ParsePrice(string record, int field)
{
    int commaCount = 1;
    string item;
    for (int x = 1; x < record.length(); x++)
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
void PizzaPoints(int MinPrice)
{
    if (price <= MinPrice)
    {
        count++;
    }
}
void readData()
{
    File.open("5Costumer.txt", ios::in);
    while (!File.eof())
    {
        File >> name;
        File >> minOrder;
        File >> Price;
        for (int i = 1; i <= minOrder; i++)
        {
            minPrice[idx] = stoi(ParsePrice(Price, i));
            PizzaPoints(minPrice[idx]);
            // cout << minPrice[idx] << endl;
            idx++;
        }
        if (count >= order)
        {
            cout << name << endl;
        }

        // cout << name << minOrder << " " << Price << endl;
    }
    File.close();
}

main()
{
    Input();
    readData();
}