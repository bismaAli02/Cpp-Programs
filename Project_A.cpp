#include <iostream>
#include <fstream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<sstream>
using namespace std;
// USERNAME FOR ADMIN IS abd.sialvi
// PASSWORD FOR ADMIN IS 123
//_______________________________________________DATA STRUCTURES_______________________________________________________(opening)

// for admin starting____________________________
const int TOTAL_COUNT = 20;

string user_admin_username, user_admin_password;
int main_login_option = 0; //______USER ADMIN LOGIN______
int option_admin;
int total_players = 0;
int count = 1;
int go_back_option;
int count_player = 0;
int increament = 0;
int user_count=0;
//_____________ARRAYS_____________
int idx = 0;
int e_sorting;
int large_idx;

string player_name[TOTAL_COUNT];
string gender[TOTAL_COUNT];
int player_age[TOTAL_COUNT];
int player_experience[TOTAL_COUNT];
int player_certifticates[TOTAL_COUNT];
string player_sports[TOTAL_COUNT];
float player_total_marks[TOTAL_COUNT];
float player_obtained_marks[TOTAL_COUNT];
float per[TOTAL_COUNT];
int sum[TOTAL_COUNT];
// SORTING IN OPTION 5
int temp_num;
string temp_name;
int indx;

// changing shedule

int go_back;

int change_shedule_option;
string schedule_date_main = "To Be Announced";
string schedule_day_main = "To Be Announced";
string shedule_time_main = "To Be Announced";
string schedule_day_atheletics = "To Be Announced";
string shedule_time_atheletics = "To Be Announced";
string schedule_date_atheletics = "To Be Announced";
string schedule_day_others = "To Be Announced";
string shedule_time_others = "To Be Announced";
string schedule_date_others = "To Be Announced";
// for admin closing__________________________________________________

// for user opening___________________________________________________

// for option 1
int option_1;
int option;
// for option 2
int interest_1, interest_2, height_1, height_2, go_back_2;
// for option 3
int go_back_3, go_back_10;
int option_shedule = 0;
// for option 4
int info, go_back_4;
// arrays for option 5 and 6
string name[TOTAL_COUNT];
string user_gender[TOTAL_COUNT];
int age[TOTAL_COUNT];
string ph_no[TOTAL_COUNT];
string sports[TOTAL_COUNT];
int Experience[TOTAL_COUNT];
int cer[TOTAL_COUNT];
float total[TOTAL_COUNT];
float obtained[TOTAL_COUNT];
// option 5
int array_location = 0;
// option 6
float per_user;
// for user login
string usernameA[TOTAL_COUNT];
string passwordA[TOTAL_COUNT];
int count_login = 0;
int number_of_users = 0;
string player_username;
string player_password;
int flag = 1;
// for go to main menu
int go_back_to_main;
int final_header = 0;
// for user closing__________________________________________________
//_______________________________________________DATA STRUCTURES_____________________________________________________(closing)

//_______________________________________________PROTOTYPES__________________________________________________________(opening)
void finalheader();
void header();
void first_screen();
void admin_interface();
void admin_main_features(); //Menu for Admin 
void register_player();     // Admin Option 1
void store_into_file();
void percentage_calculator();   
void display_info();        // Admin Option 2
void eligiblity();          // Admin Option 3
void main_shedule();
void atheletics_shedule();
void others_shedule();
void change_shedule_menu();
void change_shedule();       // Admin Option 4
int largest(int q);     
void output_soring();        // Admin Option 5
void adduser();              // Admin Option 6
bool user_check();
void user_interface();
void menu();                 //Menu for User
void subMenuForDisplay();
void display_main_sports();
void display_atheletic_sports();
void display_other_sports();
void display_all_sports();
void view();                  //User Option 1      
void suboption_1();
void suboption_2();
void suboption_3();
void suboption_4();
void suboption_5();
void suggestion();             //User Option 2
void shedule_for_main();
void shedule_for_atheletics();
void shedule_for_others();
void menu_shedule();
void shedule();                 //User Option 3
void sub_1();
void sub_2();
void craeteria();               //User Option 4
void enter_data();              //User Option 5
float percentage_cal();
void display_user_info();       //User Option 6

