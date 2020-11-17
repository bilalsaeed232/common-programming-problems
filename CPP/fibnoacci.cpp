/*
The Fibonacci Sequence is the series of numbers:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
The next number is found by adding up the two numbers before it:
    the 2 is found by adding the two numbers before it (1+1),
    the 3 is found by adding the two numbers before it (1+2),
    the 5 is (2+3),
    and so on!
Example: the next number in the sequence above is 21+34 = 55
*/

#include <stdio.h>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, n3, i, number;
    cout<<"How many numbers you want? ";
    cin>>number;
    cout<<n1<<" "<<n2<<" ";
    
    for (int i = 0; i < number; i++) {
        n3 = n1 + n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }

    return 0;    
}
