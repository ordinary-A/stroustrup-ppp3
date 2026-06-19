#include "PPPheaders.h"

int main()
{
    int val1, val2, val3;

    cout << "Please enter three integers separated by spaces: ";

    // 1. Check if the user entered three valid integers
    if (!(cin >> val1 >> val2 >> val3)) {
        cout << "Error: Invalid input. Please enter integers only.\n";
        return 1; // Exit the program with an error code
    }

    // 2. Check if there is extra junk (like a 4th number) on the same line
    string extra;
    if (cin >> extra) {
        cout << "Error: You entered too many inputs. Please enter exactly three integers.\n";
        return 1;
    }

    // Sorting using swaps
    if (val1 > val2) swap(val1, val2);
    if (val1 > val3) swap(val1, val3); 
    if (val2 > val3) swap(val2, val3); 

    cout << "The numbers in numerical sequence are: "
         << val1 << " " << val2 << " " << val3 << endl;
         
    return 0;
} // added error handling for invalid input and extra input, this way the program is more robust and can handle user errors gracefully. you shouldnt know this by this point in the book
// but if you can grasp it correctly then it's another thing to your advantage and it will make your programs more user friendly and it is something you will use when writing real world programs