//prototypes for file handling
string parseRecord(string record, int field);
void Load();
//_______________________________________________PROTOTYPES__________________________________________________________(closing)
main()
{ // main opening
   Load();
    while (main_login_option != 3)
    {
        first_screen();
        if (main_login_option == 1)
        {
            admin_interface();
            if (user_admin_username == "abd.sialvi" && user_admin_password == "Abd@123")
            { // options for admin (opening)
                option_admin = 0;
                while (option_admin != 8)
                {
                    admin_main_features();
                    if (option_admin == 1)
                    {
                        register_player();
                       // store_into_file();
                    }
                    else if (option_admin == 2)
                    {
                        display_info();
                    }
                    else if (option_admin == 3)
                    {
                        eligiblity();
                    }
                    else if (option_admin == 4)
                    {
                        change_shedule();
                    }
                    else if (option_admin == 5)
                    {
                        output_soring();
                    }
                    else if (option_admin == 6)
                    {
                        adduser();
                    }
                    else if (option_admin == 7)
                    {
                        break;
                    }
                } // while loop closing
            }
            else
            {
                cout << "OOPS! WRONG ID OR PASSWORD" << endl;
                cout << "Press 0 to go_back" << endl;
                cin >> go_back_option;
            }
        } // options for admin (closing)
        else if (main_login_option == 2)
        { // opening options for player(user)
            user_interface();
            option = 0;
            while (option != 8)
            { // while loop
                menu();
                if (flag == 0)
                {
                    break;
                }
                if (option == 1)
                {
                    view();
                }
                else if (option == 2)
                {
                    suggestion();
                }
                else if (option == 3)
                {
                    shedule();
                }
                else if (option == 4)
                {
                    craeteria();
                }
                else if (option == 5)
                {
                    enter_data();
                }
                else if (option == 6)
                {
                    display_user_info();
                }
                else if (option == 7)
                {
                    break;
                }
            } // while loop
        }     // closing options for player(user)
        if (option == 8 || option_admin == 8)
        {
            finalheader();
            final_header = 1;
            break;
        }
    } // user admin loop cantroller
    if (final_header == 0)
    {
        finalheader();
    }

} // main closing

//__________________________________________FUNCTIONS FOR ADMIN FEATURES________________________________________(opening)
void finalheader()
{
    cout << "***********************************************" << endl;
    cout << "*      THANKS FOR USING OUR APPLICATION       *" << endl;
    cout << "***********************************************" << endl;
}
void header()
{
    cout << "***********************************************" << endl;
    cout << "*          SPORTS MANAGEMENT SYSTEM           *" << endl;
    cout << "***********************************************" << endl;
}

void first_screen()
{
    header();
    cout << " " << endl;
    cout << "Choose your option" << endl;
    cout << "1. ADMIN" << endl;
    cout << "2. PLAYER" << endl;
    cout << "3. go_back" << endl;
    cin >> main_login_option;
    system("cls");
}

void admin_interface()
{
    header();
    cout << "Enter Username: " << endl;
    cin >> user_admin_username;
    cout << "Enter Password: " << endl;
    cin >> user_admin_password;
    system("cls");
}

void admin_main_features()
{
    header();
    cout << "--------------" << endl;
    cout << "Choose Your Option" << endl;
    cout << "1. Register Player                           	    " << endl;
    cout << "2. Display all Applicants Info				        " << endl;
    cout << "3. Display all Eligible Applicants	 		  	    " << endl;
    cout << "4. Change the schedule 			                " << endl;
    cout << "5. Display applicants priority list                " << endl;
    cout << "6. Add User                                        " << endl;
    cout << "7. LOG OUT							                " << endl;
    cout << "8. go_back APPLICATION" << endl;
    cin >> option_admin;
    system("cls");
}

