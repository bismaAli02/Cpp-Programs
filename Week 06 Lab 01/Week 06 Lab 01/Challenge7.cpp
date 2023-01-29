#include<iostream>
using namespace std;

// function header
float taxCalculator(char type, float price);

int main(){
    char vehicleType;
    float price;

    cout<<"M for Motorcycle"<<endl;
    cout<<"E for Electric"<<endl;
    cout<<"S for Sedan"<<endl;
    cout<<"V for Van"<<endl;
    cout<<"T for Truck"<<endl<<endl;

    cout<<"Enter your choice : ";
    cin>>vehicleType;

    cout<<"Enter Price of vehicle : ";
    cin>>price;

    float finalPrice = taxCalculator(vehicleType, price);

    cout<<"The final price on a vehicle of type "<<vehicleType<<" after adding the tax is $"<<finalPrice<<endl;
}

// function to calculate tax on a vehicle's price according to given type
float taxCalculator(char type, float price){

    float taxAmount = 0, finalAmount = 0;
    if(type == 'M'){
        taxAmount = price * 0.06;
    }
    if(type == 'E'){
        taxAmount = price * 0.08;
    }
    if(type == 'S'){
        taxAmount = price * 0.1;
    }
    if(type == 'V'){
        taxAmount = price * 0.12;
    }
    if(type == 'T'){
        taxAmount = price * 1.15;
    }

    finalAmount = price + taxAmount;
    return finalAmount;
}









