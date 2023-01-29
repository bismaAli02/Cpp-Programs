#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

char status;
int id = 0;
string password;

// ------------------ Prototypes
void header();
void header1();
void system_cls();
char status_menu();
char login_portal();
char admin_menu(char option);
char cust_menu(char option);
void cust_display();
void models();
void invoice(string c_name, int c_id, string car_name, int day, int rent, int Advance, int rental_amount, int total_amount);
void Budget(int budget);
void edit_rent();
void add_C();
void remove_C();
void add_Car();
void remove_Car();
void addCarIntocar_rentAay(string car, int rent);
void addCustIntocar_rentAay(int c_id, string cust_name, string cust_p);
int sorting(int s);
bool checkUser(int id, string password);
// prototypes end
const int MAX_RECORDS = 20;
// Data Structures

string car_nameA[MAX_RECORDS] = {"Alto_suzuki", "Honda_city", "Toyota_fortuner", "Wagon_R"};
int car_rentA[MAX_RECORDS] = {3000, 5000, 4000, 10000};
int car_count = 4;

string cust_nameA[MAX_RECORDS];
int cust_idA[MAX_RECORDS];
string C_passwordA[MAX_RECORDS];
int count = 0;

main()
{
  char opt, mainchoice, login, option;
  int rent = 0, budget = 0, rental_amount = 0, total_amount = 0;
  int cust_id = 0, driver1_id = 0, driver2_id = 0, day, Advance = 0, driver_id = 0, c_id = 0;
  string cust_name, driver_name, c_name, c_model, driver1_name, driver2_name;
  string cust_p, driver_p;
  string car_name, rm_cust, rm_driver, car1, car2;
  int rm_c_id = 0, rm_d_id = 0;

  /* Hard code Id's and passwords....
      Admin id is 123 and password is abc
       */

  while (true)
  {
    mainchoice = status_menu();
    login = login_portal();
    if (status == 'a' && id == 123 && password == "abc")
    {
      while (true)
      {
        option = admin_menu(option);
        if (option == '1')
        {
          models();
        } // end of option 1
        else if (option == '2')
        {
          header1();
          add_C();
          system_cls();
        } // end of option 2
        else if (option == '3')
        {
          remove_C();
          system_cls();
        } // end of option 3
        else if (option == '4')
        {
          header1();
          edit_rent();
          system_cls();
        } // end of option 4
        else if (option == '5')
        {
          header1();
          cust_display();
          system_cls();
        } // end of option 5
        else if (option == '6')
        {
          header1();
          add_Car();
          system_cls();
        } // end of option 6
        else if (option == '7')
        {
          header1();
          remove_Car();
          system_cls();
        } // end of option 7;
        else if (option == '8')
        {
          break;
        }
        else
        {
          cout << "You Chose Wrong option " << endl;
        }
      } // end of admin while loop
    }   // start of customers option
    else if (status == 'b')
    {
        if (checkUser(id, password))
        {
          while (true)

          {
            option = cust_menu(option);
            if (option == '1')
            {
              Budget(budget);
            } // end of option 1
            else if (option == '2')
            {
              models();
              system_cls();
            } // end of option 2
            else if (option == '3')
            {
              int temp, high_idx;
              string tempS;
              for (int s = 0; s < MAX_RECORDS; s++)
              {
                high_idx = sorting(s);
                temp = car_rentA[high_idx];
                car_rentA[high_idx] = car_rentA[s];
                car_rentA[s] = temp;

                tempS = car_nameA[high_idx];
                car_nameA[high_idx] = car_nameA[s];
                car_nameA[s] = tempS;
              }

              for (int i = 0; i < 5; i++)
              {
                cout << car_nameA[i] << " car with rent " << car_rentA[i] << endl;
              }
              system_cls();
            } // end of option 3
            else if (option == '4')
            {
              invoice(c_name, c_id, car_name, day, rent, Advance, rental_amount, total_amount);
              system_cls();
            } // end of option 4
            else if (option == '5')
            {
              break;
              system_cls();
            }
            else
            {
              cout << "You Choose Wrong option " << endl;
              system_cls();

            } // end of customer's while loop
          }   ////hjgjhgh
        }
        else 
        {
          cout << "You entered wrond password " << endl;
          system_cls();
        }
    }

    else if (status == 'c')
    {
      cout << "Thank you for using our application!!!!!!!!!!!!!!!" << endl;
      break;
    }
    else
    {
      cout << "You entered wrong option......" << endl;
      system_cls();
    }
  }
}

