#include<iostream>
using namespace std;
int main() {
int number;
cout << " check whether the number is divisible by 5 and 11 or not : " << number;
cin >> number;
if ( (number % 5 == 0) && (number % 11 == 0) )
      cout << " the number is divisible by 5 and 11 : " << number;
else
     cout << " the number is not divisible by 5 and 11 : " << number;
return 0; 
}
