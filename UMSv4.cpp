#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
void header (){
cout<<"***********************************************************"<<endl;
cout<<"*          University Admission Management System         *"<<endl;
cout<<"***********************************************************"<<endl;
}

// end of header function
char menu()
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
char options;
cin >> options;
return options;
}

// end of menu function
void display(string name, float matric, float fsc, float ecat)
    {
     if(matric > 0)
        {
        cout << name << "\t"<< matric <<"\t"<< fsc <<"\t"<< ecat << endl;
        }
    }
//end of student information function
float aggregate(float ecat, float fsc, float matric)
 {
    float aggregate=(ecat * 100 * 0.3) / 400 +(matric * 0.25 * 100) / 1100 + (fsc * 0.45 * 100) / 1100;
}
// end of aggrigate function
void system_cls()
{
      cout<<"Press any key to continue...."<<endl;
      getch();
      system ("CLS");
}
// end of system_cls function

void merit(string st1_name, string st2_name, string st3_name, string st4_name,
   float st1_matric, float st1_fsc, float st1_ecat, float st2_matric, float st2_fsc, float st2_ecat , float st3_matric, float st3_fsc, float st3_ecat , float st4_matric, float st4_fsc, float st4_ecat,float st1_aggregate, float st2_aggregate, float st3_aggregate, float st4_aggregate)
 {
  float aggregate (float st1_ecat, float st1_fsc, float st1_matric);
  float aggregate (float st2_ecat, float st2_fsc, float st2_matric);
  float aggregate (float st3_ecat, float st3_fsc, float st3_matric);
  float aggregate (float st4_ecat, float st4_fsc, float st4_matric);
 
         if(st1_aggregate>st2_aggregate && st1_aggregate > st3_aggregate && st1_aggregate > st4_aggregate)
		    {
	        cout<< st1_name << "\t"<<st1_matric<< "\t"<<st1_fsc<< "\t"<<st1_ecat << "\t"<<st1_aggregate<<endl;
                   
                   if (st2_aggregate > st3_aggregate && st2_aggregate >st4_aggregate)
                   {
					  cout<< st2_name << "\t" <<st2_matric << "\t" << st2_fsc<< "\t" <<st2_ecat << "\t"<< st2_aggregate<<endl;
 				   }
 				  else if(st3_aggregate > st2_aggregate && st3_aggregate > st4_aggregate)
		           {
		            cout<< st3_name << "\t" <<st3_matric<< "\t" <<st3_fsc<< "\t" << st3_ecat << "\t"<<st3_aggregate<<endl;
                   }
				   else
				   {
				    cout<< st4_name << "\t" << st4_matric<< "\t" << st4_fsc << "\t" <<st4_ecat << "\t"<< st4_aggregate <<endl; 
                   }
		   
		           if(st3_aggregate > st2_aggregate && st3_aggregate > st4_aggregate)
					{
					  cout << st3_name << "\t" << st3_matric << "\t" <<st3_fsc<< "\t" <<st3_ecat << "\t"<<st3_aggregate<<endl;
                    }
					  else if(st2_aggregate > st3_aggregate && st2_aggregate > st4_aggregate)
		            {
		                cout<< st2_name << "\t" <<st2_matric<< "\t" <<st2_fsc<< "\t" <<st2_ecat << "\t"<<st2_aggregate<<endl;
                    }
				      else
                    {
				        cout<< st4_name << "\t" <<st4_matric<< "\t" <<st4_fsc<< "\t" <<st4_ecat << "\t"<<st4_aggregate<<endl; 
                    }

	          	if(st4_aggregate > st2_aggregate && st4_aggregate > st3_aggregate)
					{
		              cout<< st4_name << "\t" <<st4_matric<< "\t" <<st4_fsc<< "\t" <<st4_ecat << "\t"<<st4_aggregate<<endl;
            	    }
					  else if(st2_aggregate > st3_aggregate && st2_aggregate > st4_aggregate)
                    {
                       cout<< st2_name <<st2_matric<< "\t" <<st2_fsc<< "\t" <<st2_ecat << "\t" << st2_aggregate<<endl;
                    }
				      else
				     {
				        cout << st3_name << "\t" <<st3_matric<< "\t" <<st3_fsc<< "\t" <<st3_ecat << "\t"<<st3_aggregate<<endl; 
                     }
				}
              
              else if (st2_aggregate>st1_aggregate && st2_aggregate > st3_aggregate && st2_aggregate >st4_aggregate )  
				{
			       cout << st2_name << "\t" <<st2_matric<< "\t" <<st2_fsc<< "\t" <<st2_ecat << "\t"<<st2_aggregate<<endl;
                   if (st1_aggregate > st3_aggregate && st1_aggregate >st4_aggregate)
              	    {
					 cout<< st1_name << "\t" <<st1_matric<< "\t" <<st1_fsc<< "\t" <<st1_ecat << "\t"<<st1_aggregate<<endl;
 		            }
				   else if(st3_aggregate > st1_aggregate && st3_aggregate > st4_aggregate)
                    {
		            cout<< st3_name << "\t" <<st3_matric<< "\t" <<st3_fsc<< "\t" <<st3_ecat << "\t" <<st3_aggregate<<endl;
                    }
				   else
				    {
                    cout<< st4_name << "\t" <<st4_matric<< "\t" <<st4_fsc<< "\t" <<st4_ecat<< "\t" <<st4_aggregate<<endl; 
                    }
		   
		           if(st3_aggregate > st1_aggregate && st3_aggregate > st4_aggregate)
					{
					 cout<< st3_name << "\t" <<st3_matric<< "\t" <<st3_fsc<< "\t" <<st3_ecat << "\t" <<st3_aggregate<<endl;
                    }
					else if(st1_aggregate > st3_aggregate && st1_aggregate > st4_aggregate)
                    {
		                cout<< st1_name << "\t" <<st1_matric<< "\t" <<st1_fsc<< "\t" <<st1_ecat << "\t"<<st1_aggregate <<endl;
                    }  
				      else
				     {
				        cout<< st4_name << "\t" <<st4_matric<< "\t"<<st4_fsc<< "\t" <<st4_ecat << "\t"<<st4_aggregate<<endl; 
                     }
	                 
	               if(st4_aggregate > st1_aggregate && st4_aggregate > st3_aggregate)
					{
					  cout<< st4_name << "\t" <<st4_matric<< "\t"<<st4_fsc<< "\t" <<st4_ecat << "\t"<<st4_aggregate<<endl;
                    }
					  else if(st1_aggregate > st4_aggregate && st1_aggregate > st3_aggregate)
		               {
		                cout<<st1_name << "\t" <<st1_matric<< "\t" <<st1_fsc<< "\t" <<st1_ecat << "\t"<<st1_aggregate<<endl;
                       }
				      else
                      {				   
				        cout<< st3_name << "\t" <<st3_matric<< "\t" <<st3_fsc<< "\t" <<st3_ecat << "\t"<<st3_aggregate<<endl; 
                      }
				   }
					
			else if (st3_aggregate>st1_aggregate && st3_aggregate > st2_aggregate && st3_aggregate >st4_aggregate )  
			
			{
			  cout<<"Student name "<< st3_name << "\t" <<"Matric Marks "<<st3_matric<< "\t" << "inter marks "<<st3_fsc<< "\t" <<"Ecat marks "<<st3_ecat << "\t"<<"aggregate  "<<st3_aggregate<<endl;
                 if (st1_aggregate > st2_aggregate && st1_aggregate >st4_aggregate)
                    {
					  cout<< st1_name << "\t"<<st1_matric<< "\t" <<st1_fsc<< "\t" <<st1_ecat << "\t"<<st1_aggregate<<endl;
 		            }
		         else if(st2_aggregate > st1_aggregate && st2_aggregate > st4_aggregate)
                   {
		                cout<< st2_name << "\t" <<st2_matric<< "\t" <<st2_fsc<< "\t" <<st2_ecat << "\t"<<st2_aggregate<<endl;
                   }
				 else
				   {
                    cout<< st4_name << "\t" <<st4_matric<< "\t" <<st4_fsc<< "\t" <<st4_ecat << "\t"<<st4_aggregate<<endl; 
                   }
		   
		         if(st2_aggregate > st1_aggregate && st2_aggregate > st4_aggregate)
				     	{  
					      cout<< st2_name << "\t"<<st2_matric<< "\t" <<st2_fsc<< "\t" <<st2_ecat << "\t"<<st2_aggregate<<endl;
                        }
				 else if(st1_aggregate > st2_aggregate && st1_aggregate > st4_aggregate)
		            {
		                 cout<< st1_name << "\t" <<st1_matric<< "\t" <<st1_fsc<< "\t" <<st1_ecat << "\t"<<st1_aggregate<<endl;
                  }
				 else
				      {
				        cout<< st4_name << "\t" <<st4_matric<< "\t" <<st4_fsc<< "\t" <<st4_ecat << "\t"<<st4_aggregate<<endl; 
                  }
	               
	         if(st4_aggregate > st1_aggregate && st4_aggregate > st2_aggregate)
					    {
				        cout<< st4_name << "\t" <<st4_matric<< "\t" <<st4_fsc<< "\t" <<st4_ecat << "\t" <<st4_aggregate<<endl;
                    }
			   else if(st1_aggregate > st4_aggregate && st1_aggregate > st2_aggregate)
		            {
		                cout<< st1_name << "\t" <<st1_matric<< "\t" <<st1_fsc<< "\t" <<st1_ecat << "\t"<<st1_aggregate<<endl;
                  }
				else
				     {      
                  cout<< st2_name << "\t"<<st2_matric<< "\t" << "inter marks "<<"\t" <<st2_ecat << "\t"<<st2_aggregate<<endl; 
                 }
				}
	      else if (st4_aggregate>st1_aggregate && st4_aggregate > st2_aggregate && st4_aggregate >st3_aggregate ) 
			   {
		         cout<< st4_name << "\t" <<st4_matric<< "\t" <<st4_fsc<< "\t" <<st4_ecat << "\t"<<st4_aggregate<<endl;
                if (st1_aggregate > st2_aggregate && st1_aggregate >st3_aggregate)
                {        
		           cout<< st1_name << "\t" <<st1_matric<< "\t" << st1_fsc<< "\t "<< st1_ecat << "\t"<<st1_aggregate<<endl;
                }
		        	 else if(st2_aggregate > st1_aggregate && st2_aggregate > st3_aggregate)
		          {
		         cout<< st2_name << "\t" <<st2_matric<< "\t" <<st2_fsc<< "\t" <<st2_ecat << "\t"<<st2_aggregate<<endl;
                }
				   else
				    {
				      cout<< st3_name << "\t" <<st3_matric<< "\t" <<st3_fsc<< "\t" <<st3_ecat << "\t"<<st3_aggregate<<endl; 
                }	  
		         if(st2_aggregate > st1_aggregate && st2_aggregate > st3_aggregate)
				     	{  
			             cout << st2_name << "\t" <<st2_matric<< "\t" <<st2_fsc<< "\t" <<st2_ecat << "\t"<<st2_aggregate<<endl;
                  }
                  else if(st1_aggregate > st2_aggregate && st1_aggregate > st3_aggregate)
                  {
		                 cout<< st1_name << "\t" <<st1_matric<< "\t" <<st1_fsc<< "\t" <<st1_ecat << "\t"<<st1_aggregate<<endl;
                  }
				       else
				      {
				        cout<< st3_name << "\t" <<st3_matric<< "\t" <<st3_fsc<< "\t" <<st3_ecat << "\t"<<st3_aggregate<<endl; 
                  }
	            if(st3_aggregate > st1_aggregate && st3_aggregate > st2_aggregate)
					{
	               cout<< st3_name << "\t" <<st3_matric<< "\t" <<st3_fsc<< "\t" <<st3_ecat << "\t"<<st3_aggregate<<endl;
               }    
					  else if(st1_aggregate > st2_aggregate && st1_aggregate > st3_aggregate)
		          {
		             cout<< st1_name << "\t" <<st1_matric<< "\t"<<st1_fsc<< "\t" <<st1_ecat << "\t"<<st1_aggregate<<endl;
                } 		       
				    else
				   {
				        cout<< st1_name << "\t" <<st1_matric<< "\t" <<st1_fsc<< "\t" <<st1_ecat << "\t"<<st1_aggregate<<endl; 
               }  
				}
			
 }