// PROGRAM END......

// function definition.........
void header()
{
  cout << "***********************************************************" << endl;
  cout << "*                   Welcome to our company                *" << endl;
  cout << "***********************************************************" << endl;
}
// end of header function

void header1()
{
  cout << "////////////////////////////////////////////////////////////" << endl;
  cout << "--          Car Rental Management System (CRMS)           --" << endl;
  cout << "////////////////////////////////////////////////////////////" << endl;
}
// end of 2nd header function

void system_cls()
{
  cout << "Press any key to continue...." << endl;
  getch();
  system("CLS");
}
// end of system_cls function
char status_menu()
{
  header();
  cout << "Select your Status:  >" << endl;
  cout << "a.... Admin" << endl;
  cout << "b.... Customer" << endl;
  cout << "c.... Exit" << endl;
  cout << "Choose your option: ";
  cin >> status;
  system_cls();
  return status;
}
// end of status_menu

char login_portal()
{
  if (status == 'a' || status == 'b')
  {
    header1();
    cout << "               Login Portal                " << endl;
    cout << "Enter User ID--------";
    cin >> id;
    cout << "Enter Password--------";
    cin >> password;
  }
  system_cls();
  return status;
}
// end of login portal function

char admin_menu(char option)
{
  header();
  cout << "Main Menu   " << endl;
  cout << "Select one of the following options number . . ." << endl;
  cout << "1.  Display Car's model" << endl;
  cout << "2.  Add new customers" << endl;
  cout << "3.  Remove customer" << endl;
  cout << "4.  Change rent of cars" << endl;
  cout << "5.  View all customers record" << endl;
  cout << "6.  Add new car" << endl;
  cout << "7.  Remove car: " << endl;
  cout << "8.  logout" << endl;
  cout << "Choose your option: ";
  cin >> option;
  system_cls();
  return option;
}
// end of admin's menu

char cust_menu(char option)
{
  header();
  cout << "Main Menu   " << endl;
  cout << "Select one of the following options number . . ." << endl;
  cout << "1.  Display Car under budget" << endl;
  cout << "2.  Display rent for all cars" << endl;
  cout << "3.  Display cars from higher to lower rent" << endl;
  cout << "4.  Invoice" << endl;
  cout << "5.  Logout" << endl;
  cout << "Choose your option: ";
  cin >> option;
  system_cls();
  return option;
}

// end of customer's menu
void cust_display()
{
  if (count > 0)
  {
    cout << "All customer's record:" << endl;
    for (int i = 0; i < count; i++)
    {
      cout << "Customer_ID: " << cust_idA[i] << endl;
      cout << "Customer_name: " << cust_nameA[i] << endl;
      cout << "Password: " << C_passwordA[i] << endl;
      cout << "                     " << endl;
    }
  }
  else
    cout << "No Customer record Available! " << endl;
}
// end of display customers function

void models()
{
  header1();
  cout << "All car's model  >" << endl;

  for (int i = 0; i < car_count; i++)
  {
    cout << i + 1 << " :  " << car_nameA[i] << endl
         << "\t\t Rent :  " << car_rentA[i] << endl;
  }
  system_cls();
}

void edit_rent()
{
  int _id;
  int rent;
  cout << "Enter the Car Id: " << endl;
  cin >> _id;

  if (_id > 0 && _id <= MAX_RECORDS)
  {
    cout << "Enter new Rent: " << endl;
    cin >> rent;
    car_rentA[_id - 1] = rent;
    cout << "Rent Update Successfully!" << endl;
  }
  else
    cout << "Invalid Care Id!" << endl;
}
// end of display model function

void invoice(string c_name, int c_id, string car_name, int day, int rent, int Advance, int rental_amount, int total_amount)
{
  header1();
  cout << "Invoice of a customer: " << endl;
  cout << "                                 " << endl;
  cout << "Enter name: ";
  cin >> c_name;
  cout << "Enter ID: ";
  cin >> c_id;
  cout << "Enter Car model without space: ";
  cin >> car_name;
  cout << "Enter number of days: ";
  cin >> day;
  cout << "Rent per day: ";
  cin >> rent;
  rental_amount = day * rent;
  cout << "Enter Advance (equal to per day): ";
  cin >> Advance;
  total_amount = rental_amount - Advance;
  cout << "YOU HAVE TO PAY AFTER ADVANCE IS: " << total_amount << endl;
}
// end of invoice function

