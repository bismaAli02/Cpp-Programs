#include<iostream>
using namespace std;
int n;
int word[100];
int count=0;
void input()
{
    cout << "How many elements you want to enter:";
    cin >> n;
    for (int idx = 0; idx < n; idx = idx + 1)
    {
        cout << "Enter Elements:";
        cin >> word[idx];
    }
}
void isrepeatingcycle(){
     int c;
     bool b=true;
     cout<<"Enter LENGTH of CYCLE:";
     cin>>c;
     for(int i=0; i<n; i=i+1 ){
        if (word[i] != word[c+i]){
            b=false;
         }

}
if(b == true){
cout<<"true";
}
else {
    cout<<"false";
    }

}
main(){
    input();
    isrepeatingcycle();
}
