#include <iostream>
using namespace std;

// Recursive C++ program to check if the 

#include <iostream> 
using namespace std; 
  
// recursive function that returns the reverse of digits 
int rev(int n, int temp) 
{ 
    // base case 
    if (n == 0) 
        return temp; 
  
    // stores the reverse of a number 
    temp = (temp * 10) + (n % 10); 
  
    return rev(n / 10, temp); 
} 
  


int main() {
 
  int n;
  int result;
 
   /* Taking input. */

   cout<<"Enter number";
   cin >> n;
 
   /* Called reverse function .*/

   result= rev(n, 0);
 
   cout << "Reverse of a input number is" << result;
 
   return 0;
}



