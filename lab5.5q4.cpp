#include<iostream>
using namespace std;
int main() {
int n=5;
//do the following for 5 times
for(int i=0;i<n;i++)
{
for(int j=0;j<n-i;j++)//print j-1 spaces
cout<< " ";
for(int j=0;j<n;j++)//print j stars
cout << "*";
cout <<endl;//go to the next line
  }
return 0;
  }
