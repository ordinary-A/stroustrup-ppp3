#include "PPPheaders.h"
int main()
{
    string val1, val2, val3;
    cout << "Please enter three strings separated by spaces: ";
    if (!(cin >> val1 >> val2 >> val3)) {
        cout << "Error: Invalid input.\n";
        return 1;
    }

    // Sorting using swaps (strings compare lexicographically with < and >) just like numbers
    if (val1 > val2) swap(val1, val2);
    if (val1 > val3) swap(val1, val3);
    if (val2 > val3) swap(val2, val3);

    cout << "In alphabetical order: "
         << val1 << ", " << val2 << ", " << val3 << endl;

    return 0;
}// also added unrequested error handling here. i have a version without error handling too as i do for the ints