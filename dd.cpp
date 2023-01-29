#include<iostream>
using namespace std ;
void diamond(int rows)
{
 // loops for upper part
     int r;
     for ( r = 1; r <= rows; r++)
       {
       for(int spa = 1; spa <= 4 - r; r++)
          cout <<" "<<endl;
       
     for(int col = 1; col <= (r * 2 )- 1; r++)
      cout <<"*"<<endl;
        
     loops for lower part
    for ( r = rows; r >= 1; r--)
       {
       for(int spa = 1; spa = r - rows; r++)
          cout <<" ";
       
     for(int col = 1; col = (r * 2 )- 1; r++)
      cout <<"*"<<endl;
       }
       }
}
main()
{
   int rows;
   cout <<"Enter number of rows: ";
   cin>> rows;
   diamond(rows);
}
