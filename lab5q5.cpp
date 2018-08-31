#include<iostream>
using namespace std;
int main() {
int number;
cout << " check the number is even or odd :" << number;
cout << " Enter the number :" << number;
cin >> number;
if ((number % 2 == 0 )) {
    cout << "The number is even : " << number; }
else { 
    cout << " The number is odd : " << number; }
return 0;
}
