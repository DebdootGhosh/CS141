// Recursive C++ program to find sum of digits  
// of a number 
#include<iostream>
using namespace std;
  
// Function to check sum of digit using recursion 
int sum (int n) 
{ 
    if (n == 0) 
       return 0; 
    return (n % 10 + sum (n / 10)); 
} 
  
// Driven Program to check above 
int main() 
{ 
   int n = 12315;
   int result = sum (n);
   cout<<"sum of the digit of the number is"<<result;
     return 0;
       }
