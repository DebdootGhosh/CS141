#include<iostream>
using namespace std;
int sum(int n) {
    if (n%2==1) { 
        if(n==1) return 1;
        return n+sum(n-2);
  }
     if (n%2==0) {
     if (n==1) return 0;
     return (n-1)+sum(n-3);
  }
}
int main () {
  cout<<sum(11)<<endl;
  }
        
