#include<iostream>
#include<stdlib.h>
using namespace std;

void header (){
cout<<"***********************************************************"<<endl;
cout<<"*          University Admission Management System         *"<<endl;
cout<<"***********************************************************"<<endl;
}

// end of header function
int menu()
{
header();
cout<<"Main Menu   >"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"Select one of the following options number . . ."<<endl;
cout<<"1.  Add New Student Record"<<endl;
cout<<"2.  View all Records"<<endl;
cout<<"3.  Print the record in Merit order"<<endl;
cout<<"4.  Generate Merit List"<<endl;  
cout<<"5.  Program seat Management"<<endl;
cout<<"6.  Exit"<<endl;
cout<<"Your option.. ";
int options;
cin >> options;
return options;
}

// end of menu function
void display(string name, float ecat, float matric, float fsc)
    {
      cout<< "student_name" << "\t" <<"Matric Marks "<<"\t"<< "inter marks "<<"\t"<<"Ecat marks"<<endl;
      cout << name << matric << fsc << ecat;
    }

//end of student information function

void merit(string st1_name, string st2_name, string st3_name, string st4_name,
   float st1_matric, float st1_fsc, float st1_ecat, float st2_matric, float st2_fsc, float st2_ecat , float st3_matric, float st3_fsc, float st3_ecat , float st4_matric, float st4_fsc, float st4_ecat,float st1_aggregate, float st2_aggregate, float st3_aggregate, float st4_aggregate)
 {
 }
 main()
{
   string st1_name, st2_name, st3_name, st4_name ;
   float st1_matric=0, st1_fsc=0, st1_ecat=0, st2_matric=0, st2_fsc=0, st2_ecat=0 , st3_matric=0, st3_fsc=0, st3_ecat=0 , st4_matric=0, st4_fsc=0, st4_ecat=0;
   int options;
   int Exit=0;
   int count = 0;
   float st1_aggregate, st2_aggregate, st3_aggregate,st4_aggregate;
   options = menu();
   if (options == 1)
   {  
      {
         if (count == 0)
         {
            cout<<"Enter Student1 name:  ";
            cin>> st1_name;
            cout<<"Enter matric marks: ";
            cin>> st1_matric;
            cout<<"Enter inter marks: ";
            cin>> st1_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st1_ecat;
            }
         else if (count == 1)
            {
            cout<<"Enter Student2 name:  ";
            cin>> st2_name;
            cout<<"Enter matric marks: ";
            cin>> st2_matric;
            cout<<"Enter inter marks: ";
            cin>> st2_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st2_ecat;
            } 
         else if (count == 2)
            {
            cout<<"Enter Student3 name:  ";
            cin>> st3_name;
            cout<<"Enter matric marks: ";
            cin>> st3_matric;
            cout<<"Enter inter marks: ";
            cin>> st3_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st3_ecat;
            }
         else 
            {
            cout<<"Enter Student4 name:  ";
            cin>> st4_name;
            cout<<"Enter matric marks: ";
            cin>> st4_matric;
            cout<<"Enter inter marks: ";
            cin>> st4_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st4_ecat;
            }
         count = count + 1;
      }
     
   if(options==2)
              cout<<"You don't have any record yet";
   if(options==3)
              cout<<"You don't have any record yet";
   if(options==4)
              cout<<"You don't have any record yet";
   if(options==5)
              cout<<"You don't have any record yet";
   if(options==6)
              header();
              cout<<"Thank you for using our UMS";
              Exit = 1;
       char ch;
       cin >> ch;
       system ("CLS");
      }
   
     
    // end of first interface 
   if (Exit == 0) 
   {
     if (options== 1)

     {  
      {
         if (count == 0)
         {
            cout<<"Enter Student1 name:  ";
            cin>> st1_name;
            cout<<"Enter matric marks: ";
            cin>> st1_matric;
            cout<<"Enter inter marks: ";
            cin>> st1_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st1_ecat;
            }
         else if (count == 1)
            {
            cout<<"Enter Student2 name:  ";
            cin>> st2_name;
            cout<<"Enter matric marks: ";
            cin>> st2_matric;
            cout<<"Enter inter marks: ";
            cin>> st2_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st2_ecat;
            } 
         else if (count == 2)
            {
            cout<<"Enter Student3 name:  ";
            cin>> st3_name;
            cout<<"Enter matric marks: ";
            cin>> st3_matric;
            cout<<"Enter inter marks: ";
            cin>> st3_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st3_ecat;
            }
         else 
            {
            cout<<"Enter Student4 name:  ";
            cin>> st4_name;
            cout<<"Enter matric marks: ";
            cin>> st4_matric;
            cout<<"Enter inter marks: ";
            cin>> st4_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st4_ecat;
            }
         count = count + 1;
      }
     
   if(options==2)
      {   
        if (st1_ecat > 0)
               display ( st1_name, st1_matric, st1_fsc, st1_ecat);
        else if(st2_ecat > 0)       
               display ( st2_name, st2_matric, st2_fsc, st2_ecat);
        else if(st3_ecat > 0)       
               display ( st3_name, st3_matric, st3_fsc, st3_ecat);
        else if(st4_ecat > 0)        
               display ( st4_name, st4_matric, st4_fsc, st4_ecat);
      }
   if(options==3)
              cout<<"You don't have any record yet";
   if(options==4)
              cout<<"You don't have any record yet";
   if(options==5)
              cout<<"You don't have any record yet";
   if(options==6)
              cout<<"Exit";
              Exit = 1;
       char c;
       cin >> c;
       system ("CLS");
      }
     }
// end of 2nd interface

 if (Exit == 0) 
   {
     if (options== 1)

     {  
      {
         if (count == 0)
         {
            cout<<"Enter Student1 name:  ";
            cin>> st1_name;
            cout<<"Enter matric marks: ";
            cin>> st1_matric;
            cout<<"Enter inter marks: ";
            cin>> st1_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st1_ecat;
            }
         else if (count == 1)
            {
            cout<<"Enter Student2 name:  ";
            cin>> st2_name;
            cout<<"Enter matric marks: ";
            cin>> st2_matric;
            cout<<"Enter inter marks: ";
            cin>> st2_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st2_ecat;
            } 
         else if (count == 2)
            {
            cout<<"Enter Student3 name:  ";
            cin>> st3_name;
            cout<<"Enter matric marks: ";
            cin>> st3_matric;
            cout<<"Enter inter marks: ";
            cin>> st3_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st3_ecat;
            }
         else 
            {
            cout<<"Enter Student4 name:  ";
            cin>> st4_name;
            cout<<"Enter matric marks: ";
            cin>> st4_matric;
            cout<<"Enter inter marks: ";
            cin>> st4_fsc;
            cout<<"Enter ecat marks: ";
            cin>> st4_ecat;
            }
         count = count + 1;
      }
     
   if(options==2)
      {   
        if (st1_ecat > 0)
               display ( st1_name, st1_matric, st1_fsc, st1_ecat);
        else if(st2_ecat > 0)       
               display ( st2_name, st2_matric, st2_fsc, st2_ecat);
        else if(st3_ecat > 0)       
               display ( st3_name, st3_matric, st3_fsc, st3_ecat);
        else if(st4_ecat > 0)        
               display ( st4_name, st4_matric, st4_fsc, st4_ecat);
      }
   if(options==3)
              cout<<"You don't have any record yet";
   if(options==4)
              cout<<"You don't have any record yet";
   if(options==5)
              cout<<"You don't have any record yet";
   if(options==6)
              header();
              cout<<"Thank you for using our application...";
              Exit = 1;
       char c;
       cin >> c;
       system ("CLS");
      }
     }
// end of 2nd interface
     








     }
   
   