void register_player() // Add any Player
{

    header();
    cout << "Enter player " << count_player + 1 << ":" << endl;
    cout << "-----------------" << endl;
    cout << "Enter Name" << endl;
    cin >> player_name[count_player];
    cout << "Enter Age" << endl;
    cin >> player_age[count_player];
    cout << "Enter Gender" << endl;
    cin >> gender[count_player];
    cout << "Enter Sport player wants to aplly" << endl;
    cin >> player_sports[count_player];
    cout << "Enter Marks Obtained" << endl;
    cin >> player_obtained_marks[count_player];
    cout << "Enter Marks Total" << endl;
    cin >> player_total_marks[count_player];
    cout << "Enter no of certificates" << endl;
    cin >> player_certifticates[count_player];
    cout << "Enter no of months of experience" << endl;
    cin >> player_experience[count_player];
    store_into_file();    
    count_player = count_player + 1;
    cout << "Player has been registered" << endl;
    cout << "Press any key to go back" << endl;
   // cin >> go_back;
    system("cls");
}
void store_into_file()
{
    fstream file;
    file.open("PlayerRegistory.txt", ios::app);
    file << player_name[count_player] << "," << player_age[count_player] << "," << player_sports[count_player] << "," << player_certifticates[count_player] << "," << player_experience[count_player] << "," << gender[count_player] <<","<<per[count_player]<< endl;
    file.close();
}
void percentage_calculator()
{
    for (int x = 0; x < count_player; x = x + 1)
    {
        per[x] = player_obtained_marks[x] / player_total_marks[x] * 100.0;
    }
}
void display_info()
{
    header();
    // percentage_calculator();
    cout << "INFO OF PLAYER " << count << endl;
    cout << "NAME\tAPPLIED SPORTS\tAGE\tEXPERIENCE\tCERTIFICATES\tPERCENTAGE\tGENDER" << endl;
    for (int j = 0; j < count_player; j = j + 1)
    {

        cout << player_name[j] << "\t" << player_sports[j] << "\t\t" << player_age[j] << "\t" << player_experience[j] << "\t\t" << player_certifticates[j] << "\t\t" << per[j] << "\t\t" << gender[j] << endl;
        count = count + 1;
    }
    cout << "Press 0 to go_back" << endl;
    cin >> go_back_option;
    system("cls");
}

void eligiblity()
{
    fstream newfile;
    header();
    percentage_calculator();
    for (int y = 0; y < count_player; y = y + 1)
    {
        newfile.open("eligiblity.txt", ios::app);
        if (player_age[y] >= 18 && player_experience[y] >= 6 && player_certifticates[y] >= 2 && per[y] >= 50.0)
        {
            cout << player_name[y] << "\t  Eligible." << endl;
            newfile << player_name[y] << "\t Eligible" << endl;
        }
        else
        {
            cout << player_name[y] << "\t  Not Eligible." << endl;
            newfile << player_name[y] << "\t Not Eligible" << endl;
        }
        newfile.close();
    }
    cout << "Press 0 to go_back" << endl;
    cin >> go_back_option;
    system("cls");
}
// FUNCTIONS FOR OPTION 4

void main_shedule()
{
    cout << "Enter Date of Test" << endl;
    cin >> schedule_date_main;
    cout << "Enter Day of Test" << endl;
    cin >> schedule_day_main;
    cout << "Enter Time of Reporting" << endl;
    cin >> shedule_time_main;
    cout << "Press 0 to go back" << endl;
    cin >> go_back;
    system("cls");
}
void atheletics_shedule()
{
    cout << "Enter Date of Test" << endl;
    cin >> schedule_date_atheletics;
    cout << "Enter Day of Test" << endl;
    cin >> schedule_day_atheletics;
    cout << "Enter Time of Reporting" << endl;
    cin >> shedule_time_atheletics;
    cout << "Press 0 to go back" << endl;
    cin >> go_back;
    system("cls");
}
void others_shedule()
{
    cout << "Enter Date of Test" << endl;
    cin >> schedule_date_others;
    cout << "Enter Day of Test" << endl;
    cin >> schedule_day_others;
    cout << "Enter Time of Reporting" << endl;
    cin >> shedule_time_others;
    cout << "Press 0 to go back" << endl;
    cin >> go_back;
    system("cls");
}
void change_shedule_menu()
{
    header();
    cout << "-----------" << endl;
    cout << "Choose Your Option " << endl;
    cout << "1. Change Shedule for Main Sports" << endl;
    cout << "2. Change Shedule for Atheletics Sports" << endl;
    cout << "3. Change Shedule for Others Sports" << endl;
    cout << "4. go_back to main menu " << endl;
    cin >> change_shedule_option;
    system("cls");
}

