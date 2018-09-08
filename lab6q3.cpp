#include<iostream>
using namespace std;
/* 
Q3 write a prog with a function that takes two int param, finds the maximum, then returns the maximum 
   */
int func1(int a, int b ) {
int maximum;
  if ( a>b) {
   maximum = a;
    } 
  else {
     maximum = b;
    }
  return maximum;
   }
//Goal is the same as above, but this time, the function that finds the maximum should be void and takes a 3rd , pass by reference param, then puts maximum in that
  
 void func2(int a, int b, int & c ) {
  c = func1(a, b);
   //return maximum;
   }

/* the prog should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum
 */

int main() {
int a, b, c, maximum;
   cout <<" enter two numbers : ";
   cin >> a >> b;

    c = func1(a, b); // y=f(x)
    cout << c << endl;

    func2(a, b, maximum); // y= f(x)
     cout << maximum << endl;

     return 0; 
   }
