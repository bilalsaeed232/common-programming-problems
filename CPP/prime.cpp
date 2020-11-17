/*
A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers. 
A natural number greater than 1 that is not prime is called a composite number. 
For example, 5 is prime because the only ways of writing it as a
product, 1 × 5 or 5 × 1, involve 5 itself. However, 4 is composite because it is a 
product (2 × 2) in which both numbers are smaller than 4
*/

#include <iostream>  
using namespace std;  

int main()  
{  
  int n, i, m=0;
  
  /* we will assume every number 
  is prime (unless proven otherwise, i.e line 20) */
  int isPrime=1;  
  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  m=n/2;  // because number won't be divisible after n/2
  
  /* notice i in the loop starts with 2 because every 
  number is divisible by 1*/
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          isPrime=1;  
          break;// don't need the loop anymore so we break out
      }  
  }  
  if (isPrime==0)  
      cout << "Number is Prime."<<endl;  
  return 0;  
}  
