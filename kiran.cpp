#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include<fstream>
using namespace std;
const int MAX_RECORDS = 10;
int employe_count =0;

////////////    DATA STRUCTURE //////////
string idA[MAX_RECORDS];
string nameA[MAX_RECORDS];
string designationA[MAX_RECORDS];
int salaryA[MAX_RECORDS];
string monthA[MAX_RECORDS];
int leavesA[MAX_RECORDS];
int Allowed_leaves[MAX_RECORDS];
int deductionA[MAX_RECORDS];

/////////// FUNCTION PROTOTYPES //////////////////
void header();
void system_cls();
char menu(char option);
void add_employee();
void addEmployeeIntoArray(string name, string id, string designation, string month, int salary, int leaves, int allow_leaves, int deduction);
void addEmployeeIntoFile();
void loadEmployeIntoArray();
void display_employe();
void bill();

main()
{ 
	loadEmployeIntoArray();
char option;
	while(true)
	{
	option = menu(option);
	if(option=='1')
	{
       header();
	   display_employe();
	   system_cls();
	}
	else if(option=='2')
	{
		header();
		bill();
		system_cls();
		
	}
	else if(option=='3')
	{
		header();
		add_employee();
		system_cls();
	}
	else if(option=='4')
	{
		cout<<"Thank you for using our application!!!!!!!!!!!"<<endl;
		system_cls();
		break;
	}
    else{
		cout<<"You choose wrong option"<<endl;
	}
	addEmployeeIntoFile();
}
}
void header()
{
	cout << "///////////////////////////////////////////////////////" << endl;
	cout << "           PAY ROLL MANAGEMENT SYSTEM                  " << endl;
	cout << "///////////////////////////////////////////////////////" << endl;
	cout << "                                             " << endl;
}

char menu(char option)
{
	header();
	cout << "////////////  Main Menu /////////////// " << endl;
	cout << "                                        " << endl;
	cout << "SELECT ONE OF THE FOLLOWING OPTIONS NUMBERS........" << endl;
	cout << "1. Enter 1 information of employee to manage salary of specific month" << endl;
	cout << "2. Enter 2 to print salary slip" << endl;
	cout << "3. Enter 3 to enter information of new employee" << endl;
	cout << "4. Enter 4 to quit" << endl;
	cout << "Enter your option" << endl;
	cin >> option;
	system_cls();
	return option;
}

void system_cls()
{
	cout << "Press any key to continue" << endl;
	getch();
	system("CLS");
}

void add_employee()
{
	string name;
	string id;
	string designation, month;
	int salary=0, leaves=0, allow_leaves=0, deduction=0;
	cout << "Enter employee name: ";
	cin >> name;
	cout << "Enter employee id: ";
	cin >> id;
	cout << "Enter designation of employee: ";
	cin >> designation;
	cout << "Enter Basic salary: ";
	cin >> salary;
	cout << "Enter Month of salary: ";
	cin >> month;
	cout << "Enter leaves: ";
	cin >> leaves;
	cout << "Enter allowed leaves: ";
	cin >> allow_leaves;
	cout << "Enter per leave deduction: ";
	cin >> deduction;
	addEmployeeIntoArray(name, id, designation, month, salary, leaves, allow_leaves, deduction);
}

void addEmployeeIntoArray(string name, string id, string designation, string month, int salary, int leaves, int allow_leaves, int deduction)
{

	nameA[employe_count] = name;
	idA[employe_count] = id;
	designationA[employe_count] = designation;
	monthA[employe_count] = month;
	salaryA[employe_count] = salary;
	leavesA[employe_count] = leaves;
	Allowed_leaves[employe_count] = allow_leaves;
	deductionA[employe_count] = deduction;
	employe_count++;
     
}

void addEmployeeIntoFile()
{
  fstream employe;
  employe.open("EmployeManagementSystem.txt", ios::out);
  for (int i = 0; i < employe_count; i++)
  {
    employe << nameA[i] << "\t" << idA[i] << "\t" << designationA[i] << "\t" << monthA[i] <<"\t"<<salaryA[i]<<"\t"<<leavesA[i]<<"\t"<<Allowed_leaves[i]<<"\t"<<deductionA[i]<<endl;
  }
    employe.close();
}

void display_employe()
{
if (employe_count > 0)
  {
    cout << "All employee's record:" << endl;
    for (int i = 0; i < employe_count; i++)
    {
      cout << " Employe name: " << nameA[i] << endl;
      cout << "Employe id: " << idA[i] << endl;
      cout << "Employe designation: " << designationA[i] << endl;
      cout << "Salary Month: " << monthA[i] << endl;
      cout << " Basic Salary: " << salaryA[i] << endl;
      cout << "Total leaves: " << leavesA[i] << endl;
      cout << "Allowed leaves: " << Allowed_leaves[i] << endl;
      cout << "Deduction per leave: " << deductionA[i] << endl;
      cout << "                     " << endl;
    }
  }
  else
  {
    cout << "No Employeee record Available! " << endl;
}
}

void loadEmployeIntoArray()
{
  fstream employe;
    employe.open("EmployeManagementSystem.txt" , ios::in);
    while(!employe.eof())
    {
        string name, id, designation, month;
		int salary, leaves, allow_leaves, deduction;
        employe >> name;
        employe >> id;
        employe >> designation;
        employe >> month;
        employe >> salary;
        employe >> leaves;
        employe >> allow_leaves;
        employe >> deduction;
        addEmployeeIntoArray(name, id, designation, month, salary, leaves, allow_leaves, deduction);
    }
    employe.close();
}

void bill()
{
  string month;
  cout<<"Enter month: ";
  cin>>month;
  int salary;
  for(int i=0;i<employe_count; i++)
  {
	  if(monthA[i]==month)
	  {
		  cout<<"Salary month: "<<month<<endl;
		  cout<<"Name : "<<nameA[i]<<endl;
		  cout<<"Designation: "<<designationA[i]<<endl;
		  salary=salaryA[i]-(leavesA[i]-Allowed_leaves[i])*deductionA[i];
		  cout<<"Salary:  "<<salary<<endl;
		  cout<<"                 "<<endl;
	  }
  }

}

