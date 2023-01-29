#include<iostream>
using namespace std;

// function header
void maximum(int num1, int num2, int num3, int num4);
void minimum(int num1, int num2, int num3, int num4);

int main(){
    int number1, number2, number3, number4;

    cout<<"Enter 1st number : ";
    cin>>number1;

    cout<<"Enter 2nd number : ";
    cin>>number2;

    cout<<"Enter 3rd number : ";
    cin>>number3;

    cout<<"Enter 4th number : ";
    cin>>number4;

    maximum(number1, number2, number3, number4);
    minimum(number1, number2, number3, number4);
}

// function to find maximum of 4 numbers
void maximum(int num1, int num2, int num3, int num4){

    if(num1 >= num2 && num1 >= num3 && num1 >= num4){
        cout<<"Maximum Number is : "<<num1<<endl;
    }

    else if(num2 >= num1 && num2 >= num3 && num2 >= num4){
        cout<<"Maximum Number is : "<<num2<<endl;
    }

    else if(num3 >= num1 && num3 >= num2 && num3 >= num4){
        cout<<"Maximum Number is : "<<num3<<endl;
    }
    else{
        cout<<"Maximum Number is : "<<num4<<endl;
    }
}

// function to find minimum of 4 numbers
void minimum(int num1, int num2, int num3, int num4){

    if(num1 <= num2 && num1 <= num3 && num1 <= num4){
        cout<<"Minimum Number is : "<<num1<<endl;
    }

    else if(num2 >= num1 && num2 <= num3 && num2 <= num4){
        cout<<"Minimum Number is : "<<num2<<endl;
    }

    else if(num3 <= num1 && num3 <= num2 && num3 <= num4){
        cout<<"Minimum Number is : "<<num3<<endl;
    }
    else{
        cout<<"Minimum Number is : "<<num4<<endl;
    }
}