void change_shedule()
{ // OPRNING FUNCTION 4
    change_shedule_option = 0;
    while (change_shedule_option != 4)
    { // opening whlile
        change_shedule_menu();
        if (change_shedule_option == 1)
        {
            main_shedule();
        }
        if (change_shedule_option == 2)
        {
            atheletics_shedule();
        }
        if (change_shedule_option == 3)
        {
            others_shedule();
        }
    } // closing while
} // CLOSING FUNCTION 4

// SORTING FUNCTION FOR OPTION 5 OPENING

int large = player_experience[0];
int largest(int q)
{

    for (int r = q; r < count_player; r = r + 1)
    {
        if (large < player_experience[r])
        {
            large = player_experience[r];
            indx = r;
        }
    }
    large = -1;
    return indx;
}
void output_soring()
{
    fstream newfile;
    header();
    int large_idx;
    newfile.open("sorting.txt", ios::app);
    newfile << "NAME\tPOINTS" << endl;
    for (int q = 0; q < count_player; q = q + 1)
    {
        large_idx = largest(q);

        temp_num = player_experience[large_idx];
        player_experience[large_idx] = player_experience[q];
        player_experience[q] = temp_num;

        temp_name = player_name[large_idx];
        player_name[large_idx] = player_name[q];
        player_name[q] = temp_name;

        cout << temp_name << "\t" << temp_num << endl;
        // storing into files
        newfile << temp_name << "\t" << temp_num << endl;
    }
    newfile.close();
    cout << "Press 0 to go back" << endl;
    cin >> go_back;
    system("cls");
}
// SORTING FUNCTION FOR OPTION 5 CLOSING

string A;
int confirm_pass;

void adduser()
{ // function
    header();
    confirm_pass = 0;
    cout << "Enter Username:" << endl;
    cin >> usernameA[number_of_users];
    while (confirm_pass == 0)
    {
        while (true)
        {

            cout << "Enter Password:" << endl;
            cin >> passwordA[number_of_users];
            int length = passwordA[number_of_users].length();
            if (length >= 8)
            {
                break;
            }
            else
            {
                cout << "Password must contain 8 characters" << endl;
                cout << "Press any key to enter again" << endl;
                cin >> go_back;
            }
        }
        cout << "Confirm Password" << endl;
        cin >> A;
        if (passwordA[number_of_users] == A)
        {
            cout << "User has been assigned" << endl;
            cout << "Press any key to go back" << endl;
            cin >> go_back;
            confirm_pass = 1;
            system("cls");
        }
        else
        {
            cout << "Confirmation failed" << endl;
            cout << "Press any key to enter again" << endl;
            cin >> go_back;
        }
    }
    number_of_users = number_of_users + 1;
} // function

//__________________________________________FUNCTIONS FOR USER FEATURES___________________________________________(opening)

// main menu for user
void menu()
{
    header();
    cout << "                       " << endl;
    cout << "                       " << endl;
    cout << "WELCOME TO NATIONAL SPORTS COMPLEX" << endl;
    cout << "Choose your option " << endl;
    cout << "------------------- " << endl;
    cout << "1. View Available Sports to Apply " << endl;
    cout << "2. Selection/Suggestion for sports " << endl;
    cout << "3. Annual Schedule for Tests " << endl;
    cout << "4. Eligiblity Criteria " << endl;
    cout << "5. Apply for Admission " << endl;
    cout << "6. Display My info	" << endl;
    cout << "7. Log Out " << endl;
    cout << "8. go_back APPLICATION" << endl;
    cin >> option;
    system("cls");
}
// FUNTION FOR OPTION 1

