#include "PPPheaders.h"
int main()
{
    int val;
    cout << "Please enter an integer: ";
    cin >> val;
    if (val % 2 == 0)
        cout << "The value " << val << " is an even number.\n";
    else
        cout << "The value " << val << " is an odd number.\n";
    return 0;
}