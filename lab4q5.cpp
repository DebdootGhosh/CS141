#include<iostream>
using namespace std;
int main() {
float angleA, angleB, angleC;
cout << " evaluate angleC of a triangle from two given angleA and angleB :\n";
cout << " input angleA of triangle : " << endl;
cin >> angleA;
cout << " input angleB of triangle : " << endl;
cin >> angleB;
angleC = 180 - ( angleA + angleB );
cout << " angleC is : " << angleC << endl;
cout << endl;
return 0;
}
