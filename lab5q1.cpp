#include<iostream>
using namespace std;
int main() {
int a, b, maximum;
cout << " Enter two numbers : ";
cin >> a >> b;
if (a > b )
{ 
   maximum = a; 
}
else {
      maximum = b;
}
cout << " The maximum of two numbers is : " << maximum;
return 0;
}

