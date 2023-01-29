#include<iostream>
using namespace std;

// function header
bool isEligibleToVote(int age);

int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    bool isEligible = isEligibleToVote(age); // call function

    if(isEligible){  // check if eligible
        cout<<"You are Eligible to Vote"<<endl;
    }
    else{
        cout<<"You are not Eligible to Vote"<<endl;
    }
    
}

//function to find if a person is eligible to vote or not
bool isEligibleToVote(int age){
    if(age >= 18){
        return true;
    }
    else{
        return false;
    }
}


