#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

   char status;
   int id=0;
   string password;

// ------------------ Prototypes
void header ();
void header1();
void system_cls();
char status_menu();
char login_portal();
char admin_menu(char option);
char cust_menu(char option);
char driver_menu(char option);
void wrong_password();
void cust_display ();
void driver_display ();
void models();
void Rent(int rent1, int rent2, int rent3, int rent4);
void car_driver();
void invoice(string c_name, int c_id, string car_name, int day, int rent, int Advance, int rental_amount, int total_amount);
void Budget(int budget);
void car(int id, string driver1_name,  int driver1_id, string car1, string driver2_name, int driver2_id, string car2 );
void available_car(string car1, string car2);
void edit_rent();
void add_C();
void add_D();
void remove_C();
void remove_D();
void add_Car();
void remove_Car();
void addCarIntoArray(string car, int rent);
void addCustIntoArray(int c_id, string cust_name, string cust_p);
void addDriverIntoArray(int d_id, string driver_name, string driver_p);
// prototypes end
const int MAX_RECORDS = 20;
// Data Structures 

string car_nameA[MAX_RECORDS] = {"Alto suzuki 2016 model", "Honda city 2015 model","Toyota Fortuner 2018 model","Wagon R 2021 model"};
int car_rentA[MAX_RECORDS] = {3000,5000,4000,10000};
int car_count=3;

string cust_nameA[MAX_RECORDS];
int cust_idA[MAX_RECORDS];
string C_passwordA[MAX_RECORDS];
int count=0;

string driver_nameA[MAX_RECORDS];
int driver_idA[MAX_RECORDS];
string D_passwordA[MAX_RECORDS];
int entry_count=0;

main()
{
      char opt, mainchoice, login, option; 
      int   rent=0, budget=0, rental_amount=0, total_amount=0;
      int cust_id=0, driver1_id=0, driver2_id=0, day, Advance= 0, driver_id=0, c_id=0;
      string  cust_name, driver_name, c_name, c_model, driver1_name, driver2_name;
      string  cust_p, driver_p;
      string car_name, rm_cust, rm_driver, car1, car2;
      int rm_c_id=0, rm_d_id=0;


     /* Hard code Id's and passwords....
      Admin id is 123 and password is abc
      customer 1 id is 456 and password is cde
      customer 2 id is 789 and password is fgh
      customer 3 id is 901 and password is ijk
      customer 4 id is 234 and password is lmn
      driver 1 id is 734 and password is xyz
      driver 2 id is 765 and password is mno */
      
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
                    system_cls;
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
                    add_D();
                    system_cls();
                 } // end of option 5
                 else if (option == '6')
                 {
                    remove_D();
                    system_cls;
                   
                 } // end of option 6
                 else if (option == '7')
                 {
                  header1();
                  cust_display();
                  system_cls();
                 } // end of option 7 
                 else if (option == '8')
                 { 
                   header1();  
                   driver_display();
                   system_cls();
                 } // end of option 8
                 else if(option == '9')
                 {
                   header1();
                   add_Car();
                   system_cls();
                 }// end of option 9
                 else if(option == '10')
                 {
                   header1();
                   remove_Car();
                   system_cls();
                 }// end of option 10;
                 else if(option == '11'){
                  break;
                 }
                 else{
                    cout<<"You Chose Wrong option "<<endl;
                   }
             }   // end of admin while loop
             } // start of customers option
             for (int i=0; i<MAX_RECORDS; i++)
             {
                if (( status == 'c' && id == cust_idA[i] && password == C_passwordA[i])
               {
                  while (true)
                 {
                     option = cust_menu( option);
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
                     //sorting( rent1, rent2, rent3, rent4);
                     system_cls();
                     } // end of option 3
                     else if (option == '4')
                     {
                      car_driver();
                      system_cls();
                     }// end of option 4
                     else if (option == '5')
                     {
                      invoice(c_name, c_id, car_name, day, rent, Advance, rental_amount, total_amount);
                      system_cls();
                     } // end of option 5
                     else if(option == '6'){
                      break;
                       }
                     else{
                      cout<<"You Chose Wrong option "<<endl;
                      system_cls();
                      }   // end of customer's while loop
                     } // start of drivers option
                   }
                  }
                 
                 for(int x=0; x<MAX_RECORDS; x++)
                 {
                   if (( status == 'b' && id == driver_idA[x] && password == D_passwordA[x])
                     {
                     while (true)
                     {
                        option = driver_menu( option);
                        if (option == '1')
                        if(id == 734)
                     {
                        cout<<"Enter your name: ";
                        cin>> driver1_name;
                        cout<< "Enter your Id: ";
                        cin >> driver1_id;
                        cout<<"Enter your car: ";
                        cin>> car1;
                     }
                      else if (id == 765)
                     {
                        cout<<"Enter your name: ";
                        cin>> driver2_name;
                        cout<< "Enter your Id: ";
                        cin >> driver2_id;
                        cout<<"Enter your car: ";
                        cin>> car2;
                       system_cls();
                     }// end of option 1
                     else if (option =='2')
                     {
                        header1();
                        car( id, driver1_name, driver1_id, car1, driver2_name, driver2_id, car2 );
                        system_cls();
                     }// end of option 2
                     if (option == '3')
                     {
                        header1();
                        available_car( car1, car2);
                        system_cls();
                     }// end of option 3
                     else if (option == '4')
                     {
                        break;
                     }
                     else
                     {
                     cout<<"You Chose Wrong option "<<endl;
                     }
                     system_cls();
                     } // end of admin while loop
            
                     }
                     else if (status == 'd')
                     {
                     cout <<"Thank you for using our application!!!!!!!!!!!!!!!"<<endl;
                     break;
                     }
                     else 
                     {
                     cout <<"You Entered wrong password......"<<endl;
                     system_cls();
                     }
             }
       }
   }
 // PROGRAM END......


