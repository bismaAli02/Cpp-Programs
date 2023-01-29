#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
// global variable declaration

   char status;
   int id=0;
   string password;    
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
     system_cls();
    }
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
         cout<<"9.  logout"<<endl;
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
         cout<<"3.  Display cars from lower to higher rent"<<endl;
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
               system_cls();
               return option;
         }

         // end of driver's menu
    void wrong_password()
      {
         cout <<"Your Password is incorrect. Try again....."<<endl;
      }

        // end of menu function

        void cust_display (string cust_name, int cust_id, string cust_p)
        {
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

    void driver_display (string driver_name, int driver_id, string driver_p)
        {
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
            cout<<"D: Wagon R 2021 model"<<endl;
            system_cls();
    }
    // end of display model function
    
    void Rent(int rent1, int rent2, int rent3, int rent4)
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
             {
                cout << "Marti Suzuki: "<< rent1 <<" per day"<<endl;
               if (rent2 > rent3 && rent2 > rent4)
              {
                cout << "Honda City: "<< rent2 << " per day"<<endl;
                if ( rent3 > rent2 && rent3 > rent4)
                {
                cout << "Wagon R: "<< rent3 << " per day"<<endl;
                cout << "toyota fortuner: "<< rent4 << " per day"<<endl;
                }
                else
                {
                cout << "toyota fortuner: "<< rent4 << " per day"<<endl;
                cout << "Wagon R: "<< rent3 << " per day"<<endl;
                }
              }
             else if (rent3 > rent2 && rent3 > rent4)
              {  
                 cout << "Wagon R: "<< rent3 <<" per day"<<endl;          
                 if (rent4 > rent2 )
                 {
                   cout << "toyota fortuner: "<< rent4 << " per day"<<endl;
                   cout << "Honda City: "<< rent2 << " per day"<<endl;
                 }
                 else
                 {
                   cout << "Honda City: "<< rent2 << " per day"<<endl;
                   cout << "toyota fortuner: "<< rent4 << " per day"<<endl;
                 }
              }
              else if (rent4 > rent2 && rent4 > rent3)
             {
             cout << "toyota fortuner: "<< rent4 << " per day"<<endl;
              if (rent2 > rent3 )
              {
                 cout << "Honda City: "<< rent2 << " per day"<<endl;
                 cout << "Wagon R: "<< rent3 <<" per day"<<endl;
              }
             else
                 { 
                  cout << "Wagon R: "<< rent3 <<" per day"; 
                  cout << "Honda City: "<< rent2 << " per day";
                 }
             } 
        }
        // end of rent 1 greater then rent2 , rent3 and rent 4
       else if (rent2 > rent1 && rent2 > rent3 && rent2 > rent4)
          {
		        cout << "Honda City: "<< rent2 <<" per day";
             if (rent1 > rent3 && rent1 > rent4)
             {
             cout << "Alto Suzuki: "<< rent1 << " per day";
              if ( rent3 > rent4)
              {
                 cout << "Wagon R: "<< rent3 << " per day";
                 cout << "toyota fortuner: "<< rent4 << " per day";
              }
             else
               {
               cout << "toyota fortuner: "<< rent4 << " per day";
               cout << "Wagon R: "<< rent3 << " per day";
               }
             }           
             else if (rent3 > rent1 && rent3 > rent4)
             {
                 cout << "Wagon R: "<< rent3 <<" per day";          
                 if (rent1 > rent4)
                 {
                 cout << "Alto Suzuki: "<< rent1 << " per day";
                 cout << "toyota fortuner: "<< rent4 << " per day";
                 }
              else
                 {
                 cout << "toyota fortuner: "<< rent4 << " per day";
                 cout << "Alto Suzuki: "<< rent1 << " per day";
                 }
             }            
             else if (rent4 > rent1 && rent4 > rent3)
             {
               cout << "toyota fortuner: "<< rent4 << " per day";
               if (rent1 > rent3)
              {
               cout << "Alto suzuki: "<< rent1 << " per day";
               cout << "Wagon R: "<< rent3 <<" per day";
              }
               else
                  {
                  cout << "Wagon R: "<< rent3 <<" per day"; 
                  cout << "Alto suzuki: "<< rent1 << " per day";
                  }
             }
         }
        //  condition for rent 2 greater than rent 1, rent 3 and rent4
     else if (rent3 > rent1 && rent3 > rent2 && rent3 > rent4)
           { 
			        cout << "Wagon R: "<< rent3 <<" per day";
             if (rent1 > rent2 && rent1 > rent4)
             {
             cout << "Alto Suzuki: "<< rent1 << " per day";
                if ( rent2 > rent4)
                {
                 cout << "Honda City: "<< rent2 << " per day";
                  cout << "toyota fortuner: "<< rent4 << " per day";
                }
                else
                {
                cout << "toyota fortuner: "<< rent4 << " per day";
                cout << "Honda City: "<< rent2 << " per day";
                }
             }  
             else if (rent2 > rent1 && rent2 > rent4)
               {  
                 cout << "Honda City: "<< rent2 <<" per day";          
                 if (rent1 > rent4)
                 {
                 cout << "Alto Suzuki: "<< rent1 << " per day";
                 cout << "toyota fortuner: "<< rent4 << " per day";
                 }
             else
                 {
                 cout << "toyota fortuner: "<< rent4 << " per day";
                 cout << "Alto Suzuki: "<< rent1 << " per day";
                 }
               }
            else if (rent4 > rent1 && rent4 > rent2)
             {
             cout << "toyota fortuner: "<< rent4 << " per day";
              if (rent1 > rent2)
             {
              cout << "Alto suzuki: "<< rent1 << " per day";
              cout << "Honda City "<< rent2 <<" per day";
             }
             else
                 {
                  cout << "Honda City "<< rent2 <<" per day";
                  cout << "Alto suzuki: "<< rent1 << " per day";
                 } 
            }
         }
         // condition for rent 3 greater than rent1, ren2 and rent4
            else 
            { 
             cout << "Toyota Fortuner: "<< rent4 <<" per day";
             if (rent1 > rent3 && rent1 > rent2)
             {
             cout << "Alto Suzuki: "<< rent1 << " per day";
               if ( rent3 > rent2)
               {
               cout << "Wagon R: "<< rent3 << " per day";
               cout << "Honda city: "<< rent2 << " per day";
               }
               else
               {
               cout << "Honda city: "<< rent2 << " per day";
               cout << "Wagon R: "<< rent3 << " per day";
               }
             }
            else if (rent3 > rent1 && rent3 > rent2)
               {  
                 cout << "Wagon R: "<< rent3 <<" per day";          
                 if ( rent1 > rent2)
                 {
                   cout << "Alto Suzuki: "<< rent1 << " per day";
                   cout << "Honda city: "<< rent2 << " per day";
                 }
                 else
                 {
                 cout << "Honda city: "<< rent2 << " per day";
                 cout << "Alto Suzuki: "<< rent1 << " per day";
                 }
               }
             else if (rent2 > rent1 && rent2 > rent3)
             {
               cout << "Honda City: "<< rent2 << " per day";
                if (rent1 > rent3)
               {
                cout << "Alto suzuki: "<< rent1 << " per day";
                cout << "Wagon R: "<< rent3 <<" per day";
               }
             else
                 {
                  cout << "Wagon R: "<< rent3 <<" per day"; 
                  cout << "Alto suzuki: "<< rent1 << " per day";
                 }
             }
          }
      }
          // condition rent 4 greater than rent1, rent2, rent3 
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
   header1();
          if (id == 734)
            cout << driver1_name <<"\t"<< driver1_id <<"\t" << car1;
           else if (765)
           cout << driver2_name <<"\t"<< driver2_id <<"\t" << car2;
}
// end of car function
void available_car(string car1, string car2)
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
  
      char opt, mainchoice, login, option; 
      int  count = 0, count1=0, count2=0, count3=0, rent=0, budget=0, rental_amount=0, total_amount=0;
      int cust1_id=0, cust2_id=0 ,cust3_id=0, cust4_id=0, driver1_id=0, driver2_id=0, c_id=0, day, Advance= 0;
      string  cust1_name, cust2_name, cust3_name, cust4_name, driver1_name, driver2_name, c_name, c_model;
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
      
       while (true)
       {
              mainchoice = status_menu();
              login = login_portal();
              if (status == 'a' && id == 123 && password == "abc")
              {
                 while (true)
                 {
                    option = admin_menu( option);
                    if (option == '1')
                    {
                      models();
                    }
   // end of option 1
                  
                   if (option == '2')
                  {  
                    header1();
                      if (count == 0)
                    {
                        cout<<"Enter customer 1 name:  ";
                        cin>> cust1_name;
                        cout<<"Enter customer 1 id: ";
                        cin>> cust1_id;
                        cout<<"Enter customer 1 password: ";
                        cin>> cust1_p;
                        cout<<" Account is successfully created"<<endl;
                    }
                    else if (count == 1)
                    {
                        cout<<"Enter customer 2 name:  ";
                        cin>> cust2_name;
                        cout<<"Enter customer 2 id: ";
                        cin>> cust2_id;
                        cout<<"Enter customer 2 password: ";
                        cin>> cust2_p;
                        cout<<" Account is successfully created"<<endl;
                    } 
                    else if (count == 2)
                    {
                        cout<<"Enter customer 3 name:  ";
                        cin>> cust3_name;
                        cout<<"Enter customer 3 id: ";
                        cin>> cust3_id;
                        cout<<"Enter customer 3 password: ";
                        cin>> cust3_p;
                        cout<<" Account is successfully created"<<endl;
                    }
                    else if (count == 3)
                    {
                        cout<<"Enter customer 4 name:  ";
                        cin>> cust4_name;
                        cout<<"Enter customer 4 id: ";
                        cin>> cust4_id;
                        cout<<"Enter customer 4 password: ";
                        cin>> cust4_p;
                        cout<<" Account is successfully created"<<endl;
                    }
                    else
                        cout << "you cannot add more customers...."<<endl;
                        count = count + 1;
                        system_cls();
                     }
      // end of option 2         
               
               if (option == '3')
              {
                header1();
                if (count2 == 0)
                {
                    if (cust1_id > 0)
                  {
                      cout<<"Enter customer name you want to remove:  ";
                      cin >> rm_cust1;
                      cout <<"Enter customer's id you want to remove: ";
                      cin >> rm_c_id1;
                      cout<<" Account is successfully removed"<<endl;
                      cust1_id=0;
                  }
                }
                else if (count2 == 1)
                {
                    if (cust2_id > 0)
                  {
                      cout<<"Enter customer name you want to remove:  ";
                      cin >> rm_cust2;
                      cout <<"Enter customer's id you want to remove: ";
                      cin >> rm_c_id2;
                      cout<<" Account is successfully removed"<<endl;
                      cust2_id = 0;
                  }
                }
                else if (count2 == 2)
                {
                    if (cust3_id > 0)
                  {
                      cout<<"Enter customer name you want to remove:  ";
                      cin >> rm_cust3;
                      cout <<"Enter customer's id you want to remove: ";
                      cin >> rm_c_id3;
                      cout<<" Account is successfully removed"<<endl;
                      cust3_id = 0;
                  }
                }
                else if (count2 == 3)
                {
                    if (cust4_id > 0)
                  {
                      cout<<"Enter customer name you want to remove:  ";
                      cin >> rm_cust4;
                      cout <<"Enter customer's id you want to remove: ";
                      cin >> rm_c_id4;
                      cout<<" Account is successfully removed"<<endl;
                       cust4_id = 0; 
                  }
                }
                 else 
                    cout <<"You don't have any record yet...";  
                    count2 = count2 + 1;
                    system_cls();
                }
      // end of option 3
                if (option == '4')
                {
                   header1();
                   cout << "Enters car name you want to change rent: ";
                    cin >> car_name;
                    if (car_name == "Alto suzuki 2016 model")
                    {
                    cout << "Enter new rent: ";
                    cin >> rent1;
                    }
                    else if ( car_name == "Honda city 2015 model")
                    {
                    cout << "Enter new rent: ";
                    cin >> rent2;
                    }
                    else if (car_name == "Toyota Fortuner 2018 model")
                    {
                    cout << "Enter new rent: ";
                    cin >> rent3;
                    }
                    else if (car_name == "Wagon R 2021 model")
                    {
                    cout << "Enter new rent: ";
                    cin >> rent4;
                    }
                   system_cls();
                }
               // end of option 4 
                 if (option == '5')
                 {
                      header1();
                      if (count1 == 0)
         {
            cout<<"Enter driver 1 name:  ";
            cin>> driver1_name;
            cout<<"Enter driver 1 id: ";
            cin>> driver1_id;
            cout<<"Enter driver 1 password: ";
            cin>> driver1_p;
           cout<<" Account is successfully created"<<endl;
         }
         else if (count1 == 1)
         {
            cout<<"Enter driver 2 name:  ";
            cin>> driver2_name;
            cout<<"Enter driver 2 id: ";
            cin>> driver2_id;
            cout<<"Enter driver 2 password: ";
            cin>> driver2_p;
            cout<<" Account is successfully created"<<endl;
         }
         else
            cout <<"You cannot add more driver"<<endl;
            count1 = count1 + 1;
            system_cls();
          }
         // end of option 5
          
          if (option == '6')
          {
              header1();
         if (count3 = 0)
         {
            if (driver1_id > 0)
          {
              cout<<"Enter driver name you want to remove:  ";
              cin >> rm_driver1;
              cout <<"Enter driver id you want to remove: ";
              cin >> rm_d_id1;
             cout<<"Account is successfully removed"<<endl; 
              driver1_id = 0; 
          }
         }
         else if(count3 = 1) 
         {
             if (driver2_id > 0)
              cout<<"Enter driver name you want to remove:  ";
              cin >> rm_driver2;
              cout <<"Enter driver's id you want to remove: ";
              cin >> rm_d_id2;
              cout<<"Account is successfully removed"<<endl;
              driver2_id = 0;
          }
         else
           cout <<"You don't have any record yet.."<<endl;
            count3 = count3 + 1;
            system_cls();
          }
      // end of option 6           
                if (option == '7')
                {
                  header1();
                  cust_display (cust1_name, cust1_id, cust1_p);
                  cust_display (cust2_name, cust2_id, cust2_p);
                  cust_display (cust3_name, cust3_id, cust3_p);
                  cust_display (cust4_name, cust4_id, cust4_p);
                  system_cls();
                }
         // end of option 7
            
            if (option == '8')
             { 
              header1();
              driver_display (driver1_name, driver1_id, driver1_p);
              driver_display (driver2_name, driver2_id, driver2_p);
              system_cls();
             }
             // end of option 8
             if (option == '9')
               {
                break;
               }
// end of Admin's menu
            }
       }
      else if (( status == 'c' && id == 456 && password == "cde") || (status == 'c' && id == 789 && password == "fgh") || ( status == 'c' && id == 901 && password == "ijk") || (status == 'c' && id == 234 && password == "lmn"))
      {
            while (true)
                 {
                    option = cust_menu( option);
                    if (option == '1')
                    {
                      Budget(budget);
                    }
                    // end of option 1
                    if (option == '2')
                   {
                     Rent( rent1, rent2, rent3, rent4);
                     system_cls();
                   }
                   // end of option 2
                   if (option == '3')
                   {
                     sorting( rent1, rent2, rent3, rent4);
                     system_cls();
                   }
                   // end of option 3
                   if (option == '4')
                   {
                     car_driver();
                     system_cls();
                   }
                   // end of option 4
                   if (option == '5')
                   {
                    invoice(c_name, c_id, car_name, day, rent, Advance, rental_amount, total_amount);
                    system_cls();
                   }
                   // end of option 5
                   if (option == '6')
                   {
                     break;
                   }
                 }
          }
          // end of customer's menu
         else if (( status == 'b' && id == 734 && password == "xyz") || (status == 'b' && id == 765 && password == "mno"))
         {
           while (true)
           {
            option = driver_menu( option);
            if (option == '1')
            {
                header1();
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
                cin >> driver1_id;
                cout<<"Enter your car: ";
                cin>> car2;
               }
             }
             // end of option 1
             if (option =='2')
             {
                header1();
                car( id, driver1_name, driver1_id, car1, driver2_name, driver2_id, car2 );
                system_cls();
             }
             // end of option 2
              if (option == '3')
              {
                 header1();
                 available_car( car1, car2);
                 system_cls();
              }
              // end of option 3
              if (option == '4')
              {
                 break;
              }
           }
        }
      else if (status == 'd')
          {
           cout <<"Thank you for using our application!!!!!!!!!!!!!!!"<<endl;
            break;
          }
       }
 }
 // PROGRAM END......


       
              
              
       




