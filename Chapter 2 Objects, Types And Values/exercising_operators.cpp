//agian, code as is from the book for if you want to solve it yourself  first
#include "PPPheaders.h"


int main() // simple program to exercise operators
{
    cout << "Please enter a floating point value: ";
    double n = 0;
    cin >> n;
    cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nthree times n == " << 3*n
    << "\ntwice n == " << n+n
    << "\nn squared == " << n*n
    << "\nhalf of n == " << n/2
    << "\nsquare root of n == " << sqrt(n)
    << '\n';
}