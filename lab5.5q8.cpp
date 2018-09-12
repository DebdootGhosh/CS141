#include<iostream>
using namespace std;
int main() {
	int n=5;
	//do the following 5 times 
    for(int i=0;i<n ; i++)
	{
		for(int j=0;j<i+1;j++)//print i+1 stars
		{
			cout << " * ";
		}
		cout<<endl;
	}
	//go to the next line
}
