#include<iostream>
using namespace std;
int main() {
float day, week, month, year;
cout << " convert the days into years, months, weeks and days :\n";
cout << " Enter the time in day : ";
cin >> day;
week = day / 7;
month = day / 30;
year = day / 365;
cout << " The time in year : " << year << endl;
cout << " The time in month : " << month << endl;
cout << " The time in week : " << week << endl;
cout << endl;
return 0;
}
