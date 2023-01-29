#include <iostream>
#include <fstream>
using namespace std;
string Data;
string MorseCode[100];
int idx = 0;
fstream File;
void WriteData()
{
    File.open("3WriteMorse.txt", ios::out);
    for (int i = 0; i < idx; i++)
    {
        File << MorseCode[i] << endl;
    }
}
string ConvertToMorse()
{
    string Morse = "";
    for (int i = 0; i < Data.length(); i++)
    {
        if (Data[i] == 'A' || Data[i] == 'a')
        {

            Morse = Morse + ".-";
        }
        else if (Data[i] == 'B' || Data[i] == 'b')
        {

            Morse = Morse + "-...";
        }
        else if (Data[i] == 'C' || Data[i] == 'c')
        {

            Morse = Morse + "-.-.";
        }
        else if (Data[i] == 'D' || Data[i] == 'd')
        {

            Morse = Morse + "-..";
        }
        else if (Data[i] == 'E' || Data[i] == 'e')
        {

            Morse = Morse + ".";
        }
        else if (Data[i] == 'F' || Data[i] == 'f')
        {

            Morse = Morse + "..-.";
        }
        else if (Data[i] == 'G' || Data[i] == 'g')
        {

            Morse = Morse + "--.";
        }
        else if (Data[i] == 'H' || Data[i] == 'h')
        {

            Morse = Morse + "....";
        }
        else if (Data[i] == 'I' || Data[i] == 'i')
        {

            Morse = Morse + "..";
        }
        else if (Data[i] == 'J' || Data[i] == 'j')
        {

            Morse = Morse + ".---";
        }
        else if (Data[i] == 'K' || Data[i] == 'k')
        {

            Morse = Morse + "-.-";
        }
        else if (Data[i] == 'L' || Data[i] == 'l')
        {

            Morse = Morse + ".-..";
        }
        else if (Data[i] == 'M' || Data[i] == 'm')
        {

            Morse = Morse + "--";
        }
        else if (Data[i] == 'N' || Data[i] == 'n')
        {

            Morse = Morse + "-.";
        }
        else if (Data[i] == 'O' || Data[i] == 'o')
        {

            Morse = Morse + "---";
        }
        else if (Data[i] == 'P' || Data[i] == 'p')
        {

            Morse = Morse + ".--.";
        }
        else if (Data[i] == 'Q' || Data[i] == 'q')
        {

            Morse = Morse + "--.-";
        }
        else if (Data[i] == 'R' || Data[i] == 'r')
        {

            Morse = Morse + ".-.";
        }
        else if (Data[i] == 'S' || Data[i] == 's')
        {

            Morse = Morse + "...";
        }
        else if (Data[i] == 'T' || Data[i] == 't')
        {

            Morse = Morse + "-";
        }
        else if (Data[i] == 'U' || Data[i] == 'u')
        {

            Morse = Morse + "..-";
        }
        else if (Data[i] == 'V' || Data[i] == 'v')
        {

            Morse = Morse + "...-";
        }
        else if (Data[i] == 'W' || Data[i] == 'w')
        {

            Morse = Morse + ".--";
        }
        else if (Data[i] == 'X' || Data[i] == 'x')
        {

            Morse = Morse + "-..-";
        }
        else if (Data[i] == 'Y' || Data[i] == 'y')
        {

            Morse = Morse + "-.--";
        }
        else if (Data[i] == 'Z' || Data[i] == 'z')
        {

            Morse = Morse + "--..";
        }
        else if (Data[i] == '1')
        {

            Morse = Morse + ".----";
        }
        else if (Data[i] == '2')
        {

            Morse = Morse + "..---";
        }
        else if (Data[i] == '3')
        {

            Morse = Morse + "...--";
        }
        else if (Data[i] == '4')
        {

            Morse = Morse + "....-";
        }
        else if (Data[i] == '5')
        {

            Morse = Morse + ".....";
        }
        else if (Data[i] == '6')
        {

            Morse = Morse + "-....";
        }
        else if (Data[i] == '7')
        {

            Morse = Morse + "--...";
        }
        else if (Data[i] == '8')
        {

            Morse = Morse + "---..";
        }
        else if (Data[i] == '9')
        {

            Morse = Morse + "----.";
        }
        else if (Data[i] == '0')
        {

            Morse = Morse + "-----";
        }
        else if (Data[i] == ' ')
        {

            Morse = Morse + "-.-.-.-";
        }
        else if (Data[i] == '.')
        {

            Morse = Morse + ".-.-.-";
        }
        else if (Data[i] == ',')
        {

            Morse = Morse + "--..--";
        }
        else if (Data[i] == '?')
        {

            Morse = Morse + "..--..";
        }
        else if (Data[i] == ';')
        {

            Morse = Morse + "-.-.-.";
        }
        else if (Data[i] == ':')
        {

            Morse = Morse + "---...";
        }
        else if (Data[i] == '-')
        {

            Morse = Morse + "-....-";
        }
        else if (Data[i] == '/')
        {

            Morse = Morse + "-..-.";
        }
        else if (Data[i] == '\'')
        {

            Morse = Morse + ".----.";
        }
        else if (Data[i] == '\"')
        {

            Morse = Morse + ".-..-.";
        }
        else if (Data[i] == '_')
        {

            Morse = Morse + "..--.-";
        }
        else if (Data[i] == '+')
        {

            Morse = Morse + ".-.-.";
        }
        else if (Data[i] == '*')
        {

            Morse = Morse + "-..-";
        }
        else if (Data[i] == '=')
        {

            Morse = Morse + "-...-";
        }
        else if (Data[i] == '@')
        {

            Morse = Morse + ".--.-.";
        }
        else if (Data[i] == '(')
        {

            Morse = Morse + "-.--.";
        }
        else if (Data[i] == ')')
        {

            Morse = Morse + "-.--.-";
        }
    }

    return Morse;
}
void ReadData()
{
    File.open("3Read.txt", ios::in);
    while (!File.eof())
    {
        getline(File, Data);
        MorseCode[idx] = ConvertToMorse();
        cout << MorseCode[idx] << endl;
        idx++;
    }
    File.close();
}

main()
{
    ReadData();
    WriteData();
}