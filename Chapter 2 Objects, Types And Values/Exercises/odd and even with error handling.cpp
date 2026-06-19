#include "PPPheaders.h"
int main()
{
    int val;
    cout << "Please enter an integer: ";
    if (!(cin >> val)) {
        cout << "Error: invalid input. Please enter an integer.\n";
        return 1;
    }
    if (val % 2 == 0)
        cout << "The value " << val << " is an even number.\n";
    else
        cout << "The value " << val << " is an odd number.\n";
    return 0;
}