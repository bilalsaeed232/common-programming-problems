/******************************************************************************
A palindrome number is a number that is same after reverse. For example 121, 34543, 343, 131, 48984 are the palindrome numbers.
STEPS OF THIS ALGORITHM:
    - Get the number from user
    - Hold the number in temporary variable
    - Reverse the number
    - Compare the temporary number with reversed number
    - If both numbers are same, print palindrome number
    - Else print not palindrome number
    
*******************************************************************************/
#include <iostream> //need this for cin, cout
using namespace std;

int main()
{
  int n, r, sum = 0, temp;
  cout << "Enter the Number=";
  cin >> n;
  
  /* holding the number in temporary variable
  before making any changes to it */
  temp = n;
  while (n > 0)
    {
      //reversing the number
      r = n % 10;
      sum = (sum * 10) + r;
      n = n / 10;
    }
  if (temp == sum) //is the reversed and actual number are equal
    cout << "Number is Palindrome.";
  else
    cout << "Number is not Palindrome.";
  return 0;
}
