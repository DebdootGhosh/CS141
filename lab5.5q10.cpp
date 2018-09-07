#include<iostream>
using namespace std;
int main() {
int n=5;
     for(int i=0;i<5;i++)//do the following for 5 times
{
      for(int j=0;j<n-(i+1);j++)//print stars
{
            cout<<"*"; }
    cout<<endl;//go to the next line
  }
   return 0;
  }
