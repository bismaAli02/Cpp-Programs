#include<iostream>
#include<conio.h>
using namespace std ;

int main()
{
      
      char status, opt; 
      int id=0, id1=0, id2=0, id3=0, id4=0, exit = 0, option, count = 0, count1=0, count2=0, count3=0, rent=0, budget=0, rental_amount=0, total_amount=0;
      int cust1_id=0, cust2_id=0 ,cust3_id=0, cust4_id=0, driver1_id=0, driver2_id=0, c_id=0, day, advance;
      string password,password1, password2, password3, password4, cust1_name, cust2_name, cust3_name, cust4_name, driver1_name, driver2_name, c_name, c_model;
      string  cust1_p, cust2_p, cust3_p, cust4_p, driver1_p, driver2_p;
      string car_name, rm_cust1, rm_cust2, rm_cust3, rm_cust4, rm_driver1, rm_driver2;
      int rm_c_id1=0, rm_c_id2=0, rm_c_id3=0, rm_c_id4=0, rm_d_id1=0, rm_d_id2=0;
      
      // hard code rent
      int a = 3000, b = 5000, c = 4000, d = 10000;
   // start of selection staus 
   cout<<"***********************************************************"<<endl;
   cout<<"*                   Welcome to our company                *"<<endl;
   cout<<"***********************************************************"<<endl;
    
   cout<<"Select your Status:  >"<<endl;
   cout<<"a.... Admin"<<endl;
   cout<<"b.... Driver"<<endl;
   cout<<"c.... Customer"<<endl;
   cout<<"Choose your option: ";  
   cin >> status;
   cout<<"press any key to continue...";
   char j;
   cin >> j;
   system ("CLS");
   // End of status selection..
    
    // start of login portal
    if (status == 'a')
     cout<<"////////////////////////////////////////////////////////////"<<endl;
     cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
     cout<<"////////////////////////////////////////////////////////////"<<endl;
     
     cout <<"               Login Portal                "<<endl;
     cout <<"Enter User ID--------";
     cin >> id;
     cout <<"Enter Password--------";
     cin >> password;
     cout<<"press any key to continue...";
     char i;
     cin >> i;
     system ("CLS");
     // end of login portal

     // start of menu option 
      if (status == 'a' && id == 123 && password == "abc")
        {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
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
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
        }
      else
        {
         cout <<"Your Password is incorrect. Try again....."<<endl;
         cout<<"press any key to continue...";
         char m;
         cin >> m;
         system ("CLS");
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
          cout <<"               Login Portal                "<<endl;
          cout <<"Enter User ID--------";
          cin >> id;
          cout <<"Enter Password--------";
          cin >> password;
          cout<<"press any key to continue...";
          char p;
          cin >> p;
          system ("CLS");
        }
        // end of admin's menu

      // condition for admin's option
    if (option == 1)
       {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            
            cout<<"All car's model  >"<<endl;
            cout<<"A: Alto Suzuki 2016 model "<<endl;
            cout<<"B: Honda city 2015 model"<<endl;
            cout<<"C: Toyota Fortuner 2018 model"<<endl;
            cout<<"Wagon R 2021 model"<<endl;
            cout<<"press any key to continue...";
            char u;
            cin >> u;
            system ("CLS");
        }
       // end of option 1
       if (option == 2)
       {  
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
           if (count == 0)
         {
            cout<<"Enter customer 1 name:  ";
            cin>> cust1_name;
            cout<<"Enter customer 1 id: ";
            cin>> cust1_id;
            cout<<"Enter customer 1 password: ";
            cin>> cust1_p;
         }
         else if (count == 1)
         {
            cout<<"Enter customer 2 name:  ";
            cin>> cust2_name;
            cout<<"Enter customer 2 id: ";
            cin>> cust2_id;
            cout<<"Enter customer 2 password: ";
            cin>> cust2_p;
        } 
         else if (count == 2)
        {
            cout<<"Enter customer 3 name:  ";
            cin>> cust3_name;
            cout<<"Enter customer 3 id: ";
            cin>> cust3_id;
            cout<<"Enter customer 3 password: ";
            cin>> cust3_p;
        }
         else 
        {
            cout<<"Enter customer 4 name:  ";
            cin>> cust4_name;
            cout<<"Enter customer 4 id: ";
            cin>> cust4_id;
            cout<<"Enter customer 4 password: ";
            cin>> cust4_p;
        }
            count = count + 1;
            cout<<"press any key to continue...";
            char n;
            cin >> n;
            system ("CLS");


      }

// end of option 2
     if (option == 3)
       cout <<"You don't have any record yet";
// end of option 3
     if (option == 4)
     {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       cout << "Enters car name you want to change rent: ";
       cin >> car_name;
       cout << "Enter new rent: ";
       cin >> rent;
       cout<<"press any key to continue...";
       char u;
       cin >> u;
       system ("CLS");
     }   
   // end of option 4

   if (option == 5)
  {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
        if (count1 == 0)
         {
            cout<<"Enter driver 1 name:  ";
            cin>> driver1_name;
            cout<<"Enter driver 1 id: ";
            cin>> driver1_id;
            cout<<"Enter driver 1 password: ";
            cin>> driver1_p;
         }
         else if (count1 == 1)
         {
            cout<<"Enter driver 2 name:  ";
            cin>> driver2_name;
            cout<<"Enter driver 2 id: ";
            cin>> driver2_id;
            cout<<"Enter driver 2 password: ";
            cin>> driver2_p;
         }
            count1 = count1 + 1;
            cout<<"press any key to continue...";
            char k;
            cin >> k;
            system ("CLS");
  }
   // end of option 5
   
    if (option == 6)
      cout <<"You don't have any record yet";
    if (option == 7)
      cout<<"You don't have any record yet";
    if (option == 8)
    cout << "You don't have any record yet";   
    if (option == 9)
     {
      cout << "Exit" ;
      exit = 1;
     }
     cout <<"press any key to continue";
     char y;
     cin >> y;
     system ("CLS");

// end of 1st display
   

// start of 2nd display
      if (exit == 0)
       {
        {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
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
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
      
        }
        // condition for admin's option
    
    if (option == 1)
       {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            
            cout<<"All car's model  >"<<endl;
            cout<<"A: Alto Suzuki 2016 model "<<endl;
            cout<<"B: Honda city 2015 model"<<endl;
            cout<<"C: Toyota Fortuner 2018 model"<<endl;
            cout<<"Wagon R 2021 model"<<endl;
            cout<<"press any key to continue...";
            char u;
            cin >> u;
            system ("CLS");
        }
       // end of option 1
       if (option == 2)
       
	    {  
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
      
           if (count == 0)
         {
            cout<<"Enter customer 1 name:  ";
            cin>> cust1_name;
            cout<<"Enter customer 1 id: ";
            cin>> cust1_id;
            cout<<"Enter customer 1 password: ";
            cin>> cust1_p;
         }
         else if (count == 1)
         {
            cout<<"Enter customer 2 name:  ";
            cin>> cust2_name;
            cout<<"Enter customer 2 id: ";
            cin>> cust2_id;
            cout<<"Enter customer 2 password: ";
            cin>> cust2_p;
        } 
         
       }
	   	 else if (count == 2)
        {
            cout<<"Enter customer 3 name:  ";
            cin>> cust3_name;
            cout<<"Enter customer 3 id: ";
            cin>> cust3_id;
            cout<<"Enter customer 3 password: ";
            cin>> cust3_p;
        }
         else if (count == 3)
        {
            cout<<"Enter customer 4 name:  ";
            cin>> cust4_name;
            cout<<"Enter customer 4 id: ";
            cin>> cust4_id;
            cout<<"Enter customer 4 password: ";
            cin>> cust4_p;
        }
            count = count + 1;
            cout<<"press any key to continue...";
            char n;
            cin >> n;
            system ("CLS");
      

// end of option 2
     
     if (option == 3)
       {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
         if (count2 = 0)
         {
            if (cust1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
          }
         }
         else if (count2 = 1)
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
         else if (count2 = 2)
         {
            if (cust3_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust3;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id3;
          }
         }
         else if (count2 = 3)
         {
            if (cust4_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust4;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id4;
          }
         }
            count2 = count2 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
       }
       
       
// end of option 3
     if (option == 4)
     {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       cout << "Enters car name you want to change rent: ";
       cin >> car_name;
       cout << "Enter new rent: ";
       cin >> rent;
       cout<<"press any key to continue...";
       char u;
       cin >> u;
       system ("CLS");
     }   
   // end of option 4

   if (option == 5)
  {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
        if (count1 == 0)
         {
            cout<<"Enter driver 1 name:  ";
            cin>> driver1_name;
            cout<<"Enter driver 1 id: ";
            cin>> driver1_id;
            cout<<"Enter driver 1 password: ";
            cin>> driver1_p;
         }
         else if (count1 == 1)
         {
            cout<<"Enter driver 2 name:  ";
            cin>> driver2_name;
            cout<<"Enter driver 2 id: ";
            cin>> driver2_id;
            cout<<"Enter driver 2 password: ";
            cin>> driver2_p;
         }
            count1 = count1 + 1;
            cout<<"press any key to continue...";
            char k;
            cin >> k;
            system ("CLS");
  }
   // end of option 5
   
    if (option == 6)
    {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       if (count3 = 0)
         {
            if (driver1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
          }
         }
         else 
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
            count3 = count3 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
    }      
    // end of option 6
   
    if (option == 7) 
	  {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
       cout<<"press any key to continue...";
       char n;
       cin >> n;
       system ("CLS");
     }
     // end of option 7
    if (option == 8)
   {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
          if (driver2_id > 0)
          {
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
       cout<<"press any key to continue...";
       char l;
       cin >> l;
       system ("CLS");
     }
     // end of option 8
     
    if (option == 9)
     {
      cout << "Exit" ;
      exit = 1;
     }
     cout<<"press any key to continue...";
     char o;
     cin >> o;
     system ("CLS");
}
// end of 2nd display

// start of 3rd display

    if (exit == 0)
      {
         {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
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
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
      
         }
        // condition for admin's option
         if (option == 1)
         {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            
            cout<<"All car's model  >"<<endl;
            cout<<"A: Alto Suzuki 2016 model "<<endl;
            cout<<"B: Honda city 2015 model"<<endl;
            cout<<"C: Toyota Fortuner 2018 model"<<endl;
            cout<<"Wagon R 2021 model"<<endl;
            cout<<"press any key to continue...";
            char u;
            cin >> u;
            system ("CLS");
        }
       // end of option 1
       if (option == 2)
       {  
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
      
           if (count == 0)
         {
            cout<<"Enter customer 1 name:  ";
            cin>> cust1_name;
            cout<<"Enter customer 1 id: ";
            cin>> cust1_id;
            cout<<"Enter customer 1 password: ";
            cin>> cust1_p;
         }
         else if (count == 1)
         {
            cout<<"Enter customer 2 name:  ";
            cin>> cust2_name;
            cout<<"Enter customer 2 id: ";
            cin>> cust2_id;
            cout<<"Enter customer 2 password: ";
            cin>> cust2_p;
        } 
         else if (count == 2)
        {
            cout<<"Enter customer 3 name:  ";
            cin>> cust3_name;
            cout<<"Enter customer 3 id: ";
            cin>> cust3_id;
            cout<<"Enter customer 3 password: ";
            cin>> cust3_p;
        }
         else if (count == 3)
        {
            cout<<"Enter customer 4 name:  ";
            cin>> cust4_name;
            cout<<"Enter customer 4 id: ";
            cin>> cust4_id;
            cout<<"Enter customer 4 password: ";
            cin>> cust4_p;
        }
            count = count + 1;
            cout<<"press any key to continue...";
            char n;
            cin >> n;
            system ("CLS");
      }

// end of option 2
     
     if (option == 3)
       {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
         if (count2 = 0)
         {
            if (cust1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
          }
         }
         else if (count2 = 1)
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
         else if (count2 = 2)
         {
            if (cust3_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust3;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id3;
          }
         }
         else
         {
            if (cust4_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust4;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id4;
          }
         }
            count2 = count2 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
       }
       
// end of option 3
     if (option == 4)
     {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       cout << "Enters car name you want to change rent: ";
       cin >> car_name;
       cout << "Enter new rent: ";
       cin >> rent;
       cout<<"press any key to continue...";
       char u;
       cin >> u;
       system ("CLS");
     }   
   // end of option 4

   if (option == 5)
  {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
        if (count1 == 0)
         {
            cout<<"Enter driver 1 name:  ";
            cin>> driver1_name;
            cout<<"Enter driver 1 id: ";
            cin>> driver1_id;
            cout<<"Enter driver 1 password: ";
            cin>> driver1_p;
         }
         else if (count1 == 1)
         {
            cout<<"Enter driver 2 name:  ";
            cin>> driver2_name;
            cout<<"Enter driver 2 id: ";
            cin>> driver2_id;
            cout<<"Enter driver 2 password: ";
            cin>> driver2_p;
         }
            count1 = count1 + 1;
            cout<<"press any key to continue...";
            char k;
            cin >> k;
            system ("CLS");
  }
   // end of option 5
   
    if (option == 6)
    {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       if (count3 = 0)
         {
            if (driver1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
              
          }
         }
         else 
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
            count3 = count3 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
    }      
    // end of option 6
   
    if (option == 7 && rm_c_id1 == 0 && rm_c_id2 == 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
      
      {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
      }
      else if (option == 7 && rm_c_id1 != 0 && rm_c_id2 == 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
      {
         
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
      } 
          else if (option == 7 && rm_c_id1 == 0 && rm_c_id2 != 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
          {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout <<"All customer's record:"<<endl;
            if (cust1_id > 0)
              {
                cout << "Customer1_name: "<< cust1_name <<endl;
                cout << "Customer1_ID: "<< cust1_id <<endl;
                cout << "Password: "<< cust1_p << endl;
              }
            if (cust3_id > 0)
              {
                 cout << "Customer3_name: "<< cust3_name <<endl;
                 cout << "Customer3_ID: "<< cust3_id <<endl;
                 cout << "Password: "<< cust3_p << endl;
              }
            if (cust4_id > 0)
              {
                   cout << "Customer4_name: "<< cust4_name <<endl;
                   cout << "Customer4_ID: "<< cust4_id <<endl;
                   cout << "Password: "<< cust4_p << endl;
              }
          }
          else if (option == 7 && rm_c_id1 == 0 && rm_c_id2 == 0 && rm_c_id3 != 0 && rm_c_id4 == 0)
         {     
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust4_id > 0)
              {
                   cout << "Customer4_name: "<< cust4_name <<endl;
                   cout << "Customer4_ID: "<< cust4_id <<endl;
                   cout << "Password: "<< cust4_p << endl;
              }
         }
          else
        {
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
        }
       cout<<"press any key to continue...";
       char n;
       cin >> n;
       system ("CLS");
    
     // end of option 7
    if (option == 8 && rm_d_id1 == 0 && rm_d_id2 == 0)  
      {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
          if (driver2_id > 0)
          {
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
   }
    else if (option == 8 && rm_d_id1 != 0 && rm_d_id2 == 0)
      {
         if (driver2_id > 0)
          {
             cout<<"////////////////////////////////////////////////////////////"<<endl;
             cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
             cout<<"////////////////////////////////////////////////////////////"<<endl;
             cout <<"All driver's record:"<<endl;
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
      }   
      else
      { 
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
      }
       cout<<"press any key to continue...";
       char l;
       cin >> l;
       system ("CLS");

     // end of option 8
     
    if (option == 9)
    {
      cout << "Exit" ;
      exit = 1;
    }
     cout<<"press any key to continue...";
     char v;
     cin >> v;
     system ("CLS");
  }
// end of 3rd display
 
 // start of 4th display

  if (exit == 0)
      {
         {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
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
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
      
         }
        // condition for admin's option
         if (option == 1)
         {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            
            cout<<"All car's model  >"<<endl;
            cout<<"A: Alto Suzuki 2016 model "<<endl;
            cout<<"B: Honda city 2015 model"<<endl;
            cout<<"C: Toyota Fortuner 2018 model"<<endl;
            cout<<"Wagon R 2021 model"<<endl;
            cout<<"press any key to continue...";
            char u;
            cin >> u;
            system ("CLS");
        }
       // end of option 1
       if (option == 2)
       {  
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
      
           if (count == 0)
         {
            cout<<"Enter customer 1 name:  ";
            cin>> cust1_name;
            cout<<"Enter customer 1 id: ";
            cin>> cust1_id;
            cout<<"Enter customer 1 password: ";
            cin>> cust1_p;
         }
         else if (count == 1)
         {
            cout<<"Enter customer 2 name:  ";
            cin>> cust2_name;
            cout<<"Enter customer 2 id: ";
            cin>> cust2_id;
            cout<<"Enter customer 2 password: ";
            cin>> cust2_p;
        } 
         else if (count == 2)
        {
            cout<<"Enter customer 3 name:  ";
            cin>> cust3_name;
            cout<<"Enter customer 3 id: ";
            cin>> cust3_id;
            cout<<"Enter customer 3 password: ";
            cin>> cust3_p;
        }
         else if (count == 3)
        {
            cout<<"Enter customer 4 name:  ";
            cin>> cust4_name;
            cout<<"Enter customer 4 id: ";
            cin>> cust4_id;
            cout<<"Enter customer 4 password: ";
            cin>> cust4_p;
        }
            count = count + 1;
            cout<<"press any key to continue...";
            char n;
            cin >> n;
            system ("CLS");
      }

// end of option 2
     
     if (option == 3)
       {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
         if (count2 = 0)
         {
            if (cust1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
          }
         }
         else if (count2 = 1)
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
         else if (count2 = 2)
         {
            if (cust3_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust3;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id3;
          }
         }
         else
         {
            if (cust4_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust4;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id4;
          }
         }
            count2 = count2 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
       }
       
// end of option 3
     if (option == 4)
     {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       cout << "Enters car name you want to change rent: ";
       cin >> car_name;
       cout << "Enter new rent: ";
       cin >> rent;
       cout<<"press any key to continue...";
       char u;
       cin >> u;
       system ("CLS");
     }   
   // end of option 4

   if (option == 5)
  {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
        if (count1 == 0)
         {
            cout<<"Enter driver 1 name:  ";
            cin>> driver1_name;
            cout<<"Enter driver 1 id: ";
            cin>> driver1_id;
            cout<<"Enter driver 1 password: ";
            cin>> driver1_p;
         }
         else if (count1 == 1)
         {
            cout<<"Enter driver 2 name:  ";
            cin>> driver2_name;
            cout<<"Enter driver 2 id: ";
            cin>> driver2_id;
            cout<<"Enter driver 2 password: ";
            cin>> driver2_p;
         }
            count1 = count1 + 1;
            cout<<"press any key to continue...";
            char k;
            cin >> k;
            system ("CLS");
  }
   // end of option 5
   
    if (option == 6)
    {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       if (count3 = 0)
         {
            if (driver1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
              
          }
         }
         else 
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
            count3 = count3 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
    }      
    // end of option 6
   
    if (option == 7 && rm_c_id1 == 0 && rm_c_id2 == 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
      
      {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
      }
      else if (option == 7 && rm_c_id1 != 0 && rm_c_id2 == 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
      {
         
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
      } 
          else if (option == 7 && rm_c_id1 == 0 && rm_c_id2 != 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
          {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout <<"All customer's record:"<<endl;
            if (cust1_id > 0)
              {
                cout << "Customer1_name: "<< cust1_name <<endl;
                cout << "Customer1_ID: "<< cust1_id <<endl;
                cout << "Password: "<< cust1_p << endl;
              }
            if (cust3_id > 0)
              {
                 cout << "Customer3_name: "<< cust3_name <<endl;
                 cout << "Customer3_ID: "<< cust3_id <<endl;
                 cout << "Password: "<< cust3_p << endl;
              }
            if (cust4_id > 0)
              {
                   cout << "Customer4_name: "<< cust4_name <<endl;
                   cout << "Customer4_ID: "<< cust4_id <<endl;
                   cout << "Password: "<< cust4_p << endl;
              }
          }
          else if (option == 7 && rm_c_id1 == 0 && rm_c_id2 == 0 && rm_c_id3 != 0 && rm_c_id4 == 0)
         {     
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust4_id > 0)
              {
                   cout << "Customer4_name: "<< cust4_name <<endl;
                   cout << "Customer4_ID: "<< cust4_id <<endl;
                   cout << "Password: "<< cust4_p << endl;
              }
         }
          else
        {
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
        }
       cout<<"press any key to continue...";
       char n;
       cin >> n;
       system ("CLS");
    
     // end of option 7
    if (option == 8 && rm_d_id1 == 0 && rm_d_id2 == 0)  
      {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
          if (driver2_id > 0)
          {
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
   }
    else if (option == 8 && rm_d_id1 != 0 && rm_d_id2 == 0)
      {
         if (driver2_id > 0)
          {
             cout<<"////////////////////////////////////////////////////////////"<<endl;
             cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
             cout<<"////////////////////////////////////////////////////////////"<<endl;
             cout <<"All driver's record:"<<endl;
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
      }   
      else
      { 
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
      }
       cout<<"press any key to continue...";
       char l;
       cin >> l;
       system ("CLS");

     // end of option 8
     
    if (option == 9)
    {
      cout << "Exit" ;
      exit = 1;
    }
     cout<<"press any key to continue...";
     char v;
     cin >> v;
     system ("CLS");
  }
// end of 4th display

// start of 5th display

 if (exit == 0)
      {
         {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
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
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
      
         }
        // condition for admin's option
         if (option == 1)
         {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            
            cout<<"All car's model  >"<<endl;
            cout<<"A: Alto Suzuki 2016 model "<<endl;
            cout<<"B: Honda city 2015 model"<<endl;
            cout<<"C: Toyota Fortuner 2018 model"<<endl;
            cout<<"Wagon R 2021 model"<<endl;
            cout<<"press any key to continue...";
            char u;
            cin >> u;
            system ("CLS");
        }
       // end of option 1
       if (option == 2)
       {  
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
      
           if (count == 0)
         {
            cout<<"Enter customer 1 name:  ";
            cin>> cust1_name;
            cout<<"Enter customer 1 id: ";
            cin>> cust1_id;
            cout<<"Enter customer 1 password: ";
            cin>> cust1_p;
         }
         else if (count == 1)
         {
            cout<<"Enter customer 2 name:  ";
            cin>> cust2_name;
            cout<<"Enter customer 2 id: ";
            cin>> cust2_id;
            cout<<"Enter customer 2 password: ";
            cin>> cust2_p;
        } 
         else if (count == 2)
        {
            cout<<"Enter customer 3 name:  ";
            cin>> cust3_name;
            cout<<"Enter customer 3 id: ";
            cin>> cust3_id;
            cout<<"Enter customer 3 password: ";
            cin>> cust3_p;
        }
         else if (count == 3)
        {
            cout<<"Enter customer 4 name:  ";
            cin>> cust4_name;
            cout<<"Enter customer 4 id: ";
            cin>> cust4_id;
            cout<<"Enter customer 4 password: ";
            cin>> cust4_p;
        }
            count = count + 1;
            cout<<"press any key to continue...";
            char n;
            cin >> n;
            system ("CLS");
      }

// end of option 2
     
     if (option == 3)
       {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
         if (count2 = 0)
         {
            if (cust1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
          }
         }
         else if (count2 = 1)
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
         else if (count2 = 2)
         {
            if (cust3_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust3;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id3;
          }
         }
         else
         {
            if (cust4_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust4;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id4;
          }
         }
            count2 = count2 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
       }
       
// end of option 3
     if (option == 4)
     {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       cout << "Enters car name you want to change rent: ";
       cin >> car_name;
       cout << "Enter new rent: ";
       cin >> rent;
       cout<<"press any key to continue...";
       char u;
       cin >> u;
       system ("CLS");
     }   
   // end of option 4

   if (option == 5)
  {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
        if (count1 == 0)
         {
            cout<<"Enter driver 1 name:  ";
            cin>> driver1_name;
            cout<<"Enter driver 1 id: ";
            cin>> driver1_id;
            cout<<"Enter driver 1 password: ";
            cin>> driver1_p;
         }
         else if (count1 == 1)
         {
            cout<<"Enter driver 2 name:  ";
            cin>> driver2_name;
            cout<<"Enter driver 2 id: ";
            cin>> driver2_id;
            cout<<"Enter driver 2 password: ";
            cin>> driver2_p;
         }
            count1 = count1 + 1;
            cout<<"press any key to continue...";
            char k;
            cin >> k;
            system ("CLS");
  }
   // end of option 5
   
    if (option == 6)
    {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       if (count3 = 0)
         {
            if (driver1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
              
          }
         }
         else 
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
            count3 = count3 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
    }      
    // end of option 6
   
    if (option == 7 && rm_c_id1 == 0 && rm_c_id2 == 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
      
      {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
      }
      else if (option == 7 && rm_c_id1 != 0 && rm_c_id2 == 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
      {
         
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
      } 
          else if (option == 7 && rm_c_id1 == 0 && rm_c_id2 != 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
          {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout <<"All customer's record:"<<endl;
            if (cust1_id > 0)
              {
                cout << "Customer1_name: "<< cust1_name <<endl;
                cout << "Customer1_ID: "<< cust1_id <<endl;
                cout << "Password: "<< cust1_p << endl;
              }
            if (cust3_id > 0)
              {
                 cout << "Customer3_name: "<< cust3_name <<endl;
                 cout << "Customer3_ID: "<< cust3_id <<endl;
                 cout << "Password: "<< cust3_p << endl;
              }
            if (cust4_id > 0)
              {
                   cout << "Customer4_name: "<< cust4_name <<endl;
                   cout << "Customer4_ID: "<< cust4_id <<endl;
                   cout << "Password: "<< cust4_p << endl;
              }
          }
          else if (option == 7 && rm_c_id1 == 0 && rm_c_id2 == 0 && rm_c_id3 != 0 && rm_c_id4 == 0)
         {     
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust4_id > 0)
              {
                   cout << "Customer4_name: "<< cust4_name <<endl;
                   cout << "Customer4_ID: "<< cust4_id <<endl;
                   cout << "Password: "<< cust4_p << endl;
              }
         }
          else
        {
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
        }
       cout<<"press any key to continue...";
       char n;
       cin >> n;
       system ("CLS");
    
     // end of option 7
    if (option == 8 && rm_d_id1 == 0 && rm_d_id2 == 0)  
      {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
          if (driver2_id > 0)
          {
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
   }
    else if (option == 8 && rm_d_id1 != 0 && rm_d_id2 == 0)
      {
         if (driver2_id > 0)
          {
             cout<<"////////////////////////////////////////////////////////////"<<endl;
             cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
             cout<<"////////////////////////////////////////////////////////////"<<endl;
             cout <<"All driver's record:"<<endl;
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
      }   
      else
      { 
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
      }
       cout<<"press any key to continue...";
       char l;
       cin >> l;
       system ("CLS");

     // end of option 8
     
    if (option == 9)
    {
      cout << "Exit" ;
      exit = 1;
    }
     cout<<"press any key to continue...";
     char v;
     cin >> v;
     system ("CLS");
  }
// end of 5th display

// start of 6th display

 if (exit == 0)
      {
         {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
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
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
      
         }
        // condition for admin's option
         if (option == 1)
         {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            
            cout<<"All car's model  >"<<endl;
            cout<<"A: Alto Suzuki 2016 model "<<endl;
            cout<<"B: Honda city 2015 model"<<endl;
            cout<<"C: Toyota Fortuner 2018 model"<<endl;
            cout<<"Wagon R 2021 model"<<endl;
            cout<<"press any key to continue...";
            char u;
            cin >> u;
            system ("CLS");
        }
       // end of option 1
       if (option == 2)
       {  
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
      
           if (count == 0)
         {
            cout<<"Enter customer 1 name:  ";
            cin>> cust1_name;
            cout<<"Enter customer 1 id: ";
            cin>> cust1_id;
            cout<<"Enter customer 1 password: ";
            cin>> cust1_p;
         }
         else if (count == 1)
         {
            cout<<"Enter customer 2 name:  ";
            cin>> cust2_name;
            cout<<"Enter customer 2 id: ";
            cin>> cust2_id;
            cout<<"Enter customer 2 password: ";
            cin>> cust2_p;
        } 
         else if (count == 2)
        {
            cout<<"Enter customer 3 name:  ";
            cin>> cust3_name;
            cout<<"Enter customer 3 id: ";
            cin>> cust3_id;
            cout<<"Enter customer 3 password: ";
            cin>> cust3_p;
        }
         else if (count == 3)
        {
            cout<<"Enter customer 4 name:  ";
            cin>> cust4_name;
            cout<<"Enter customer 4 id: ";
            cin>> cust4_id;
            cout<<"Enter customer 4 password: ";
            cin>> cust4_p;
        }
            count = count + 1;
            cout<<"press any key to continue...";
            char n;
            cin >> n;
            system ("CLS");
      }

// end of option 2
     
     if (option == 3)
       {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
         if (count2 = 0)
         {
            if (cust1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
          }
         }
         else if (count2 = 1)
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
         else if (count2 = 2)
         {
            if (cust3_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust3;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id3;
          }
         }
         else
         {
            if (cust4_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust4;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id4;
          }
         }
            count2 = count2 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
       }
       
// end of option 3
     if (option == 4)
     {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       cout << "Enters car name you want to change rent: ";
       cin >> car_name;
       cout << "Enter new rent: ";
       cin >> rent;
       cout<<"press any key to continue...";
       char u;
       cin >> u;
       system ("CLS");
     }   
   // end of option 4

   if (option == 5)
  {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
        if (count1 == 0)
         {
            cout<<"Enter driver 1 name:  ";
            cin>> driver1_name;
            cout<<"Enter driver 1 id: ";
            cin>> driver1_id;
            cout<<"Enter driver 1 password: ";
            cin>> driver1_p;
         }
         else if (count1 == 1)
         {
            cout<<"Enter driver 2 name:  ";
            cin>> driver2_name;
            cout<<"Enter driver 2 id: ";
            cin>> driver2_id;
            cout<<"Enter driver 2 password: ";
            cin>> driver2_p;
         }
            count1 = count1 + 1;
            cout<<"press any key to continue...";
            char k;
            cin >> k;
            system ("CLS");
  }
   // end of option 5
   
    if (option == 6)
    {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       if (count3 = 0)
         {
            if (driver1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
              
          }
         }
         else 
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
            count3 = count3 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
    }      
    // end of option 6
   
    if (option == 7 && rm_c_id1 == 0 && rm_c_id2 == 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
      
      {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
      }
      else if (option == 7 && rm_c_id1 != 0 && rm_c_id2 == 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
      {
         
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
      } 
          else if (option == 7 && rm_c_id1 == 0 && rm_c_id2 != 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
          {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout <<"All customer's record:"<<endl;
            if (cust1_id > 0)
              {
                cout << "Customer1_name: "<< cust1_name <<endl;
                cout << "Customer1_ID: "<< cust1_id <<endl;
                cout << "Password: "<< cust1_p << endl;
              }
            if (cust3_id > 0)
              {
                 cout << "Customer3_name: "<< cust3_name <<endl;
                 cout << "Customer3_ID: "<< cust3_id <<endl;
                 cout << "Password: "<< cust3_p << endl;
              }
            if (cust4_id > 0)
              {
                   cout << "Customer4_name: "<< cust4_name <<endl;
                   cout << "Customer4_ID: "<< cust4_id <<endl;
                   cout << "Password: "<< cust4_p << endl;
              }
          }
          else if (option == 7 && rm_c_id1 == 0 && rm_c_id2 == 0 && rm_c_id3 != 0 && rm_c_id4 == 0)
         {     
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust4_id > 0)
              {
                   cout << "Customer4_name: "<< cust4_name <<endl;
                   cout << "Customer4_ID: "<< cust4_id <<endl;
                   cout << "Password: "<< cust4_p << endl;
              }
         }
          else
        {
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
        }
       cout<<"press any key to continue...";
       char n;
       cin >> n;
       system ("CLS");
    
     // end of option 7
    if (option == 8 && rm_d_id1 == 0 && rm_d_id2 == 0)  
      {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
          if (driver2_id > 0)
          {
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
   }
    else if (option == 8 && rm_d_id1 != 0 && rm_d_id2 == 0)
      {
         if (driver2_id > 0)
          {
             cout<<"////////////////////////////////////////////////////////////"<<endl;
             cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
             cout<<"////////////////////////////////////////////////////////////"<<endl;
             cout <<"All driver's record:"<<endl;
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
      }   
      else
      { 
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
      }
       cout<<"press any key to continue...";
       char l;
       cin >> l;
       system ("CLS");

     // end of option 8
     
    if (option == 9)
    {
      cout << "Exit" ;
      exit = 1;
    }
     cout<<"press any key to continue...";
     char v;
     cin >> v;
     system ("CLS");
  }
// end of 6th display

// start of 7th display
 if (exit == 0)
      {
         {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
         cout<<"Main Menu    "<<endl;
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
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
      
         }
        // condition for admin's option
         if (option == 1)
         {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            
            cout<<"All car's model  >"<<endl;
            cout<<"A: Alto Suzuki 2016 model "<<endl;
            cout<<"B: Honda city 2015 model"<<endl;
            cout<<"C: Toyota Fortuner 2018 model"<<endl;
            cout<<"Wagon R 2021 model"<<endl;
            cout<<"press any key to continue...";
            char u;
            cin >> u;
            system ("CLS");
        }
       // end of option 1
       if (option == 2)
       {  
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
      
           if (count == 0)
         {
            cout<<"Enter customer 1 name:  ";
            cin>> cust1_name;
            cout<<"Enter customer 1 id: ";
            cin>> cust1_id;
            cout<<"Enter customer 1 password: ";
            cin>> cust1_p;
         }
         else if (count == 1)
         {
            cout<<"Enter customer 2 name:  ";
            cin>> cust2_name;
            cout<<"Enter customer 2 id: ";
            cin>> cust2_id;
            cout<<"Enter customer 2 password: ";
            cin>> cust2_p;
        } 
         else if (count == 2)
        {
            cout<<"Enter customer 3 name:  ";
            cin>> cust3_name;
            cout<<"Enter customer 3 id: ";
            cin>> cust3_id;
            cout<<"Enter customer 3 password: ";
            cin>> cust3_p;
        }
         else if (count == 3)
        {
            cout<<"Enter customer 4 name:  ";
            cin>> cust4_name;
            cout<<"Enter customer 4 id: ";
            cin>> cust4_id;
            cout<<"Enter customer 4 password: ";
            cin>> cust4_p;
        }
            count = count + 1;
            cout<<"press any key to continue...";
            char n;
            cin >> n;
            system ("CLS");
      }

// end of option 2
     
     if (option == 3)
       {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
         if (count2 = 0)
         {
            if (cust1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
          }
         }
         else if (count2 = 1)
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
         else if (count2 = 2)
         {
            if (cust3_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust3;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id3;
          }
         }
         else
         {
            if (cust4_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust4;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id4;
          }
         }
            count2 = count2 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
       }
       
// end of option 3
     if (option == 4)
     {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       cout << "Enters car name you want to change rent: ";
       cin >> car_name;
       cout << "Enter new rent: ";
       cin >> rent;
       cout<<"press any key to continue...";
       char u;
       cin >> u;
       system ("CLS");
     }   
   // end of option 4

   if (option == 5)
  {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
        if (count1 == 0)
         {
            cout<<"Enter driver 1 name:  ";
            cin>> driver1_name;
            cout<<"Enter driver 1 id: ";
            cin>> driver1_id;
            cout<<"Enter driver 1 password: ";
            cin>> driver1_p;
         }
         else if (count1 == 1)
         {
            cout<<"Enter driver 2 name:  ";
            cin>> driver2_name;
            cout<<"Enter driver 2 id: ";
            cin>> driver2_id;
            cout<<"Enter driver 2 password: ";
            cin>> driver2_p;
         }
            count1 = count1 + 1;
            cout<<"press any key to continue...";
            char k;
            cin >> k;
            system ("CLS");
  }
   // end of option 5
   
    if (option == 6)
    {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
       if (count3 = 0)
         {
            if (driver1_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust1;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id1;
              
          }
         }
         else 
         {
            if (cust2_id > 0)
          {
              cout<<"Enter customer name you want to remove:  ";
              cin >> rm_cust2;
              cout <<"Enter customer's id you want to remove: ";
              cin >> rm_c_id2;
          }
         }
            count3 = count3 + 1;
            cout<<"press any key to continue...";
            char p;
            cin >> p;
            system ("CLS");
    }      
    // end of option 6
   
    if (option == 7 && rm_c_id1 == 0 && rm_c_id2 == 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
      
      {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
      }
      else if (option == 7 && rm_c_id1 != 0 && rm_c_id2 == 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
      {
         
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
          if (cust4_id > 0)
          {
             cout << "Customer4_name: "<< cust4_name <<endl;
             cout << "Customer4_ID: "<< cust4_id <<endl;
             cout << "Password: "<< cust4_p << endl;
          }
      } 
          else if (option == 7 && rm_c_id1 == 0 && rm_c_id2 != 0 && rm_c_id3 == 0 && rm_c_id4 == 0)
          {
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
            cout<<"////////////////////////////////////////////////////////////"<<endl;
            cout <<"All customer's record:"<<endl;
            if (cust1_id > 0)
              {
                cout << "Customer1_name: "<< cust1_name <<endl;
                cout << "Customer1_ID: "<< cust1_id <<endl;
                cout << "Password: "<< cust1_p << endl;
              }
            if (cust3_id > 0)
              {
                 cout << "Customer3_name: "<< cust3_name <<endl;
                 cout << "Customer3_ID: "<< cust3_id <<endl;
                 cout << "Password: "<< cust3_p << endl;
              }
            if (cust4_id > 0)
              {
                   cout << "Customer4_name: "<< cust4_name <<endl;
                   cout << "Customer4_ID: "<< cust4_id <<endl;
                   cout << "Password: "<< cust4_p << endl;
              }
          }
          else if (option == 7 && rm_c_id1 == 0 && rm_c_id2 == 0 && rm_c_id3 != 0 && rm_c_id4 == 0)
         {     
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust4_id > 0)
              {
                   cout << "Customer4_name: "<< cust4_name <<endl;
                   cout << "Customer4_ID: "<< cust4_id <<endl;
                   cout << "Password: "<< cust4_p << endl;
              }
         }
          else
        {
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout <<"All customer's record:"<<endl;
          if (cust1_id > 0)
          {
             cout << "Customer1_name: "<< cust1_name <<endl;
             cout << "Customer1_ID: "<< cust1_id <<endl;
             cout << "Password: "<< cust1_p << endl;
          }
          if (cust2_id > 0)
          {
             cout << "Customer2_name: "<< cust2_name <<endl;
             cout << "Customer2_ID: "<< cust2_id <<endl;
             cout << "Password: "<< cust2_p << endl;
          }
          if (cust3_id > 0)
          {
             cout << "Customer3_name: "<< cust3_name <<endl;
             cout << "Customer3_ID: "<< cust3_id <<endl;
             cout << "Password: "<< cust3_p << endl;
          }
        }
       cout<<"press any key to continue...";
       char n;
       cin >> n;
       system ("CLS");
    
     // end of option 7
    if (option == 8 && rm_d_id1 == 0 && rm_d_id2 == 0)  
      {
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
          if (driver2_id > 0)
          {
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
   }
    else if (option == 8 && rm_d_id1 != 0 && rm_d_id2 == 0)
      {
         if (driver2_id > 0)
          {
             cout<<"////////////////////////////////////////////////////////////"<<endl;
             cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
             cout<<"////////////////////////////////////////////////////////////"<<endl;
             cout <<"All driver's record:"<<endl;
             cout << "driver2_name: "<< driver2_name <<endl;
             cout << "driver2_ID: "<< driver2_id <<endl;
             cout << "Password: "<< driver2_p << endl;
          }
      }   
      else
      { 
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout <<"All driver's record:"<<endl;
          if (driver1_id > 0)
          {
             cout << "Driver1_name: "<< driver1_name <<endl;
             cout << "Driver1_ID: "<< driver1_id <<endl;
             cout << "Password: "<< driver1_p << endl;
          }
      }
       cout<<"press any key to continue...";
       char l;
       cin >> l;
       system ("CLS");

     // end of option 8
     
    if (option == 9)
    {
      cout << "Exit" ;
      exit = 1;
    }
     cout<<"press any key to continue...";
     char v;
     cin >> v;
     system ("CLS");
  }
// end of 7th display
 
 // programming for customers
   if (status == 'c')
     cout<<"////////////////////////////////////////////////////////////"<<endl;
     cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
     cout<<"////////////////////////////////////////////////////////////"<<endl;
     
     cout <<"               Login Portal                "<<endl;
     cout <<"Enter User ID--------";
     cin >> id1;
     cout <<"Enter Password--------";
     cin >> password1;
     cout<<"press any key to continue...";
     char q;
     cin >> q;
     system ("CLS");
     // end of login portal
     

 if (( id1 == 456 && password1 == "cde") || ( id1 == 789 && password1 == "fgh") || ( id1 == 901 && password1 == "ijk") || (status == 'c' && id == 234 && password == "lmn"))
 
     {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
         cout<<"Main Menu   "<<endl;
         cout<<"Select one of the following options number . . ."<<endl;
         cout<<"1.  Display Car under budget"<<endl;
         cout<<"2.  Display rent for all cars"<<endl;
         cout<<"3.  Display cars from lower to higher rent"<<endl;
         cout<<"4.  Display car with and without driver"<<endl;  
         cout<<"5.  Invoice"<<endl;
          cout<<"9.  Exit"<<endl;
         cout<<"Choose your option: ";  
         cin >> option;
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
        }
      else
        {
         cout <<"Your Password is incorrect. Try again....."<<endl;
         cout<<"press any key to continue...";
         char m;
         cin >> m;
         system ("CLS");
         cout<<"////////////////////////////////////////////////////////////"<<endl;
         cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
         cout<<"////////////////////////////////////////////////////////////"<<endl;
     
          cout <<"               Login Portal                "<<endl;
          cout <<"Enter User ID--------";
          cin >> id;
          cout <<"Enter Password--------";
          cin >> password;
          cout<<"press any key to continue...";
          char p;
          cin >> p;
          system ("CLS");
        }
        // end of customer's menu

        // condition for customer
        if (option == 1)
        {
          
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
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
           cout<<"Choose your option (A/B/C/D):  ";
           cin >> opt;
           cout << "press any key to continue...";
           char k;
           cin >> k;
           system ("CLS");
       }

        // end of option 1
         if (option == 2)
         {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout <<"Rent for all cars: "<<endl;
          cout<< "Rent for Alto suzuki 2016 model: "<< a <<" per day"<<endl;
          cout<< "Rent for Honda city 2015 model: "<< b << " per day"<<endl;
          cout<< "Rent for Wagon R 2021 model: "<< c << " per day"<<endl;
          cout<<"Rent for toyota fortuner: "<< d << " per day"<<endl;
          cout<<" press any key to continue...";
          char s;
          cin >> s;
          system ("CLS");
         
         }
         // end of option 2
         if (option == 3)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout <<"Car from lower to higher rent:";
          if (a > b && a > c && a > d)
             cout << "Marti Suzuki: "<< a <<" per day";
           {
             if (b > a && b > c && b > d)
             cout << "Honda City: "<< b << " per day";
             else if (c > a && c > b && c > d)
             cout << "Wagon R: "<< c << " per day";
             else
             cout << "toyota fortuner: "<< d << " per day";
           }
          if (b > a && b > c && b > d) 
            cout << "Honda City: "<< b << " per day"; 
           {
              if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day";          
              else if (c > a && c > b && c > d)
                 cout << "Wagon R: "<< c << " per day";
              else
                 cout << "toyota fortuner: "<< d << " per day";
           }
           if (c > a && c > b && c > d)
                 cout << "Wagon R: "<< c << " per day";
             {
               if (b > a && b > c && b > d) 
               cout << "Honda City: "<< b << " per day"; 
               else if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day"; 
               else
                 cout << "toyota fortuner: "<< d << " per day";
             }
             if (d > a && d > b && d > d)
                cout << "toyota fortuner: "<< d << " per day";
               {
                 if (b > a && b > c && b > d) 
                 cout << "Honda City: "<< b << " per day"; 
                 else if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day"; 
                 else
                 cout << "Wagon R: "<< c << " per day";
               }
                 cout<<" press any key to continue...";
                 char t;
                 cin >> t;
                 system ("CLS");
              }

              // end of option 3
        if (option == 4)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout << "Cars Avaiable with driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Honda city 2015 model"<<endl;
          cout<<"Rent for toyota fortuner"<<endl;
          cout <<"                                 "<<endl;
          cout << "Cars Avaiable without driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Alto Suzuki 2016 model"<<endl;
          cout<<"Wagon R 2021 model"<<endl;
           cout<<" press any key to continue...";
          char k;
          cin >> k;
          system ("CLS");
        
        }

        // end of option 4
        if (option == 5)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
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
          cout<<" press any key to continue...";
          char m;
          cin >> m;
          system ("CLS");

           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout << "Invoice of a customer: "<< endl;
           cout <<"                                 "<<endl;
           cout << "Customer's  name: "<< c_name;
           cout << "Customer's ID: "<< c_id;
           cout << "Car model: "<< c_model;
           cout << "Number of days: "<< day;
           cout << "Rent per day: "<< rent;
           cout << "Your rental amount: "<< rental_amount;
           cout << "Advanced: "<< advance;
           cout << "Total amount: "<< total_amount;
          cout<<" press any key to continue...";
          char i;
          cin >> i;
          system ("CLS");
        }

        // end of first display

       {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
         cout<<"Main Menu   "<<endl;
         cout<<"Select one of the following options number . . ."<<endl;
         cout<<"1.  Display Car under budget"<<endl;
         cout<<"2.  Display rent for all cars"<<endl;
         cout<<"3.  Display cars from lower to higher rent"<<endl;
         cout<<"4.  Display car with and without driver"<<endl;  
         cout<<"5.  Invoice"<<endl;
          cout<<"9.  Exit"<<endl;
         cout<<"Choose your option: ";  
         cin >> option;
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
        }
      
        // end of customer's menu

        // condition for customer
       
       if (exit == 0)
      {
        if (option == 1)
        {
          
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
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
           cout<<"Choose your option (A/B/C/D):  ";
           cin >> opt;
           cout << "press any key to continue...";
           char k;
           cin >> k;
           system ("CLS");
       }

        // end of option 1
         if (option == 2)
         {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout <<"Rent for all cars: "<<endl;
          cout<< "Rent for Alto suzuki 2016 model: "<< a <<" per day"<<endl;
          cout<< "Rent for Honda city 2015 model: "<< b << " per day"<<endl;
          cout<< "Rent for Wagon R 2021 model: "<< c << " per day"<<endl;
          cout<<"Rent for toyota fortuner: "<< d << " per day"<<endl;
          cout<<" press any key to continue...";
          char s;
          cin >> s;
          system ("CLS");
         
         }
         // end of option 2
         if (option == 3)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout <<"Car from lower to higher rent:";
          if (a > b && a > c && a > d)
             cout << "Marti Suzuki: "<< a <<" per day";
           {
             if (b > a && b > c && b > d)
             cout << "Honda City: "<< b << " per day";
             else if (c > a && c > b && c > d)
             cout << "Wagon R: "<< c << " per day";
             else
             cout << "toyota fortuner: "<< d << " per day";
           }
          if (b > a && b > c && b > d) 
            cout << "Honda City: "<< b << " per day"; 
           {
              if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day";          
              else if (c > a && c > b && c > d)
                 cout << "Wagon R: "<< c << " per day";
              else
                 cout << "toyota fortuner: "<< d << " per day";
           }
           if (c > a && c > b && c > d)
                 cout << "Wagon R: "<< c << " per day";
             {
               if (b > a && b > c && b > d) 
               cout << "Honda City: "<< b << " per day"; 
               else if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day"; 
               else
                 cout << "toyota fortuner: "<< d << " per day";
             }
             if (d > a && d > b && d > d)
                cout << "toyota fortuner: "<< d << " per day";
               {
                 if (b > a && b > c && b > d) 
                 cout << "Honda City: "<< b << " per day"; 
                 else if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day"; 
                 else
                 cout << "Wagon R: "<< c << " per day";
               }
                 cout<<" press any key to continue...";
                 char t;
                 cin >> t;
                 system ("CLS");
              }

              // end of option 3
        if (option == 4)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout << "Cars Avaiable with driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Honda city 2015 model"<<endl;
          cout<<"Rent for toyota fortuner"<<endl;
          cout <<"                                 "<<endl;
          cout << "Cars Avaiable without driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Alto Suzuki 2016 model"<<endl;
          cout<<"Wagon R 2021 model"<<endl;
           cout<<" press any key to continue...";
          char k;
          cin >> k;
          system ("CLS");
        
        }

        // end of option 4
        if (option == 5)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
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
          cout<<" press any key to continue...";
          char m;
          cin >> m;
          system ("CLS");

           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout << "Invoice of a customer: "<< endl;
           cout <<"                                 "<<endl;
           cout << "Customer's  name: "<< c_name;
           cout << "Customer's ID: "<< c_id;
           cout << "Car model: "<< c_model;
           cout << "Number of days: "<< day;
           cout << "Rent per day: "<< rent;
           cout << "Your rental amount: "<< rental_amount;
           cout << "Advanced: "<< advance;
           cout << "Total amount: "<< total_amount;
          cout<<" press any key to continue...";
          char i;
          cin >> i;
          system ("CLS");
        }
       // end of 2nd display



       {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
         cout<<"Main Menu   "<<endl;
         cout<<"Select one of the following options number . . ."<<endl;
         cout<<"1.  Display Car under budget"<<endl;
         cout<<"2.  Display rent for all cars"<<endl;
         cout<<"3.  Display cars from lower to higher rent"<<endl;
         cout<<"4.  Display car with and without driver"<<endl;  
         cout<<"5.  Invoice"<<endl;
          cout<<"9.  Exit"<<endl;
         cout<<"Choose your option: ";  
         cin >> option;
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
        }
    
        // end of customer's menu

        // condition for customer
        if (option == 1)
        {
          
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
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
           cout<<"Choose your option (A/B/C/D):  ";
           cin >> opt;
           cout << "press any key to continue...";
           char k;
           cin >> k;
           system ("CLS");
       }

        // end of option 1
         if (option == 2)
         {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout <<"Rent for all cars: "<<endl;
          cout<< "Rent for Alto suzuki 2016 model: "<< a <<" per day"<<endl;
          cout<< "Rent for Honda city 2015 model: "<< b << " per day"<<endl;
          cout<< "Rent for Wagon R 2021 model: "<< c << " per day"<<endl;
          cout<<"Rent for toyota fortuner: "<< d << " per day"<<endl;
          cout<<" press any key to continue...";
          char s;
          cin >> s;
          system ("CLS");
         
         }
         // end of option 2
         if (option == 3)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout <<"Car from lower to higher rent:";
          if (a > b && a > c && a > d)
             cout << "Marti Suzuki: "<< a <<" per day";
           {
             if (b > a && b > c && b > d)
             cout << "Honda City: "<< b << " per day";
             else if (c > a && c > b && c > d)
             cout << "Wagon R: "<< c << " per day";
             else
             cout << "toyota fortuner: "<< d << " per day";
           }
          if (b > a && b > c && b > d) 
            cout << "Honda City: "<< b << " per day"; 
           {
              if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day";          
              else if (c > a && c > b && c > d)
                 cout << "Wagon R: "<< c << " per day";
              else
                 cout << "toyota fortuner: "<< d << " per day";
           }
           if (c > a && c > b && c > d)
                 cout << "Wagon R: "<< c << " per day";
             {
               if (b > a && b > c && b > d) 
               cout << "Honda City: "<< b << " per day"; 
               else if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day"; 
               else
                 cout << "toyota fortuner: "<< d << " per day";
             }
             if (d > a && d > b && d > d)
                cout << "toyota fortuner: "<< d << " per day";
               {
                 if (b > a && b > c && b > d) 
                 cout << "Honda City: "<< b << " per day"; 
                 else if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day"; 
                 else
                 cout << "Wagon R: "<< c << " per day";
               }
                 cout<<" press any key to continue...";
                 char t;
                 cin >> t;
                 system ("CLS");
              }

              // end of option 3
        if (option == 4)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout << "Cars Avaiable with driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Honda city 2015 model"<<endl;
          cout<<"Rent for toyota fortuner"<<endl;
          cout <<"                                 "<<endl;
          cout << "Cars Avaiable without driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Alto Suzuki 2016 model"<<endl;
          cout<<"Wagon R 2021 model"<<endl;
           cout<<" press any key to continue...";
          char k;
          cin >> k;
          system ("CLS");
        
        }

        // end of option 4
        if (option == 5)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
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
          cout<<" press any key to continue...";
          char m;
          cin >> m;
          system ("CLS");

           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout << "Invoice of a customer: "<< endl;
           cout <<"                                 "<<endl;
           cout << "Customer's  name: "<< c_name;
           cout << "Customer's ID: "<< c_id;
           cout << "Car model: "<< c_model;
           cout << "Number of days: "<< day;
           cout << "Rent per day: "<< rent;
           cout << "Your rental amount: "<< rental_amount;
           cout << "Advanced: "<< advance;
           cout << "Total amount: "<< total_amount;
          cout<<" press any key to continue...";
          char i;
          cin >> i;
          system ("CLS");
        }
//  end of 3rd display

         {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
         cout<<"Main Menu   "<<endl;
         cout<<"Select one of the following options number . . ."<<endl;
         cout<<"1.  Display Car under budget"<<endl;
         cout<<"2.  Display rent for all cars"<<endl;
         cout<<"3.  Display cars from lower to higher rent"<<endl;
         cout<<"4.  Display car with and without driver"<<endl;  
         cout<<"5.  Invoice"<<endl;
          cout<<"9.  Exit"<<endl;
         cout<<"Choose your option: ";  
         cin >> option;
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
        }
      
        // end of customer's menu

        // condition for customer
        if (option == 1)
        {
          
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
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
           cout<<"Choose your option (A/B/C/D):  ";
           cin >> opt;
           cout << "press any key to continue...";
           char k;
           cin >> k;
           system ("CLS");
       }

        // end of option 1
         if (option == 2)
         {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout <<"Rent for all cars: "<<endl;
          cout<< "Rent for Alto suzuki 2016 model: "<< a <<" per day"<<endl;
          cout<< "Rent for Honda city 2015 model: "<< b << " per day"<<endl;
          cout<< "Rent for Wagon R 2021 model: "<< c << " per day"<<endl;
          cout<<"Rent for toyota fortuner: "<< d << " per day"<<endl;
          cout<<" press any key to continue...";
          char s;
          cin >> s;
          system ("CLS");
         
         }
         // end of option 2
         if (option == 3)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout <<"Car from lower to higher rent:";
          if (a > b && a > c && a > d)
             cout << "Marti Suzuki: "<< a <<" per day";
           {
             if (b > a && b > c && b > d)
             cout << "Honda City: "<< b << " per day";
             else if (c > a && c > b && c > d)
             cout << "Wagon R: "<< c << " per day";
             else
             cout << "toyota fortuner: "<< d << " per day";
           }
          if (b > a && b > c && b > d) 
            cout << "Honda City: "<< b << " per day"; 
           {
              if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day";          
              else if (c > a && c > b && c > d)
                 cout << "Wagon R: "<< c << " per day";
              else
                 cout << "toyota fortuner: "<< d << " per day";
           }
           if (c > a && c > b && c > d)
                 cout << "Wagon R: "<< c << " per day";
             {
               if (b > a && b > c && b > d) 
               cout << "Honda City: "<< b << " per day"; 
               else if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day"; 
               else
                 cout << "toyota fortuner: "<< d << " per day";
             }
             if (d > a && d > b && d > d)
                cout << "toyota fortuner: "<< d << " per day";
               {
                 if (b > a && b > c && b > d) 
                 cout << "Honda City: "<< b << " per day"; 
                 else if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day"; 
                 else
                 cout << "Wagon R: "<< c << " per day";
               }
                 cout<<" press any key to continue...";
                 char t;
                 cin >> t;
                 system ("CLS");
              }

              // end of option 3
        if (option == 4)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout << "Cars Avaiable with driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Honda city 2015 model"<<endl;
          cout<<"Rent for toyota fortuner"<<endl;
          cout <<"                                 "<<endl;
          cout << "Cars Avaiable without driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Alto Suzuki 2016 model"<<endl;
          cout<<"Wagon R 2021 model"<<endl;
           cout<<" press any key to continue...";
          char k;
          cin >> k;
          system ("CLS");
        
        }

        // end of option 4
        if (option == 5)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
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
          cout<<" press any key to continue...";
          char m;
          cin >> m;
          system ("CLS");

           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout << "Invoice of a customer: "<< endl;
           cout <<"                                 "<<endl;
           cout << "Customer's  name: "<< c_name;
           cout << "Customer's ID: "<< c_id;
           cout << "Car model: "<< c_model;
           cout << "Number of days: "<< day;
           cout << "Rent per day: "<< rent;
           cout << "Your rental amount: "<< rental_amount;
           cout << "Advanced: "<< advance;
           cout << "Total amount: "<< total_amount;
          cout<<" press any key to continue...";
          char i;
          cin >> i;
          system ("CLS");
        }
      // end of 4th display


      {
             cout<<"***********************************************************"<<endl;
             cout<<"*                   Welcome to our company                *"<<endl;
             cout<<"***********************************************************"<<endl;
    
         cout<<"Main Menu   "<<endl;
         cout<<"Select one of the following options number . . ."<<endl;
         cout<<"1.  Display Car under budget"<<endl;
         cout<<"2.  Display rent for all cars"<<endl;
         cout<<"3.  Display cars from lower to higher rent"<<endl;
         cout<<"4.  Display car with and without driver"<<endl;  
         cout<<"5.  Invoice"<<endl;
          cout<<"9.  Exit"<<endl;
         cout<<"Choose your option: ";  
         cin >> option;
         cout<<"press any key to continue...";
         char k;
         cin >> k;
         system ("CLS");
        }
     
        // end of customer's menu

        // condition for customer
        if (option == 1)
        {
          
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
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
           cout<<"Choose your option (A/B/C/D):  ";
           cin >> opt;
           cout << "press any key to continue...";
           char k;
           cin >> k;
           system ("CLS");
       }

        // end of option 1
         if (option == 2)
         {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout <<"Rent for all cars: "<<endl;
          cout<< "Rent for Alto suzuki 2016 model: "<< a <<" per day"<<endl;
          cout<< "Rent for Honda city 2015 model: "<< b << " per day"<<endl;
          cout<< "Rent for Wagon R 2021 model: "<< c << " per day"<<endl;
          cout<<"Rent for toyota fortuner: "<< d << " per day"<<endl;
          cout<<" press any key to continue...";
          char s;
          cin >> s;
          system ("CLS");
         
         }
         // end of option 2
         if (option == 3)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout <<"Car from lower to higher rent:";
          if (a > b && a > c && a > d)
             cout << "Marti Suzuki: "<< a <<" per day";
           {
             if (b > a && b > c && b > d)
             cout << "Honda City: "<< b << " per day";
             else if (c > a && c > b && c > d)
             cout << "Wagon R: "<< c << " per day";
             else
             cout << "toyota fortuner: "<< d << " per day";
           }
          if (b > a && b > c && b > d) 
            cout << "Honda City: "<< b << " per day"; 
           {
              if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day";          
              else if (c > a && c > b && c > d)
                 cout << "Wagon R: "<< c << " per day";
              else
                 cout << "toyota fortuner: "<< d << " per day";
           }
           if (c > a && c > b && c > d)
                 cout << "Wagon R: "<< c << " per day";
             {
               if (b > a && b > c && b > d) 
               cout << "Honda City: "<< b << " per day"; 
               else if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day"; 
               else
                 cout << "toyota fortuner: "<< d << " per day";
             }
             if (d > a && d > b && d > d)
                cout << "toyota fortuner: "<< d << " per day";
               {
                 if (b > a && b > c && b > d) 
                 cout << "Honda City: "<< b << " per day"; 
                 else if (a > b && a > c && a > d)
                 cout << "Marti Suzuki: "<< a <<" per day"; 
                 else
                 cout << "Wagon R: "<< c << " per day";
               }
                 cout<<" press any key to continue...";
                 char t;
                 cin >> t;
                 system ("CLS");
              }

              // end of option 3
        if (option == 4)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout << "Cars Avaiable with driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Honda city 2015 model"<<endl;
          cout<<"Rent for toyota fortuner"<<endl;
          cout <<"                                 "<<endl;
          cout << "Cars Avaiable without driver are:"<< endl;
          cout <<"                                 "<<endl;
          cout<< "Alto Suzuki 2016 model"<<endl;
          cout<<"Wagon R 2021 model"<<endl;
           cout<<" press any key to continue...";
          char k;
          cin >> k;
          system ("CLS");
        
        }

        // end of option 4
        if (option == 5)
        {
          cout<<"////////////////////////////////////////////////////////////"<<endl;
          cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
          cout<<"////////////////////////////////////////////////////////////"<<endl;
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
          cout<<" press any key to continue...";
          char m;
          cin >> m;
          system ("CLS");

           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout<<"--          Car Rental Management System (CRMS)           --"<<endl;
           cout<<"////////////////////////////////////////////////////////////"<<endl;
           cout << "Invoice of a customer: "<< endl;
           cout <<"                                 "<<endl;
           cout << "Customer's  name: "<< c_name;
           cout << "Customer's ID: "<< c_id;
           cout << "Car model: "<< c_model;
           cout << "Number of days: "<< day;
           cout << "Rent per day: "<< rent;
           cout << "Your rental amount: "<< rental_amount;
           cout << "Advanced: "<< advance;
           cout << "Total amount: "<< total_amount;
          cout<<" press any key to continue...";
          char i;
          cin >> i;
          system ("CLS");
        }
       // end of all customers option
      }
}







