#include<iostream>
using namespace std;
int sum(int n) {
    if(n ==1) { return 1;
  }
    else {
         return n+sum(n-1);
  }
 }
int main() {
  
   cout<< " sum is :"<<sum( 10);
  }
