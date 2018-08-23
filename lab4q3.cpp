#include<iostream>
using namespace std;
int main() {
float celsius, fahrenheit;
cout << " Enter the temperature in fahrenheit : ";
cin >> fahrenheit;
celsius = ( fahrenheit - 32 ) * 5.0 / 9.0;
cout << " The temperature in fahrenheit : " << fahrenheit << endl;
cout << " The temperature in celsius : " << celsius << endl;
return 0;
}
