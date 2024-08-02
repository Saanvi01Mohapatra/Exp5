# EXPERIMENT 5
## AIM: 
To study and implement C++ decision making statements


# Theory

C++ decision making statements

### if Statement



### if...else Statement

The if...else statement allows the program to execute one block of code if the condition is true, and a different block of code if the condition is false.

### if...else if...else Statement

The if...else if...else statement is used to test multiple conditions. It allows the program to execute different blocks of code based on which condition is true. Only the block of the first true condition is executed.

### Nested if Statements

Nested if statements are if statements within another if or else block. They allow the program to test multiple conditions in a hierarchical manner.

### switch Statement

The switch statement evaluates an expression and executes a block of code corresponding to the value of the expression. It allows for a more readable way to compare a variable against multiple values. Each value is called a "case", and the switch statement can have an optional default case to execute if none of the cases match.
### CODE 1:
The if statement evaluates a condition. If the condition is true, a block of code is executed.


```
//Saanvi Mohapatra
//23070123110
//ENTC B2
#include<iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter value for a: ";
    cin >> a;
    
    cout << "Enter value for b: ";
    cin >> b;
    
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else if (a < b) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is equal to b" << endl;
    }
    
    return 0;
}
```

## output:
```//Enter value for a: 5
//Enter value for b: 6
// a is less than b
```

### CODE 2:

```
//Saanvi Mohapatra
//23070123110
//entc b2 
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {
int month;
cout << "enter number for month  ";
cin >> month;
switch (month) {
    case 1:
            cout << "January";
            break;
    case 2:
            cout << "February";
            break;
    case 3:
            cout << "March";
            break;
    case 4:
            cout << "April";
            break;
    case 5:
            cout << "May";
            break;
    case 6:
            cout << "June";
            break;
    case 7:
            cout << "July";
            break;
    case 8:
            cout << "August";
            break;
    case 9:
            cout << "September";
            break;
    case 10:
            cout << "October";
            break;
    case 11:
            cout << "November";
            break;
    case 12:
            cout << "December";
            break;
    default:
            cout << "Invalid input."_;
            break;
}
return 0;
}
```
## Output:
```
enter number for month  5
May
```
### CODE 3:
```
//Saanvi Mohapatra
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
```
## Output:
```
Enter operator (+, -, *, /): *
Enter two numbers: 5
6
Result: 30
```
### CODE 4:
```
//Saanvi Mohapatra
//23070123110
//entc b2 
#include <iostream>
using namespace std;


int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
switch (number) 
{
    case 0:
        cout << "The number is zero." << endl;
         break;
     default:
        if (number > 0) {
            cout << "The number is positive." << endl;
         } else {
            cout << "The number is negative." << endl;
        }
        break;
 }

 return 0;
}
```
## Output:
```
Enter a number: 5
The number is positive.
```
## CODE 5:
```
//Saanvi Mohapatra
//23070123110
//entc b2 
#include <iostream>
using namespace std;

int main() {
    int m2,cds;
    
    cout << "Enter the score for m2: ";
    cin >> m2;
    cout << "Enter the score for cds: ";
    cin >> cds;
    if (m2 >= 45) {
       if (cds >= 45) {
        cout << "Pass in both " << endl;
        } 

        else {
            cout << "Pass in m2 but fail in cds." << endl;
        }
    } else {
       
        if (cds >= 45) {
            cout << "Fail in M2 but pass in cds" << endl;
        } else {
            cout << "Fail in all" << endl;
        }
    }

    return 0;
}
```
## Output:
```
Enter the score for m2: 25
Enter the score for cds: 45
Fail in M2 but pass in cds
```
