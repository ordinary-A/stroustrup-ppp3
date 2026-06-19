#include "PPPheaders.h"

int main()
{
    int val1, val2, val3;

    cout << "Please enter three integers separated by spaces: ";
    cin >> val1 >> val2 >> val3;

    // sorting using swaps
    if (val1 > val2) swap(val1, val2);
    if (val1 > val3) swap(val1, val3);// again swap function was not mentioned by Stroustrup but it's pretty self explanatory and a clean way to do it. Shows the importance of knowing your standard library and using it to your advantage.
    if (val2 > val3) swap(val2, val3); 

    cout << "The numbers in numerical sequence are: "
         << val1 << " " << val2 << " " << val3 << endl;
}