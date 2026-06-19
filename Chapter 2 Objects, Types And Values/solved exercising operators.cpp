#include "PPPheaders.h"


int main() // simple program to exercise operators
{
    cout << "Please enter an integer: ";
    int n = 0;
    cin >> n;
    cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nthree times n == " << 3*n
    << "\ntwice n == " << n+n
    << "\nn squared == " << n*n
    << "\nn cubed == " << n*n*n
    << "\nhalf of n == " << n/2
    << "\nsquare root of n == " << sqrt(n)
    << "\n remainder when divided by 2 == " << n % 2
    << "\n remainder when divided by 3 == " << n % 3
    << "\n remainder when divided by 5 == " << n % 5
    << "\n remainder when divided by 7 == " << n % 7
    << "\n remainder when divided by 11 == " << n % 11
    << '\n';
}
// you can tell i really had fun with this lol, Stroustrup was ambigious with exact type and amount of operations to add on purpose, feel free to add operations of your own that come to mind!