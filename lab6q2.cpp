#include<iostream>
using namespace std;
/*
Q2: write a prog, with a func that takes 2 int param, adds them together and returns the sum
*/
int func1(int a, int b){
    int sum = a + b;
    return sum;
    }
 
// Goal is same, but func should be void, takes a 3rd param passed by ref, and puts the sum in that.

void func2(int a, int b, int &c){
     c = func1(a,b);
     //return sum;
  }

 
/*
The prog should ask the user for 2 nums, call the func with numbers as arguments and tell user the sum
 */

int main() {
    int a, b, c, total;
    cout << "enter 2 numbers : ";
     cin >> a >> b;

     c = func1(a,b); // y = f(x)
     cout << c << endl;
   
     func2(a,b,total); // f(x)
      cout << total << endl;
      return 0;
       }
