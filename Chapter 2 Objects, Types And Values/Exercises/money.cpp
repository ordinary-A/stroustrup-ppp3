#include "PPPheaders.h"
int main()
{
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int dollars;
    //input block
    cout << "how many pennies do you have? ";
    cin >> pennies;
    cout << "how many nickels do you have? ";
    cin >> nickels; 
    cout << "how many dimes do you have? ";
    cin >> dimes;
    cout << "how many quarters do you have? ";
    cin >> quarters;
    cout << "how many dollars do you have? ";
    cin >> dollars;
    //output block
    cout << "you have " << pennies<< "pennies";
    cout << "\nyou have " << nickels << "nickels";
    cout << "\nyou have " << dimes << "dimes";
    cout << "\nyou have " << quarters << "quarters";
    cout << "\nyou have " << dollars << "dollars";
    cout << "\nthe total amount of money you have is: " << pennies  + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100 << " cents" << endl;
    cout << "or " << pennies * 0.01 + nickels * 0.05 + dimes * 0.10 + quarters * 0.25 + dollars << " dollars" << endl;
    } //this is the bare minimum, no error handling, just the task.