#include "PPPheaders.h"

int main()
{
    double d = 0;
        while (cin>>d) { // repeat the statements below as long as we type in numbers
                int i = d; // tr y to squeeze a floating-point value into an integer value
                char c = i; // tr y to squeeze an integer into a char
                cout << "d==" << d // the original double
                << " i=="<< i // double converted to int
                << " c==" << c // int value of char
                << " char(" << c << ")\n"; // the char
                    }
}
//again, not a drill but it's a good example to help you understand the concept of narrowing and how to use the narrow() function to avoid it.