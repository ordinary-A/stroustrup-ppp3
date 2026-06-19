#include "PPPheaders.h"
int main()
{
    string operation;
    double operand1, operand2;
    cout << "Enter an operation followed by two operands: ";
    cin >> operation >> operand1 >> operand2;

    if (operation == "+" || operation == "plus")
        cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << "\n";
    else if (operation == "-" || operation == "minus")
        cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << "\n";
    else if (operation == "*" || operation == "mul")
        cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << "\n";
    else if (operation == "/" || operation == "div") {
        if (operand2 != 0)
            cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << "\n";
        else
            cout << "Error: division by zero.\n";
    }
    else
        cout << "Error: unknown operation '" << operation << "'.\n";

    return 0;
}