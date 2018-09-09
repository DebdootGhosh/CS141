#include<iostream>
using namespace std;
/*
Q5: write a prog, with a func that takes 2 int param, adds them together and returns the sum
*/
int func1(int a, int b){
    int sum = a + b;
    return sum;
    }
 /* 
 write a prog with a function that takes two int param, finds the maximum, then returns the maximum 
   */
int func2(int a, int b ) {
int maximum;
  if ( a>b) {
   maximum = a;
    } 
  else {
     maximum = b;
    }
  return maximum;  }
   /*
 Write a program with a function that takes two int parameters, finds the min, then returns the minimum.
 */
int func3( int a, int b ) {
int min;

if (a<b) {
 min = a;  
  }

else { 
min = b; 
  }
return min;
  }
// Goal is same, but func should be void, takes a 3rd param passed by ref, and puts the sum in that.

void func4(int a, int b, int &c){
     c = func1(a,b);
     //return sum;
  }
//Goal is the same as above, but this time, the function that finds the maximum should be void and takes a 3rd , pass by reference param, then puts maximum in that
  
 void func5(int a, int b, int & c ) {
  c = func2(a, b);
   //return maximum;
   }
/*
 Goal is the same as above, but this time, the function that finds the minimum  of    the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
 */

void func6( int a, int b, int &c ) {
     c = func3(a, b);
     //return min; 
       }
int main() {
    int a, b, c, total,maximum,min;
    cout << "enter 2 numbers : ";
     cin >> a >> b;
 
     c = func1(a,b); // y = f(x)
     cout << c << endl;
   
     func4(a,b,total); // f(x)
      cout << total << endl;
      c = func2(a, b); // y=f(x)
      cout << c << endl;

    func5(a, b, maximum); // y= f(x)
     cout << maximum << endl;
      c = func3(a, b);//y=f(x)
      cout << c <<endl;

      func6(a, b, min);//y=f(x)
      cout << min <<endl;
      return 0;
       }