// function definition.........
void header (){
cout<<"***********************************************************"<<endl;
cout<<"*                   Welcome to our company                *"<<endl;
cout<<"***********************************************************"<<endl;
}
// end of header function

void header1 (){
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
}
// end of 2nd header function

void system_cls()
{
      cout<<"Press any key to continue...."<<endl;
      getch();
      system ("CLS");
}
// end of system_cls function
char status_menu()
{
    header();
   cout<<"Select your Status:  >"<<endl;
   cout<<"a.... Admin"<<endl;
   cout<<"b.... Driver"<<endl;
   cout<<"c.... Customer"<<endl;
   cout<<"d.... Exit"<<endl;
   cout<<"Choose your option: ";  
   cin >> status;
   system_cls();
   return status;
  }
  // end of status_menu
  
  char login_portal()
  {
      if (status == 'a' || status == 'b' || status == 'c')
    {
      header1();
     cout <<"               Login Portal                "<<endl;
     cout <<"Enter User ID--------";
     cin >> id;
     cout <<"Enter Password--------";
     cin >> password;
     }
       system_cls();
    return status;
  }
   // end of login portal function

   char admin_menu(char option)
      {
         header();
         cout<<"Main Menu   "<<endl;
         cout<<"Select one of the following options number . . ."<<endl;
         cout<<"1.  Display Car's model"<<endl;
         cout<<"2.  Add new customers"<<endl;
         cout<<"3.  Remove customer"<<endl;
         cout<<"4.  Change rent of cars"<<endl;  
         cout<<"5.  Add new driver"<<endl;
         cout<<"6.  Remove driver"<<endl;
         cout<<"7.  View all customers record"<<endl;  
         cout<<"8.  View all drivers record"<<endl;
         cout<<"9.  Add new car"<<endl;
         cout<<"10. Remove car: "<<endl;
         cout<<"11.  logout"<<endl;
         cout<<"Choose your option: ";  
         cin >> option;
         system_cls();
         return option;
       }
         // end of admin's menu
       
     char cust_menu(char option) 
       {
         header();
         cout<<"Main Menu   "<<endl;
         cout<<"Select one of the following options number . . ."<<endl;
         cout<<"1.  Display Car under budget"<<endl;
         cout<<"2.  Display rent for all cars"<<endl;
         cout<<"3.  Display cars from higher to lower rent"<<endl;
         cout<<"4.  Display car with and without driver"<<endl;  
         cout<<"5.  Invoice"<<endl;
          cout<<"6.  Logout"<<endl;
         cout<<"Choose your option: ";  
         cin >> option;
         system_cls();
         return option;
        }

       // end of customer's menu  
      
       // start of driver's menu 
     char driver_menu(char option)
         {
               header();
               cout<<"Main Menu   "<<endl;
               cout<<"Select one of the following options number . . ."<<endl;
               cout<<"1.  Driver's detail"<<endl;
               cout<<"2.  Display  my Car's model"<<endl;
               cout<<"3.  Display car status"<<endl;
               cout<<"4.  Logout"<<endl; 
               cout <<"Enter your option: ";
               cin >> option;
               system_cls();
               return option;
         }

         // end of driver's menu
    void wrong_password()
      {
         cout <<"Your Password is incorrect. Try again....."<<endl;
      }

        // end of menu function

    void cust_display (){
        if (count > 0){
        	cout <<"All customer's record:"<<endl;
	        for(int i=0; i<count; i++){ 
				cout << "Customer_ID: "<< cust_idA[i] <<endl;
	            cout << "Customer_name: "<< cust_nameA[i] <<endl;
	            cout << "Password: "<< C_passwordA[i] << endl;
	            cout<<"                     "<<endl;
	        }	
		}else
			cout << "No Customer record Available! "<<endl;
        
    }
       // end of display customers function

    void driver_display (){
    	if (entry_count > 0){
        	cout <<"All customer's record:"<<endl;
	        for(int i=0; i<entry_count; i++){ 
				cout << "Driver_ID: "<< driver_idA[i] <<endl;
	            cout << "Driver_name: "<< driver_nameA[i] <<endl;
	            cout << "Password: "<< D_passwordA[i] << endl;
	            cout<<"                     "<<endl;
	        }	
		}else
			cout << "No Customer record Available! "<<endl;
    }
    // end of display driver function
    
    void models()
    {
        header1();
        cout<<"All car's model  >"<<endl;
        
        for (int i=0; i<=car_count; i++){
        	cout<< i+1 <<" :  "<< car_nameA[i] <<endl
			<<"\t\t Rent :  "<< car_rentA[i] <<endl;		
		}
        system_cls();
    }
    
    void edit_rent(){
    	int _id;
    	int rent;
    	cout<<"Enter the Car Id: "<<endl;
    	cin>>_id;
    	
    	if(_id>0 && _id<=MAX_RECORDS){
    		cout<<"Enter new Rent: "<<endl;
    		cin>>rent;
    		car_rentA[_id-1] = rent;
    		cout<<"Rent Update Successfully!"<<endl;	
		}else
			cout<<"Invalid Care Id!"<<endl;
    	
	}
    // end of display model function
    
     void car_driver()
    {
          header1();
          cout << "Cars Avaiable with driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Honda city 2015 model"<<endl;
          cout<<"Rent for toyota fortuner"<<endl;
          cout <<"                                 "<<endl;
          cout << "Cars Avaiable without driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Alto Suzuki 2016 model"<<endl;
          cout<<"Wagon R 2021 model"<<endl;
    }