void Budget(int budget)
{
  int c = 0;
  header1();
  cout << "Enter your budget: ";
  cin >> budget;
  for (int i = 0; i < car_count; i++)
  {
    if (car_rentA[i] <= budget)
    {
      cout << car_nameA[i] << " Car with rent " << car_rentA[i] << endl;
      c++;
    }
  }
  if (c == 0)
  {
    cout << "Sorry no car available under your budget......";
  }
  system_cls();
}
// end of budget function;
// void writeCustomer(){
//   fstream file;
//   file.open("custm.txt",ios::app);
//   file
// }

void add_C()
{
  int c_id;
  string cust_name;
  string cust_p;
  cout << "Enter customer  ID:  ";
  cin >> c_id;
  cout << "Enter customer  name:  ";
  cin >> cust_name;
  cout << "Enter customer  password: ";
  cin >> cust_p;
  addCustIntocar_rentAay(c_id, cust_name, cust_p);
  cout << " Account is successfully created" << endl;
}

void addCustIntocar_rentAay(int c_id, string cust_name, string cust_p)
{

  cust_idA[count] = c_id;
  cust_nameA[count] = cust_name;
  C_passwordA[count] = cust_p;
  count++;
}

void remove_C()
{
  int _id;
  int index = -1;
  if (count == 0)
    cout << "No Record Available to Remove!" << endl;
  else
  {
    header1();
    cout << "Enter Customer ID you want to remove:  ";
    cin >> _id;

    for (int i = 0; i < count; i++)
    {
      if (cust_idA[i] == _id)
      {
        index = i;
        break;
      }
    }

    if (index >= 0 && index < MAX_RECORDS)
    {
      for (int i = index; i < count - 1; i++)
      {
        cust_idA[i] = cust_idA[i + 1];
        cust_nameA[i] = cust_nameA[i + 1];
        C_passwordA[i] = C_passwordA[i + 1];
      }
      cust_idA[count] = 0;
      cust_nameA[count] = "";
      C_passwordA[count] = "";
      count--;
      cout << "Account is successfully removed" << endl;
    }
    else
      cout << "Invalid Customer ID!" << endl;
  }
}

void add_Car()
{
  string car;
  int rent;
  cout << "Enter car name(Do not use spaces in car name instead of spaces use under score): ";
  cin >> car;
  cout << "Enter car's rent: ";
  cin >> rent;
  addCarIntocar_rentAay(car, rent);
}
void addCarIntocar_rentAay(string car, int rent)
{
  car_nameA[car_count] = car;
  car_rentA[car_count] = rent;
  car_count++;
}

void remove_Car()
{
  string car_name;
  int index = -1;
  if (car_count == 0)
    cout << "No Record Available to Remove!" << endl;
  else
  {
    cout << "Enter car name you want to remove:  ";
    cin >> car_name;

    for (int i = 0; i < car_count; i++)
    {
      if (car_nameA[i] == car_name)
      {
        index = i;
        break;
      }
    }

    if (index >= 0 && index < MAX_RECORDS)
    {
      for (int i = index; i < car_count - 1; i++)
      {
        car_nameA[i] = car_nameA[i + 1];
        car_rentA[i] = car_rentA[i + 1];
      }
      car_nameA[car_count] = "";
      car_rentA[car_count] = 0;

      car_count--;
      cout << "Car is successfully removed" << endl;
    }
    else
      cout << "Invalid Car !" << endl;
  }
}
// sorting
int sorting(int s)
{
  int largest, idx;
  largest = -1;
  for (int i = s; i < MAX_RECORDS; i++)
  {
    if (largest < car_rentA[i])
    {
      largest = car_rentA[i];
      idx = i;
    }
  }
  return idx;
}

bool checkUser(int id, string password)
{
  for (int i = 0; i < MAX_RECORDS; i++)
  {
    if (id == cust_idA[i] && password == C_passwordA[i])
    {
      return true;
    }
  }
  return false;
}