void subMenuForDisplay()
{
    header();
    cout << "Select Your Option" << endl;
    cout << "1. Main Sports " << endl;
    cout << "2. Athletics   " << endl;
    cout << "3. Other Sports" << endl;
    cout << "4. View All    " << endl;
    cout << "5. Back        " << endl;
}
void display_main_sports()
{
    header();
    cout << "              " << endl;
    cout << "Cricket       " << endl;
    cout << "Football      " << endl;
    cout << "Hockey        " << endl;
    cout << "Polo          " << endl;
    cout << "Tennis        " << endl;
    cout << "Table Tennis  " << endl;
    cout << "Badminton     " << endl;
    cout << "Curlung       " << endl;
    cout << "Basket Ball   " << endl;
    cout << "Press 0 to go back" << endl;
    cin >> go_back;
    system("cls");
}
void display_atheletic_sports()
{
    header();
    cout << "Taekwondo " << endl;
    cout << "Karate    " << endl;
    cout << "Boxing    " << endl;
    cout << "Wrestling " << endl;
    cout << "Gymnastic " << endl;
    cout << "Gym       " << endl;
    cout << "Press 0 to go back" << endl;
    cin >> go_back;
    system("cls");
}
void display_other_sports()
{
    header();
    cout << " Swimming 	" << endl;
    cout << " Horse Riding  " << endl;
    cout << " Hurdle Running" << endl;
    cout << " Bowling       " << endl;
    cout << " Snooker       " << endl;
    cout << " Press 0 to go back" << endl;
    cin >> go_back;
    system("cls");
}
void display_all_sports()
{
    header();
    cout << "    MIAN:\t\tATHELETICS:\t\t OTHERS:	    " << endl;
    cout << "  ----------------------------------- " << endl;
    cout << "1.  Cricket\t\t1. Taekwondo\t\t1. Swimming      " << endl;
    cout << "2.  Football\t\t2. Karate \t\t2. Hurdle Running" << endl;
    cout << "3.  Hockey \t\t3. Boxing \t\t3. Horse Riding  " << endl;
    cout << "4.  Polo \t\t4. Wrestling \t\t4. Bowling       " << endl;
    cout << "5.  Tennis \t\t5. Gymnastic \t\t5. Snooker       " << endl;
    cout << "6.  Table Tennis\t6. Gym                     " << endl;
    cout << "8.  Badminton  " << endl;
    cout << "9.  Curling  " << endl;
    cout << "10. Basket Ball " << endl;
    cout << "Press 0 to go to main menu " << endl;
    cin >> go_back;
    system("cls");
}
void view()
{ // function 1 opening
    int back = 1;
    for (int x = 1; x != 0; x = x + 1)
    { // OUTER FOR LOOP
        subMenuForDisplay();
        cin >> option_1;
        if (option_1 == 1)
        {
           display_main_sports();
        }

        else if (option_1 == 2)
        {
            display_atheletic_sports();
        }

        else if (option_1 == 3)
        {
            display_other_sports();
        }

        else if (option_1 == 4)
        {
            display_all_sports();
        }
        else if (option_1 == 5)
        {
            x = -1;
            system("cls");
        }
    } // OUTER FOR LOOP
} // functiion 1 closing

// FUNCTIONS FOR OPTION 2

void suboption_1()
{ // 1
    header();
    cout << "SUGGESTED SPORTS" << endl;
    cout << "1. BASKEST BALL " << endl;
    cout << "2. Hockey " << endl;
    cout << "3. Cricket " << endl;
    cout << "4. Football" << endl;
    cout << "5. Taewkondo" << endl;
    cout << "Press 0 to go back" << endl;

} // 1
void suboption_2()
{ // 2
    header();
    cout << "SUGGESTED SPORTS" << endl;
    cout << "1. BASKEST BALL " << endl;
    cout << "2. Badminten " << endl;
    cout << "3. Tennis " << endl;
    cout << "Press 0 to go back" << endl;
    cin >> go_back;
    system("cls");

} // 2
void suboption_3()
{ // 3
    header();
    cout << "SUGGESTED SPORTS" << endl;
    cout << "1. Tennis " << endl;
    cout << "2. Badminten " << endl;
    cout << "3. Polo " << endl;
    cout << "Press 0 to go back" << endl;
    cin >> go_back;
    system("cls");

} // 3
void suboption_4()
{ // 4
    header();
    cout << "SUGGESTED SPORTS" << endl;
    cout << "1. Table Tennis " << endl;
    cout << "2. Snooker " << endl;
    cout << "3. Bawling " << endl;
    cout << "4. Curling " << endl;
    cout << "Press 0 to go back" << endl;
    cin >> go_back;
    system("cls");

} // 4
void suboption_5()
{ // 5
    header();
    cout << "What ever suits you according to your Interest!!" << endl;
    cout << "Press 0 to go back " << endl;
    cin >> go_back;
    system("cls");
} // 5