// evd of car_driver function

   void invoice(string c_name, int c_id, string car_name, int day, int rent, int Advance, int rental_amount, int total_amount)
   {
          header1();
          cout << "Invoice of a customer: "<< endl;
          cout <<"                                 "<<endl;
          cout<<"Enter name: ";
          cin >> c_name;
          cout << "Enter ID: ";
          cin >> c_id;
          cout << "Enter Car model without space: ";
          cin >> car_name;
          cout<< "Enter number of days: ";
          cin >> day;
          cout << "Rent per day: ";
          cin >> rent;
          rental_amount = day * rent;
          cout <<"Enter Advance (equal to per day): ";
          cin >> Advance;
          total_amount = rental_amount - Advance;
         cout << "YOU HAVE TO PAY AFTER ADVANCE IS: "<<total_amount<< endl;
 }
   // end of invoice function

void Budget(int budget)
{
          header1();
          cout <<"Enter your budget: ";
          cin >> budget;
          if (budget > 1000 && budget <= 4000)
          cout <<"A: Alto suzuki 2016 model"<<endl;
          else if (budget > 4000 && budget <= 6000)
          {
          cout<< "A: Alto suzuki 2016 model"<<endl;
          cout<< "B: Honda city 2015 model"<<endl;
          cout<< "C: Wagon R 2021 model"<<endl;
          }
          else
          {
          cout<< "A: Alto suzuki 2016 model"<<endl;
          cout<< "B: Honda city 2015 model"<<endl;
          cout<< "C: Wagon R 2021 model"<<endl;
          cout<<"D: toyota fortuner"<<endl;
          }
          system_cls();
}
// end of budget function;
void car(int id, string driver1_name,  int driver1_id, string car1, string driver2_name, int driver2_id, string car2 )
{
    if (id == 734)
    	cout << driver1_name <<"\t"<< driver1_id <<"\t" << car1<<endl;
    else if (id == 765)
        cout << driver2_name <<"\t"<< driver2_id <<"\t" << car2<<endl;
}
// end of car function
void available_car(string car1, string car2)
{
    if ((car1 == "Toyotafortuner" || car1 == "Hondacity") || ( car2 == "Toyotafortuner" || car2 == "Hondacity"))
      cout << "Your car is Available...."<<endl;
    else
      cout <<"Car is not available....."<<endl;
}
// end of available car
void add_C()
{
	int c_id;
	string cust_name; 
	string cust_p;
    cout<<"Enter customer  ID:  ";
    cin>> c_id;
	cout<<"Enter customer  name:  ";
    cin>> cust_name;
    cout<<"Enter customer  password: ";
    cin>> cust_p;
    addCustIntoArray(c_id,cust_name, cust_p);
    cout<<" Account is successfully created"<<endl;
}

