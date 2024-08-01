//name:saanvi mohapatra
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
//PS C:\Users\asus\Desktop\cds> cd "c:\Users\asus\Desktop\cds\" ; if ($?) { g++ default.cpp -o default } ; if ($?) { .\default }
//Enter a number: 5
//The number is positive.