void suggestion()
{ // OPENING FUNCTION 2
    header();
    cout << "Enter Your Height (feet):    " << endl;
    cin >> height_1;
    cout << "Enter Your Height (inches):  " << endl;
    cin >> height_2;
    cout << "Enter your interest" << endl;
    cout << "1. Outdoor" << endl;
    cout << "2. Indoor " << endl;
    cin >> interest_1;
    cout << "Are You Unenthusiastic or Indifferent" << endl;
    cout << "1. Unenthusiastic " << endl;
    cout << "2. Indifferent " << endl;
    cin >> interest_2;
    if (height_1 >= 6 && interest_1 == 1 && interest_2 == 1)
    {
        suboption_1();
    }
    else if (height_1 >= 6 && interest_1 == 2 && interest_2 == 1)
    {
        suboption_2();
    }
    else if (height_1 >= 5 && interest_1 == 1 && interest_2 == 2)
    {
        suboption_3();
    }
    else if (height_1 >= 5 && interest_1 == 2 && interest_2 == 2)
    {
        suboption_4();
    }
    else if (height_1 >= 5 && interest_1 == 1 && interest_2 == 1)
    {
        suboption_1();
    }
    else if (height_1 >= 5 && interest_1 == 2 && interest_2 == 1)
    {
        suboption_2();
    }
    else
    {
        suboption_5();
    }

} // CLOSING FUNCTION 2

// FUNCTIONS FOR OPTION 3
void shedule_for_main()
{
    header();
    cout << "IMPOTANT DATE TO NOTICE" << endl;
    cout << "                       " << endl;
    cout << "DATE: " << schedule_date_main << endl;
    cout << "DAY:  " << schedule_day_main << endl;
    cout << "TIME: " << shedule_time_main << endl;
    cout << "Press 0 to go to Main Menu" << endl;
    cin >> go_back_10;
    system("cls");
}
void shedule_for_atheletics()
{
    header();
    cout << "IMPOTANT DATE TO NOTICE" << endl;
    cout << "                       " << endl;
    cout << "DATE: " << schedule_date_atheletics << endl;
    cout << "DAY:  " << schedule_day_atheletics << endl;
    cout << "TIME: " << shedule_time_atheletics << endl;
    cout << "Press 0 to go to Main Menu" << endl;
    cin >> go_back_10;
    system("cls");
}
void shedule_for_others()
{
    header();
    cout << "IMPOTANT DATE TO NOTICE" << endl;
    cout << "                       " << endl;
    cout << "DATE: " << schedule_date_others << endl;
    cout << "DAY:  " << schedule_day_others << endl;
    cout << "TIME: " << shedule_time_others << endl;
    cout << "Press 0 to go to Main Menu" << endl;
    cin >> go_back_10;
    system("cls");
}
void menu_shedule()
{
    cout << "-------------------" << endl;
    cout << "Choose Your Option " << endl;
    cout << "1. View Sehdule for main sports " << endl;
    cout << "2. View Sehdule for atheletics sports " << endl;
    cout << "3. View Sehdule for others sports " << endl;
    cout << "4. go_back to main menu" << endl;
    cin >> option_shedule;
    if (option_shedule == 4)
    {
        system("cls");
    }
}

void shedule()
{ // opening function 3
    option_shedule = 0;
    while (option_shedule != 4)
    { // opening while
        header();
        menu_shedule();
        if (option_shedule == 1)
        {
            shedule_for_main();
        }
        if (option_shedule == 2)
        {
            shedule_for_atheletics();
        }
        if (option_shedule == 3)
        {
            shedule_for_others();
        }

    } // closing while

} // closing function 3

// FUNCTION FOR OPTION 4

void sub_1()
{ // 1
    header();
    cout << "* Player must have a 6 months certifed experience of sports activity.    			       " << endl;
    cout << "* Player must have an Educational Background. (Passed inter,D/I, A-levels or equal with 50% plus grades)" << endl;
    cout << "* Player must have at least two (2) certificate for the applied sports at district level.  	       " << endl;
    cout << "* Players below the age 18 are not eligible for National Sports Complex.                   	       " << endl;
    cout << "                        " << endl;
    cout << "Press 1 for more info else press any key to continue" << endl;
    cout << "Press 0 to go back" << endl;
    cin >> info;
} // 1
void sub_2()
{ // 2
    header();
    cout << "Admission will be conducted on the basis of merit.There are a total of 50 vacancies   " << endl;
    cout << "for each discipline/sport.Those who have more certificates and experience of respected" << endl;
    cout << "sports and passed the admission test will be elected 1st and so on...      " << endl;
    cout << "Press 0 to go back" << endl;
    cin >> go_back_4;
    system("cls");
} // 2

