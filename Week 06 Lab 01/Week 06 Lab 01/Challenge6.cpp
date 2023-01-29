#include<iostream>
using namespace std;

// function header
void checkAlphabet(char alphabet);

int main(){
    char alphabet;
    cout<<"Enter (A / a) : ";
    cin>>alphabet;

    checkAlphabet(alphabet);
}

//function to check A / a
void checkAlphabet(char alphabet){
    if(alphabet == 'A'){
        cout<<"You have entered Capital A"<<endl;
    }
    if(alphabet == 'a'){
        cout<<"You have entered Small A"<<endl;
    }

}