main()
{
  string st1_name, st2_name, st3_name, st4_name ;
   float st1_matric=0, st1_fsc=0, st1_ecat=0, st2_matric=0, st2_fsc=0, st2_ecat=0 , st3_matric=0, st3_fsc=0, st3_ecat=0 , st4_matric=0, st4_fsc=0, st4_ecat=0;
   char options = ' ';
   int Exit=0;
   int count = 0;
   float st1_aggregate, st2_aggregate, st3_aggregate,st4_aggregate;
 
      while (options != '4')
   {
       options = menu();
       system_cls();
     if (options== '1')  
    {
        header();
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
         else if (count == 3)
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
         else
         {
             cout << "You cannot add more students....."<<endl;
            
         }
         count = count + 1;
         system_cls();
      } 

  else if(options== '2')
      {   
               header();
               cout<< "student_name" << "\t" <<"Matric Marks "<<"\t"<< "inter marks "<<"\t"<<"Ecat marks"<<endl;
               display (st1_name, st1_matric, st1_fsc, st1_ecat);     
               display (st2_name, st2_matric, st2_fsc, st2_ecat);       
               display (st3_name, st3_matric, st3_fsc, st3_ecat);        
               display (st4_name, st4_matric, st4_fsc, st4_ecat);
               system_cls();
      }

   else if(options=='3')
            {
               cout<< "student_name" << "\t" <<"Matric Marks "<<"\t"<< "inter marks "<<"\t"<<"Ecat marks"<< "\t"<< "Aggregate"<<endl;
              merit( st1_name, st2_name, st3_name, st4_name, st1_matric, st1_fsc, st1_ecat, st2_matric, st2_fsc, st2_ecat , st3_matric, st3_fsc, st3_ecat , st4_matric, st4_fsc, st4_ecat, st1_aggregate, st2_aggregate, st3_aggregate, st4_aggregate);
              system_cls();
            }
   else if(options== '4')
           {
              header();
              cout<<"Thank you for using our application...";
              Exit = 1;
           }
   else
      {
        cout<<"You choose wrong option"<<endl;
        system_cls();
      }
   }
}




