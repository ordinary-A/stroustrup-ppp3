#include "PPPheaders.h"
int main()
{
int val1;
int val2;

cout << "Please enter two integers: ";
cin >> val1 >> val2;                              //short way instead of if conditions.
cout << "the smaller of the two integers is " << (val1 < val2 ? val1 : val2) << endl;
cout << "the larger of the two integers is " << (val1 > val2 ? val1 : val2) << endl;
cout << "the sum of the two integers is " << val1 + val2 << endl;
cout << "the product of the two integers is " << val1 * val2 << endl;
cout << "the difference of the two integers is " << (val1 > val2 ? val1 - val2 : val2 - val1) << endl;
cout << "the ratio of the two integers is " << (val1 > val2 ? double(val1) / val2 : double(val2) / val1) << endl;

/* i again took a liberty here. at this point in the book we should only know about if statements. but i thought it would be a good idea to use the ternary operator here to make the code more concise and to get some practice with it,
also it is a good way to show how we can use it as a shorthand for if statements, so i hope you don't mind stroustrup and friends :) */

return 0;
 }