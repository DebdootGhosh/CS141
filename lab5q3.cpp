#include<iostream>
using namespace std;
int main() {
float num;
cout << " check whether the number is positive, negative or zero : " << num;
cin >> num;
if ( num > 0 )
    cout << " The number is positive : " << num;
else if ( num < 0 )
        cout << " The number is negative : " << num;
else 
    cout << " The number is zero : " << num;
return 0;
}
