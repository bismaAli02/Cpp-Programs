#include<iostream>
using namespace std;

int arr[5] = {5,6,7,3,4};
string name[5] = {"Saad" , "Ali" , "Bisma" , "Muaz" , "Bakar"};

//function
int highest (int s){
    int largest , idx;
    largest = -1;
    for (int i = s; i < 5; i++)
    {
        if(largest < arr[i]){
            largest = arr[i];
            idx = i;
        }
    }
    return idx;
}

main(){
    int temp , high_idx;
    
    for (int s = 0; s < 5; s++)
    {
        high_idx = highest (s);
        temp = arr[high_idx];
        arr[high_idx] = arr[s];
        arr[s] = temp;

        tempS = name[high_idx];
        name[high_idx] = name[s];
        name[s] = tempS;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<name[i]<<endl;
    }
    
    
}