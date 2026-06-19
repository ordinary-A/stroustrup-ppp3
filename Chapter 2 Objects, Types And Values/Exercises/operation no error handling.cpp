#include "PPPheaders.h"
int main()
{
    char operation;
    double operand1, operand2;
    cout << "enter an operation followed by two operands: ";
    cin >> operation >> operand1 >> operand2;
    if (operation == '+')
        cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << endl;
    else if (operation == '-')
        cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << endl;
    else if (operation == '*')
        cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << endl;
    else if (operation == '/')
        cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << endl;
}