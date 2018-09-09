#include<iostream>
using namespace std;
/*
 Write a program with a function that takes two int parameters, finds the min, then returns the minimum.
 */
int func1( int a, int b ) {
int min;

if (a<b) {
 min = a;  
  }

else { 
min = b; 
  }
return min;
  }
/*
 Goal is the same as above, but this time, the function that finds the minimum  of    the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
 */

void func2( int a, int b, int &c ) {
     c = func1(a, b);
     //return min; 
       }
/*
 The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
   */

int main() {
int a, b, c, min;

    cout << "enter two numbers : ";
     cin >> a >>b;
 
     c = func1(a, b);//y=f(x)
      cout << c <<endl;

      func2(a, b, min);//y=f(x)
      cout << min <<endl;
      return 0;
        }