void add_D()
{
	int d_id;
    string driver_name; 
    string driver_p;
    cout<<"Enter driver ID:  ";
    cin>> d_id;
	cout<<"Enter driver name:  ";
    cin>> driver_name;
    cout<<"Enter driver password: ";
    cin>> driver_p;
	addDriverIntoArray(d_id,driver_name, driver_p);
	cout<<"Account is successfully created"<<endl;
}
void addCustIntoArray(int c_id, string cust_name, string cust_p)
{

	cust_idA[count] = c_id;
    cust_nameA[count]=cust_name;
    C_passwordA[count]=cust_p;
    count++;
}

void addDriverIntoArray(int d_id, string driver_name, string driver_p)
{
	driver_idA[entry_count] = d_id;
    driver_nameA[entry_count]=driver_name;
    D_passwordA[entry_count]=driver_p;
    entry_count++;
}

void remove_C(){
    int _id;
    int index = -1;
    if(count==0)
    	cout<<"No Record Available to Remove!"<<endl;
    else{
    	header1();
        cout<<"Enter Customer ID you want to remove:  ";
        cin >> _id;
        
        
		for (int i=0; i<count; i++){
            if(cust_idA[i]==_id){
            	index = i;
            	break;
			}
    	}
                	
        if(index>=0 && index<MAX_RECORDS){
        	for (int i=index; i<count-1; i++){
        		cust_idA[i] = cust_idA[i+1];
                cust_nameA[i] = cust_nameA[i+1];
                C_passwordA[i] = C_passwordA[i+1];
        	}
        	cust_idA[count] = 0;
        	cust_nameA[count] = "";
        	C_passwordA[count] = "";
		   	count--;
			cout<<"Account is successfully removed"<<endl;   	
		}else
			cout<<"Invalid Customer ID!"<<endl;	
	}
}
void remove_D(){
    
	int _id;
	int index = -1;
    if(entry_count==0)
    	cout<<"No Record Available to Remove!"<<endl;
    else{
    	header1();
        cout<<"Enter Driver ID you want to remove:  ";
        cin >> _id;
        
        for (int i=0; i<entry_count; i++){
            if(driver_idA[i]==_id){
            	index = i;
            	break;
			}
    	}
        
        if(index>=0 && index<MAX_RECORDS){
        	for (int i=index; i<entry_count-1; i++){
        		driver_idA[i] = driver_idA[i+1];
                driver_nameA[i] = driver_nameA[i+1];
                D_passwordA[i] = D_passwordA[i+1];
        	}
        	driver_idA[entry_count] = 0;
        	cust_nameA[entry_count] = "";
        	D_passwordA[entry_count] = "";
		   	entry_count--;
			cout<<"Account is successfully removed"<<endl;   	
		}else
			cout<<"Invalid Driver ID!"<<endl;	
	}
}
void add_Car()
{
  string car;
  int rent;
  cout<<"Enter car name: ";
  getline(cin,car);
  cout<<"Enter car's rent: ";
  cin>> rent;
  addCarIntoArray(car, rent);
}	
void addCarIntoArray(string car, int rent)
{
  car_nameA[car_count]=car;
  car_rentA[car_count]=rent;
  car_count++;
}

void remove_Car()
{
    string car_name;;
      int index = -1;
        if(car_count==0)
          cout<<"No Record Available to Remove!"<<endl;
        else{
          header1();
            cout<<"Enter car name you want to remove:  ";
            getline(cin,car_name);
            
            for (int i=0; i<car_count; i++){
                if(car_nameA[i]==car_name){
                  index = i;
                  break;
                 }
               }
            
            if(index>=0 && index<MAX_RECORDS){
              for (int i=index; i<car_count-1; i++){
                car_nameA[i] = car_nameA[i+1];
                    car_rentA[i] = car_rentA[i+1];
               }
               car_nameA[car_count] = "";
               car_rentA= 0;
            
               car_count--;
          cout<<"Car is successfully removed"<<endl;   	
        }else
          cout<<"Invalid Car !"<<endl;	
      }


}




