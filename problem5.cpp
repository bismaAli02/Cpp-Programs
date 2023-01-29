#include <iostream>
#include <fstream>
#include <stream>
#include <string>
using namespace std;
int pizza_number, price;
void order()
{

    cout << "enter no of pizzas" << endl;
    cin >> pizza_number;
    cout << "enter minimum price" << endl;
    cin >> price;
}
int main()
{

    order();
    fstream file;

    string line;
    file.open("customer.txt", ios::in);

    while (!(file.eof()))
    {
        getline(file, line);
        string item;
        int num;
        int count = 0;
        int check = 0;

        for (int x = 0; line[x] != '\0'; x++)
        {

            if (line[x] == '[')
            {
                count = count + 1;
                continue;
            }

            if (count == 1)
            {

                if (line[x] != ',')
                {

                    item = item + line[x];
                }
                if (line[x] == ',' || line[x] == ']')
                {

                    num = stoi(item);

                    if (num >= price)
                    {
                        check = check + 1;
                    }
                    item = " ";
                }
            }
            // ______________num=0 bcz to remove previous values______________
            num = 0;
            if (check >= pizza_number)
            {

                for (int x = 0; line[x] != ' '; x++)
                {
                    cout << line[x];
                }
                cout << endl;
                break;
            }
        }
    }
    file.close();
}
