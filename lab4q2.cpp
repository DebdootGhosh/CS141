#include<iostream>
using namespace std;
int main() {
float fahrenheit, celsius;
cout << " Enter the temperature in celsius : ";
cin >> celsius;
fahrenheit = ( celsius * 9.0 ) / 5.0 + 32;
cout << " The temperature in celsius " << celsius << endl;
cout << " The temperature in fahrenheit " << fahrenheit << endl;
return 0;
}
