#include "PPPheaders.h"
int main()
{
double val1;
double val2;

cout << "Please enter two doubles: ";
cin >> val1 >> val2;                              //short way instead of if conditions.
cout << "the smaller of the two doubles is " << (val1 < val2 ? val1 : val2) << endl;
cout << "the larger of the two doubles is " << (val1 > val2 ? val1 : val2) << endl;
cout << "the sum of the two doubles is " << val1 + val2 << endl;
cout << "the product of the two doubles is " << val1 * val2 << endl;
cout << "the difference of the two doubles is " << (val1 > val2 ? val1 - val2 : val2 - val1) << endl;
cout << "the ratio of the two doubles is " << (val1 > val2 ? double(val1) / val2 : double(val2) / val1) << endl;

/* difference here is that we are now working with doubles instead of integers, meaning if you enter decimal values, they will be handled correctly
unlike the integer version which would ignore the decimal part. important to note that while doubles are good because of their precision,
they take more space in memory, irrelevant for small programs like this but an important note for bigger scale projects. so try to practice appropriate data types for your use case */

return 0;
 }