#include "PPPheaders.h"

int main()
{
    double miles;
    double kilometers;

    cout << "Enter the number of miles: ";
    cin >> miles;

    kilometers = miles * 1.60934;

    cout << "The number of kilometers is: " << kilometers << endl;

}