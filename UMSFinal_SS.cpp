//________Header Files________________
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// _____________________Prototypes________________
void mainHeader();
char adminMenu();
void clearScreen();
string loginMenu();
void addStudent();
void viewAllStudents();
void subheader();
char studentMenu();
void addStudentIntoArray(string name, float matric, float fsc, float ecat, string p1, string p2, string p3);
int seatManagementMenu();
void viewSeatsDetails();
void addUser(string name, string pass, string role);
void print_Recd();
float aggrigate(float matric, float fsc, float ecat);
void generate_Mlist();
int studentInfo();

//_____________________Data Structures_______________________
const int MAX_RECORDS = 20;
string usernameA[MAX_RECORDS];
string passwordsA[MAX_RECORDS];
string rolesA[MAX_RECORDS];
int userCount = 0;

int count = 0;
string student_name[MAX_RECORDS];
float student_ecat[MAX_RECORDS];
float student_matric[MAX_RECORDS];
float student_fsc[MAX_RECORDS];
string student_pref1[MAX_RECORDS];
string student_pref2[MAX_RECORDS];
string student_pref3[MAX_RECORDS];
float aggr[MAX_RECORDS];

int entry_count = 0;
string department[] = {"CS", "CE", "EE"};
int seats[] = {0, 0, 0};
int capacity = 0;
bool announce = false;
string username;
//_____________ Main function___________
main()
{
    addUser("admin", "123", "ADMIN");
    //__________DEFAULT VALUE SET__________
    string who = " ";
    while (true)
    {
        who = loginMenu();
        if (who == "ADMIN")
        {
            char option = ' ';
            while (true)
            {
                system("cls");
                option = adminMenu();
                if (option == '1')
                {
                    addStudent();
                }
                else if (option == '2')
                {
                    viewAllStudents();
                }
                else if (option == '3')
                {
                    //----------Print the record in merit order
                    print_Recd();
                    viewAllStudents();
                }
                else if (option == '4')
                {
                    //------------ Generate merit list
                    generate_Mlist();
                }
                else if (option == '5')
                {
                    //------------ Add Users
                    cout << "Enter username........ ";
                    string username;
                    cin >> username;
                    cout << "Enter password........ ";
                    string pass;
                    cin >> pass;
                    cout << "Enter role........";
                    string role;
                    cin >> role;
                    addUser(username, pass, role);
                }
                else if (option == '6')
                {
                    while (true)
                    {
                        system("cls");
                        int dpIndex = seatManagementMenu();
                        if (dpIndex == 1 || dpIndex == 2 || dpIndex == 3)
                        {
                            cout << "Enter New Capacity for " << department[dpIndex - 1] << endl;
                            cin >> capacity;
                            seats[dpIndex - 1] = capacity;
                        }
                        else if (dpIndex == 4)
                        {
                            viewSeatsDetails();
                            clearScreen();
                        }
                        else if (dpIndex == 5)
                        {
                            break;
                        }
                        else
                        {
                            cout << "You chose wrong option!" << endl;
                            clearScreen();
                        }
                    } // end of seats management
                }
                else if (option == '7')
                {
                    cout << "Press 2 to Announce the Result ";
                    int annouce;
                    cin >> annouce;
                    if (annouce == 2)
                    {
                        announce = true;
                    }
                }
                else if (option == '8')
                {
                    break;
                }
                else
                {
                    cout << "You Chose Wrong option " << endl;
                }
                clearScreen();
            } // end of admin wile loop
        }
        else if (who == "STUDENT")
        {
            char studentOption = ' ';
            while (true)
            {
                system("cls");
                studentOption = studentMenu();
                if (studentOption == '1')
                {
                    // View student information
                    int st_index = studentInfo();
                    cout << student_name[st_index] << "\t"
                         << "MATRIC: " << student_matric[st_index] << "\t"
                         << "FSC: " << student_fsc[st_index] << "\t"
                         << "ECAT: " << student_ecat[st_index] << "\t"
                         << "AGGREGATE: " << aggr[st_index] << endl;
                }
                else if (studentOption == '2')
                {
                    if (announce)
                    {
                        //----pending to implement
                    }
                    else
                    {
                        cout << "Result is not announced yet " << endl;
                    }
                }
                else if (studentOption == '3')
                { //________logout option______
                    break;
                }
                else
                {
                    cout << "Wrong selection! Try again";
                }
                clearScreen();
            } // end of student menu while loop
        }
        else if (who == "EXIT")
        {
            cout << "choose correct option" << endl;
        }
        else
        {
            cout << "You entered wrong option " << endl;
        }
        clearScreen();
    } // end of while
} // end of main function
//__________________________ Function definitions_____________
void mainHeader()
{
    cout << "----------------------------------------------" << endl;
    cout << "--- University Admission Management System ---" << endl;
    cout << "----------------------------------------------" << endl;
}
string loginMenu()
{ //________Get user credentials and check whether user is present in

    mainHeader();
    string password;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    for (int i = 0; i < userCount; i++)
    {
        if (username == usernameA[i] && password == passwordsA[i])
        {
            return rolesA[i];
        }
    }
    return "0";
}
int seatManagementMenu()
{ //________Discipline with capacity of student. this data should
    int M;
    int seats[] = {0, 0, 0};
    mainHeader();
    cout << "Seat Management Menu > " << endl;
    cout << "1- Edit CS Capacity " << endl;
    cout << "2- Edit CE Capacity " << endl;
    cout << "3- Edit EE Capacity " << endl;
    cout << "4- View Seats Details " << endl;
    cout << "5- Back " << endl;
    cout << " Choose Any Option: ";
    cin >> M;
    return M;
}
void viewSeatsDetails()
{ //______View total seats according to discipline_________
for (int i = 0; i < 3; i++)
{
    cout<<"DEPARTMENT: "<<department[i]<<'\t'<<"SEATS: "<<seats[i]<<endl;
}

}
char adminMenu()
{ //_______Administrator level menu goes here__________
    mainHeader();
    char L;
    cout << "Admin Main Menu > " << endl;
    cout << "1- Add New Student " << endl;
    cout << "2- View All Students" << endl;
    cout << "3- Print the record in merit order " << endl;
    cout << "4- Generate Merit " << endl;
    cout << "5- Add Users " << endl;
    cout << "6- Seat Management " << endl;
    cout << "7- Announce Result " << endl;
    cout << "8- Logout " << endl;
    cout << " Choose Your Option : ";
    cin >> L;
    return L;
}
char studentMenu()
{ //_________Student or user menu, what user can choose_________
    mainHeader();
    char S;
    cout << "Student Main Menu > " << endl;
    cout << "1- View Your Profile " << endl;
    cout << "2- Check Admission Status " << endl;
    cout << "3- Logout " << endl;
    cout << " Choose Your Option : ";
    cin >> S;
    return S;
}
void clearScreen()
{ //____clear screen_____
    cout << "Press any key to continue " << endl;
    getch();
    system("CLS");
}
void addStudent()
{ //__________Get student data and their preferences__________addStudentIntoArray();
    string name;
    float matric, fsc, ecat;
    string p1, p2, p3;
    cout << "Enter name of student: ";
    cin >> name;
    cout << "Enter Matric Marks: ";
    cin >> matric;
    cout << "Enter FSc Marks: ";
    cin >> fsc;
    cout << "Enter ECAT Marks: ";
    cin >> ecat;
    subheader();
    cout << "Enter 1st Preferece: ";
    cin >> p1;
    cout << "Enter 2nd Preference: ";
    cin >> p2;
    cout << "Enter 3rd Preference: ";
    cin >> p3;
    addStudentIntoArray(name, matric, fsc, ecat, p1, p2, p3);
}
void addStudentIntoArray(string name, float matric, float fsc, float ecat, string p1, string p2, string p3)
{ //______Store student data into array____each time addStudent() function is called. it will store into global array
    student_name[count] = name;
    student_matric[count] = matric;
    student_fsc[count] = fsc;
    student_ecat[count] = ecat;
    student_pref1[count] = p1;
    student_pref2[count] = p2;
    student_pref3[count] = p3;
    aggr[count] = aggrigate(matric, fsc, ecat);
    count++;
}
void viewAllStudents()
{ //_______Retrieve student data and show on screen_______
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << "- " << '\t' << student_name[i] << '\t' << "MATRIC: " << student_matric[i] << '\t' << "FSC: " << student_fsc[i] << '\t';
        cout << "ECAT: " << '\t' << student_ecat[i] << '\t' << "AGGREGATE: " << aggr[i] << endl;
        cout << "PREFERENCES: " << '\t' << "1- " << student_pref1[i] << '\t' << "2- " << student_pref2[i] << '\t' << "3- " << student_pref3[i] << endl;
    }
}
void subheader()
{ //________header for preference______
    cout << endl;
    cout << " Enter the Name for Preferences " << endl;
    cout << "********************************************" << endl;
    cout << "Choose between these disciplines " << endl;
    cout << "1- CS for Compter Science" << endl;
    cout << "2- CE for Compter Engineering" << endl;
    cout << "3- EE for Electrical Engineering" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}
void addUser(string name, string pass, string role)
{ //______Add user, only admin can add_________
    usernameA[userCount] = name;
    passwordsA[userCount] = pass;
    rolesA[userCount] = role;
    userCount++;
}
float aggrigate(float matric, float fsc, float ecat)
{ //_____________calculate aggrigate_______________
    float agg = (matric / 1100 * 100 * 0.25) + (fsc / 1100 * 100 * 0.45) + (ecat / 400 * 100 * 0.30);
    return agg;
}
void print_Recd()
{ //_____________calculate & sort in merit order_________
}
void generate_Mlist()
{ //_________________Generate merit according to discipline a student get admit____________
}
int studentInfo()
{ //____________Student as user info__________
    for (int i = 0; i < count; i++)
    {
        if (username == student_name[i])
        {
            return i;
        }
    }
}