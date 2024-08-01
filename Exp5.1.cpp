//NAME: Saanvi Mohapatra
//PRN: 23070123110
//Exp-5
//Program-5.1
#include <iostream>
using namespace std;
int main() {
    char operation;
    double num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Error! Operator is not correct." << endl;
            break;
    }
    return 0;
}



