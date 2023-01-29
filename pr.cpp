#include<iostream>
using namespace std;
void per()
{
    int num, sum=0, sum1=0, sum2=0, p1=0, p2=0, p3=0;
    cout <<"Enter total number of integers: ";
    cin >> num;
    int n;
    while (n <= num)
    {
      cout << "Enter number: ";
      cin >> n;
      cout<< n << endl;
      if (n % 2 == 0)
      sum = sum + 1;
      if(n % 3 == 0)
      sum1 = sum1 + 1;
      if (n % 4 == 0)
      sum2 = sum2 + 1;
     }
      p1 = (sum / num) * 100;
      cout << p1 <<endl;
      p2 = (sum1 / num) * 100;
      cout << p2 <<endl;
      p3 = (sum2 / num) * 100;
      cout << p3 <<endl;
}
main()
   {
       per();
   }
