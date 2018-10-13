
// Recursive C++ program to check if the 
// number is palindrome or not 
#include<iostream> 
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
  
// Driver Code 
int main() 
{ 
  
    int n;
    cout<<"enter a number"<<n;
    cin>>n;
      
    int temp = rev(n, 0); 
    
    if (temp == n) 
        cout << "yes" << endl; 
    else
        cout << "no" << endl; 
    return 0; 
} 

