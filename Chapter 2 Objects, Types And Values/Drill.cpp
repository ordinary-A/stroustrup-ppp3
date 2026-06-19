/* this is the answer to the requested drill,
 notice that if you want to do this yourself first you are going to have to do so from a blank file because Stroustrup doesnt provide a starting point for this drill, which is intended */

#include "PPPheaders.h"

int main()
{
using namespace PPP; //needed to use simple error function.
//assign all variables we will be needing in order
string first_name;
string friend_name;
char friend_sex = 0;
char mORf;
int age;

cout << "Enter the name of the person you want to write to: ";
cin >> first_name;

cout << "Dear " << first_name << ",\n\n";

cout << "Do you remember our other friend what was his name? ";
cin >> friend_name;

cout << "Have you seen " << friend_name << " lately? ";

cout << "is the friend male or female? (m/f): ";
cin >> mORf;

if (mORf == 'm')
    friend_sex = '0';
else if (mORf == 'f')
    friend_sex = '1';
else
    error("invalid input!");

if (friend_sex == '0')
    cout << "If you see " << friend_name << " please ask him to call me.\n";
else if (friend_sex == '1')
    cout << "If you see " << friend_name << " please ask her to call me.\n";


cout << "Enter the age of the recipient: ";
cin >> age;
if (age <= 0 || age >= 110)
    error("you're kidding!");
cout << "I hear you just had a birthday and you are " << age << " years old.\n";
if (age < 12)
    cout << "Next year you will be " << age + 1 << ".\n";
else if (age == 17)
    cout << "Next year you will be able to vote.\n";
else if (age > 70)
    cout << "I hope you are enjoying retirement.\n";

cout << "Yours sincerely,\n\n\nAlaadin Sameh\n";



/*completed drill as requested by stroustrup, i took some liberties in the questions and the output but the general idea is there, i also added some error handling for the sex that was not explicitly
required by strousrup but i thought it would be a good idea to add it in order to make the program more robust and to get some practice with error handling.*/
//see how i made this above comment span two lines without double slashing the second line, good way to add long comments. a personal tip from me :)
}