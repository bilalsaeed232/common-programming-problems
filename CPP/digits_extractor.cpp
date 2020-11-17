#include<iostream> //we need this for cin, cout
using namespace std;


int main ()
{
  int n, digit, remaining;
  cout<<"Enter your number:";    
  cin>>n;
  
  remaining = n;
    
  do {
    digit = remaining%10;
    cout<<digit<<endl;    
    remaining = remaining/10;
  } while(remaining >= 10); 
    digit = remaining;
    cout<<digit;
    
  return 0;
}
