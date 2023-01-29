#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string month; // Variable to store No Of Months
    
    int stays; // Variable to store no of Days of Stay
    
    float rent_studio,rent_app;
    
    float discount_studio = 0;
    float discount_app = 0;
    
    cout << "Enter the Name of Month = ";
    cin >> month;
    
    cout << "Enter no stays = ";
    cin >> stays;
    
    
    if ( month == "may" || month == "october"){
    	rent_studio = 50 * stays;
    	rent_app = 65 * stays;
	if ( stays > 7 && stays <=14){
		discount_studio = (rent_studio * 5.0)/100.0;	
	}
	if ( stays > 14 ){
		discount_studio = (rent_studio * 30.0)/100.0;
	}
	
	}
	else if ( month == "june" || month == "september"){
    	rent_studio = 75 * stays;
    	rent_app = 68 * stays;
	if ( stays > 14 ){
		discount_studio = (rent_studio * 20.0)/100.0;
	}
	
	}
	else if ( month == "july" || month == "august"){
    	rent_studio = 76 * stays;
    	rent_app = 77 * stays;
	}
	if ( stays > 14){
		discount_app = (rent_app * 10.0)/100.0;	
	}
	rent_studio = rent_studio - discount_studio;
	rent_app = rent_app - discount_app;
	if (	!(month == "july" || month == "august" || month == "june" || month == "september" || month == "may" || month == "october"))
			cout << " Wrong Month ";
	else{
		cout << "Appartment: " << rent_app <<"$"<<endl;
		cout << "Studio: " << rent_studio <<"$";
	}
	
    
    
    
    
    
    
    
    
    
}// End of main
