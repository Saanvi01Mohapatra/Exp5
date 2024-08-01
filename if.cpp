//name:saanvi mohapatra
//23070123110
//entc b2 
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
//PS C:\Users\asus\Desktop\cds> cd "c:\Users\asus\Desktop\cds\" ; if ($?) { g++ if.cpp -o if } ; if ($?) { .\if }
//output:
//Enter value for a: 5
//Enter value for b: 6
// a is less than b