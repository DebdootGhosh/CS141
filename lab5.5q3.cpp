#include<iostream>
using namespace std;
int main() {
int n=5;
 //do the following 5 times
for(int i=0; i<n; i++)
{
for (int j=0;j<i;j++)//print i spaces
{
cout<<" ";}
for(int j=0;j<n;j++)
cout<<"*";
cout << endl;
}
//go to the next line
return 0;  }
