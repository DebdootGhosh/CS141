#include<iostream>
using namespace std;
int main() {
int n, sum;
cout << "find sum of all natural numbers between 1 to n : ";
cin >> n;
int i=1;
  while( i <= n ) {
        
       sum = sum + i;
        i++;
  }
	cout<<"The final sum is:"<<sum<<endl;
    return 0;
    }

