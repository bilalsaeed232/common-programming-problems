/*
Factorial, in mathematics, the product of all positive integers less than or equal to a given positive integer 
and denoted by that integer and an exclamation point. Thus, factorial seven is written 7!, 
meaning 1 × 2 × 3 × 4 × 5 × 6 × 7. Factorial zero is defined as equal to 1.
*/

#include<iostream> //we need this for cin, cout
using namespace std;


/*  this function takes any number and 
    returns the factorial it uses recursion
*/
int factorial (int n)
{
  if (n < 0)
    return (-1);		/*Wrong value */
  if (n == 0)
    return (1);			/*Terminating condition */
  else
    {
      return (n * factorial (n - 1));
    }
}

int main ()
{
  int fact, value;
  cout << "Enter any number: ";
  cin >> value;
  fact = factorial (value);
  cout << "Factorial of a number is: " << fact << endl;
  return 0;
}
