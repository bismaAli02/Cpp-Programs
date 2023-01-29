#include<iostream>
using namespace std;

// function header
float calculator(int num1, string operatorName, int num2);

int main(){
    float addition = calculator(2, "+", 2);
    cout<<"2 + 2 = "<<addition<<endl;

    float multiplication = calculator(2, "*", 2);
    cout<<"2 * 2 = "<<multiplication<<endl;

    float division = calculator(4, "/", 2);
    cout<<"4 / 2 = "<<division<<endl;
}


// function to calculate addition, subtraction, multiplication and division
float calculator(int num1, string operatorName, int num2){

    float answer = 0;
    if(operatorName == "+"){
        answer = num1 + num2;
    }
    else if(operatorName == "-"){
        answer = num1 - num2;
    }
    else if(operatorName == "*"){
        answer = num1 * num2;
    }
    else if(operatorName == "/"){
        answer = num1 / num2;
    }
    else{
        cout<<"Invalid Operator"<<endl;
    }
    

    return answer;
}

