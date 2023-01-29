#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
// global variable declaration
      char status, opt; 
      int id=0,  exit = 0, option, count = 0, count1=0, count2=0, count3=0, rent=0, budget=0, rental_amount=0, total_amount=0;
      int cust1_id=0, cust2_id=0 ,cust3_id=0, cust4_id=0, driver1_id=0, driver2_id=0, c_id=0, day, advance;
      string password, cust1_name, cust2_name, cust3_name, cust4_name, driver1_name, driver2_name, c_name, c_model;
      string  cust1_p, cust2_p, cust3_p, cust4_p, driver1_p, driver2_p;
      string car_name, rm_cust1, rm_cust2, rm_cust3, rm_cust4, rm_driver1, rm_driver2, car1, car2;
      int rm_c_id1=0, rm_c_id2=0, rm_c_id3=0, rm_c_id4=0, rm_d_id1=0, rm_d_id2=0;
      /* Hard code Id's and passwords....
      Admin id is 123 and password is abc
      customer 1 id is 456 and password is cde
      customer 2 id is 789 and password is fgh
      customer 3 id is 901 and password is ijk
      customer 4 id is 234 and password is lmn
      driver 1 id is 734 and password is xyz
      driver 2 id is 765 and password is mno */
      // hard code rent
      int rent1 = 3000, rent2= 5000, rent3 = 4000, rent4 = 10000;
       
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
  }
   // end of login portal function

   char menu()
{
       if (status == 'a' && id == 123 && password == "abc")
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
         cout<<"9.  Exit"<<endl;
         cout<<"Choose your option: ";  
         cin >> option;
      return option;
        }
         // end of admin's menu
       
       else if ((status == 'c' && id == 456 && password == "cde") || (status == 'c' && id == 789 && password == "fgh") || ( status == 'c' && id == 901 && password == "ijk") || (status == 'c' && id == 234 && password == "lmn")) 
 
     {
         header();
         cout<<"Main Menu   "<<endl;
         cout<<"Select one of the following options number . . ."<<endl;
         cout<<"1.  Display Car under budget"<<endl;
         cout<<"2.  Display rent for all cars"<<endl;
         cout<<"3.  Display cars from lower to higher rent"<<endl;
         cout<<"4.  Display car with and without driver"<<endl;  
         cout<<"5.  Invoice"<<endl;
          cout<<"6.  Exit"<<endl;
         cout<<"Choose your option: ";  
         cin >> option;
         return option;
        }
       // end of customer's menu  
      
       // start of driver's menu 

        else if ( status == 'b' )
         {
               header();
               cout<<"Main Menu   "<<endl;
               cout<<"Select one of the following options number . . ."<<endl;
               cout<<"1.  Driver's detail"<<endl;
               cout<<"2.  Display  my Car's model"<<endl;
               cout<<"3.  Display car status"<<endl;
               cout<<"4. Exit";
               return option;
         }

         // end of driver's menu
         else
        {
         cout <<"Your Password is incorrect. Try again....."<<endl;
         login_portal();
        }
}
        // end of menu function

        void cust_display (string name, int cust_id, string cust_p)
        {
          header1();
          cout <<"All customer's record:"<<endl;
          if (cust_id > 0)
          {
             cout << "Customer_name: "<< cust_name <<endl;
             cout << "Customer_ID: "<< cust_id <<endl;
             cout << "Password: "<< cust_p << endl;
             cout<<"                     "<<endl;
          }
       }
       // end of display customers function

    void driver_display (string name, int driver_id, string driver_p)
        {
          header1();
          cout <<"All driver's record:"<<endl;
          if (driver_id > 0)
          {
             cout << "Driver_name: "<< driver_name <<endl;
             cout << "Driver_ID: "<< driver_id <<endl;
             cout << "Password: "<< driver_p << endl;
             cout<<"                     "<<endl;
          }
       }
    // end of display driver function
    
    void models()
    {
            header1();
            cout<<"All car's model  >"<<endl;
            cout<<"A: Alto Suzuki 2016 model "<<endl;
            cout<<"B: Honda city 2015 model"<<endl;
            cout<<"C: Toyota Fortuner 2018 model"<<endl;
            cout<<"Wagon R 2021 model"<<endl;
    }
    // end of display model function
    
    void rent()
    {
           header1();
          cout <<"Rent for all cars: "<<endl;
          cout<< "Rent for Alto suzuki 2016 model: "<< rent1 <<" per day"<<endl;
          cout<< "Rent for Honda city 2015 model: "<< rent2 << " per day"<<endl;
          cout<< "Rent for Wagon R 2021 model: "<< rent3 << " per day"<<endl;
          cout<<"Rent for toyota fortuner: "<< rent4 << " per day"<<endl;
    }
    // end of display rent function
    void sorting(int rent1, int rent2, int rent3, int rent4)
    {
      cout <<"Car from lower to higher rent:";
              if (rent1 > rent2 && rent1 > rent3 && rent1 > rent4)
             cout << "Marti Suzuki: "<< rent1 <<" per day";
           {
             if (rent2 > rent3 && rent2 > rent4)
             cout << "Honda City: "<< rent2 << " per day";
             else if ( rent3 > rent2 && rent3 > rent4)
             cout << "Wagon R: "<< rent3 << " per day";
             else
             cout << "toyota fortuner: "<< rent4 << " per day";
           
             if (rent3 > rent2 && rent3 > rent4)
                 cout << "Wagon R: "<< rent3 <<" per day";          
             else if (rent2 > rent3 && rent2 > rent4)
             cout << "Honda City: "<< rent2 << " per day";
             else
                 cout << "toyota fortuner: "<< rent4 << " per day";
            
             if (rent4 > rent2 && rent4 > rent3)
             cout << "toyota fortuner: "<< rent4 << " per day";
             else if (rent2 > rent3 && rent2 > rent4)
             cout << "Honda City: "<< rent2 << " per day";
             else
                  cout << "Wagon R: "<< rent3 <<" per day"; 
           }
        } 

       else if (rent2 > rent1 && rent2 > rent3 && rent2 > rent4)
          {
		     cout << "Honda City: "<< rent2 <<" per day";
           {
             if (rent1 > rent3 && rent1 > rent4)
             cout << "Alto Suzuki: "<< rent1 << " per day";
             else if ( rent3 > rent1 && rent3 > rent4)
             cout << "Wagon R: "<< rent3 << " per day";
             else
             cout << "toyota fortuner: "<< rent4 << " per day";
           
             if (rent3 > rent1 && rent3 > rent4)
                 cout << "Wagon R: "<< rent3 <<" per day";          
             else if (rent1 > rent3 && rent1 > rent4)
             cout << "Alto Suzuki: "<< rent1 << " per day";
             else
                 cout << "toyota fortuner: "<< rent4 << " per day";
            
             if (rent4 > rent1 && rent4 > rent3)
             cout << "toyota fortuner: "<< rent4 << " per day";
             else if (rent1 > rent3 && rent1 > rent4)
             cout << "Alto suzuki: "<< rent1 << " per day";
             else
                  cout << "Wagon R: "<< rent3 <<" per day"; 
           }
       }
        else if (rent3 > rent1 && rent3 > rent2 && rent3 > rent4)
           { 
			 cout << "Wagon R: "<< rent3 <<" per day";
           {
             if (rent1 > rent2 && rent1 > rent4)
             cout << "Alto Suzuki: "<< rent1 << " per day";
             else if ( rent2 > rent1 && rent2 > rent4)
             cout << "Honda City: "<< rent2 << " per day";
             else
             cout << "toyota fortuner: "<< rent4 << " per day";
           
             if (rent2 > rent1 && rent2 > rent4)
                 cout << "Honda City: "<< rent2 <<" per day";          
             else if (rent1 > rent2 && rent1 > rent4)
             cout << "Alto Suzuki: "<< rent1 << " per day";
             else
                 cout << "toyota fortuner: "<< rent4 << " per day";
            
             if (rent4 > rent1 && rent4 > rent2)
             cout << "toyota fortuner: "<< rent4 << " per day";
             else if (rent1 > rent2 && rent1 > rent4)
             cout << "Alto suzuki: "<< rent1 << " per day";
             else
                  cout << "Honda City "<< rent2 <<" per day"; 
           }
     }
            else 
             cout << "Toyota Fortuner: "<< rent4 <<" per day";
           {
             if (rent1 > rent3 && rent1 > rent2)
             cout << "Alto Suzuki: "<< rent1 << " per day";
             else if ( rent3 > rent1 && rent3 > rent2)
             cout << "Wagon R: "<< rent3 << " per day";
             else
             cout << "Honda city: "<< rent2 << " per day";
           
             if (rent3 > rent1 && rent3 > rent2)
                 cout << "Wagon R: "<< rent3 <<" per day";          
             else if (rent1 > rent3 && rent1 > rent2)
             cout << "Alto Suzuki: "<< rent1 << " per day";
             else
                 cout << "Honda city: "<< rent2 << " per day";
            
             if (rent2 > rent1 && rent2 > rent3)
             cout << "Honda City: "<< rent2 << " per day";
             else if (rent1 > rent3 && rent1 > rent2)
             cout << "Alto suzuki: "<< rent1 << " per day";
             else
                  cout << "Wagon R: "<< rent3 <<" per day"; 
           }

    }
    // end of sorting function

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

   void invoice()
   {
          header1();
          cout << "Invoice of a customer: "<< endl;
          cout <<"                                 "<<endl;
          cout<<"Enter name: ";
          cin >> c_name;
          cout << "Enter ID: ";
          cin >> c_id;
          cout << "Enter Car model: ";
          cin >> car_name;
          cout<< "Enter number of days: ";
          cin >> day;
          cout << "Rent per day: ";
          cin >> rent;
           rental_amount = day * rent;
          cout <<"Enter rent of per day (advance): ";
          cin >> advance;
           total_amount = rental_amount - advance;
 }
   // end of invoice function

void budget()
{
          header1();
          cout <<"Enter your budget: ";
          cin >> budget;
          if (budget > 1000 && budget <= 4000)
          cout <<"A: Alto suzuki 2016 model";
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
}
// end of budget function;
void car()
{
   header1();
          if (id == 765)
            cout << driver1_name <<"\t"<< driver1_id <<"\t" << car1;
          else
           cout << driver1_name <<"\t"<< driver1_id <<"\t" << car1;
}
// end of car function
void available_car()
{
              header1();
              if (car1 == "Toyota fortuner" || car1 == "Honda city") 
              cout << "Your car is Available....";
            else
              cout <<"Car is not available.....";
             if ( car2 == "Toyota fortuner" || car2 == "Honda city") 
              cout << "Your car is Available....";
            else
               cout <<"Car is not available.....";
}
// end of available car

// start of main function
main ()
{
     
       while (true)
       {
             status = status_menu();

       }
}
