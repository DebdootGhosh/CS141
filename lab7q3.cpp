#include<iostream>
using namespace std;
int print(int i, int n) {//stopping condition
    if(i>n) {
    }
   else {//print odd numbers
   if (i%2==1)
   cout<<i<<endl;
   // increase by 2
  i=i+2;
   // repeat by recursion
   print(i, n);
     

    
  }
 }
 int main() {
  print(1, 10); 
     }
   
   
   
