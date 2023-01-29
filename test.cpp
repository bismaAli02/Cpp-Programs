#include<iostream>

using namespace std;

main(){

    while(true){
        
    cout<<"-------------------- Main Menu---------------------- ";
    cout<<"1 for Admin "<<endl;
    cout<<"2 for Teacher"<<endl;
    cout<<"3 for EXIT "<<endl;
    int mainchoice;
    cin>>mainchoice;

      if(mainchoice == 1){


          while(true){

              cout<<"--- Admin Menu ----"<<endl;
              cout<<"1 for Add "<<endl;
              cout<<"2 for Display "<<endl;
              cout<<"3 for EXIT "<<endl;
              int option;
              cin>>option;

              if(option == 1){

              }else if(option == 2){

              }else if(option == 3){
                break;
              }

          }//end of while loop

      }else if(mainchoice == 2){

           while(true){

              cout<<"--- Admin Teacher ----"<<endl;
              cout<<"1 for Add "<<endl;
              cout<<"2 for Display "<<endl;
              cout<<"3 for EXIT "<<endl;
              int option;
              cin>>option;

              if(option == 1){

              }else if(option == 2){

              }else if(option == 3){
                break;
              }
           }//end of while loop
      }else if(mainchoice == 3){
          break;
      }

    }


}