void craeteria()
{ // OPRING FUNCTION 4
    sub_1();
    if (info == 1)
        sub_2();
} // CLOSING FUNCTION 4

// FUNCTION FOR OPTION 5
int flag_eligiblity = 1;
void enter_data()
{
    header();
    flag_eligiblity = 1;
    cout << "Enter Your Name: " << endl;
    cin >> name[array_location];
    cout << "Enter Your Age: " << endl;
    cin >> age[array_location];
    cout << "Gender" << endl;
    cin >> user_gender[array_location];
    if (age[array_location] < 18)
    {
        cout << "You are not eligible" << endl;
        flag_eligiblity = 0;
        cout << "Press any key to go back" << endl;
        cin >> go_back;
    }
    if (flag_eligiblity == 1)
    {
        cout << "Enter Your phone number: " << endl;
        cin >> ph_no[array_location];
        cout << "Enter Sports You Want To Apply: " << endl;
        cin >> sports[array_location];
        cout << "Enter certified experience in months: " << endl;
        cin >> Experience[array_location];
        cout << "Enter no of certificates achieved from verified district institutions:" << endl;
        cin >> cer[array_location];
        cout << "Total Marks In Inter/Dae/Equalant: " << endl;
        cin >> total[array_location];
        cout << "Obtained Marks In Inter/Dae/Equalant:" << endl;
        cin >> obtained[array_location];
        // array_location = array_location + 1;
        cout << "YOU REQUEST HAVE BEEN SUBMITTED" << endl;
        cout << "Press any key to go back " << endl;
        cin >> go_back;
        system("cls");
    }
}

// FUNCTION FOR OPTION 6
float percentage_cal()
{
    per_user = obtained[array_location] / total[array_location] * 100.0;
    return per_user;
}
void display_user_info()
{
    int result_per = percentage_cal();
    cout << "NAME\tAGE\tSPORTS APPLIED\tEXPERIEMCE\tCERTIFICATES\tGENDER" << endl;
    cout << name[array_location] << "\t" << age[array_location] << "\t" << sports[array_location] << "\t\t" << Experience[array_location] << "\t" << cer[array_location] << "\t" << per_user << "\t" << user_gender[array_location] << endl;
    cout << "Press any key to go back" << endl;
    cin >> go_back;
    system("cls");
}
bool user_check()
{
    bool found = false;
    for (int p = 0; p < number_of_users; p = p + 1)
    {
        if (player_password == passwordA[p] && player_username == usernameA[p])
        {
            array_location = p;
            found = true;
            break;
        }
    }

    if (found != true)
    {
        cout << "WRONG ID OR PASSWORD" << endl;
        cout << "Press any key to enter again" << endl;
        cin >> go_back;
        system("cls");
    }
    return found;
}
void user_interface()
{
    header();
    while (1)
    {
        cout << "Enter Username:" << endl;
        cin >> player_username;
        cout << "Enter Password:" << endl;
        cin >> player_password;
        system("cls");
        if (user_check())
        {
            break;
        }
    }
}
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
//function for reding from fle
void Load()
{
    fstream file;
    int i = 0;
    string word;
    file.open("PlayerRegistory.txt", ios::in);
    while (!file.eof())
    {
        getline(file, word);
        if (file.eof())
        {
            break;
        }
        player_name[i] = parseRecord(word, 1);
        player_age[i] = stoi(parseRecord(word, 2));
        player_sports[i] = parseRecord(word, 3);
        player_certifticates[i] = stoi(parseRecord(word, 4));
        player_experience[i] = stoi(parseRecord(word, 5));
        gender[i] = parseRecord(word, 6);
        per[i] = stof(parseRecord(word, 7));
        i++;
    }
    count_player = i;
    file.close();
    i = 0;
}
//__________________________________________FUNCTIONS FOR USER FEATURES___________________________________________(closing)