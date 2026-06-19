//solution

#include "PPPheaders.h"

int main() // read name and age
{
cout << "Please enter your first name and age\n";
string first_name = "???"; // string variable ("???" indicates "don’t know the name")
int age = -1; // integer variable (-1 means "don’t know the age")
cin >> first_name >> age; // read a string followed by an integer
double age_in_months = age * 12; // calculate age in months
cout << "Hello, " << first_name << " (age : " << age_in_months << " months)\n";
}
//you could have also done this by not creating a separate variable and just doing the calculation in the output statement but it's good pracdtice to create a separate variable for clarity and maintainability.