#include <iostream>
using namespace std;
int n;
int x=0;
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
int i;
    void findOdd(){
    for( i=0; i<n; i=i+1){
        for(int j=0; j<n; j=j+1){
            if (word[i] == word[j]){
                count = count +1;
              }
              
        }
         if (count%2 != 0){
                  x=word[i];
                  cout << x <<endl;
                  break;
              }
    
    }

    }
    
   
    main()
    {
        input();
        findOdd();
    }