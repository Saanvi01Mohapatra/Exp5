//name:saanvi mohapatra
//23070123110
//entc b2 
#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2;
            } else {
                cout << "Error.";
            }
            break;
        default:
            cout << "Error: Invalid.";
            break;
    }

    return 0;
}
//PS C:\Users\asus\Desktop\cds> cd "c:\Users\asus\Desktop\cds\" ; if ($?) { g++ calculator.cpp -o calculator } ; if ($?) { .\calculator }
//Enter operator (+, -, *, /): *
//Enter two numbers: 5
//6
//Result: 30