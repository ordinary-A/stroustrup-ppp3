// This program outputs the message "Hello, World!" to the monitor

/* import std; //  you might notice that this was the line used by stroustrup in his book,
  It is a feature of the C++23 standard, but it is not widely implemented yet.  So we will use the more traditional #include <iostream> instead.
  also notice how i used this way of commenting instead of the traditional // on every line, much better and cleaner for multi line comments like this */
#include <iostream> 

int main() // C++ programs start by executing the function main
{

    std::cout << "Hello, World!\n"; // output "Hello, World!"
    return 0; // this is optional as mentioned by stroustrup, try commenting it out! although note that it is good practice to include it.
}