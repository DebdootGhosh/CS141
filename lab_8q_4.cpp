#include<iostream>
using namespace std;

int smallest( int values[], int n)
   {  int i,j;
  for(i=0;i<n-1;i++)
  {
  for(j=i+1;j<=n;j++)
  {int m;
  if (values[i]>values[j])
  { 
  m = values[i];
  values[i]=values[j];
  values[j]=m;
     }
   }
 }
   return values[0];
    }
 

int largest( int values[], int n)
 
 {  int i,j;
  for(i=0;i<n-1;i++)
  {
  for(j=i+1;j<=n;j++)
  {int m;
  if (values[i]>values[j])
  { 
  m = values[i];
  values[i]=values[j];
  values[j]=m;
     }
   }
 }
   return values[n-1];
    }



int main()
 {
   int a[5] = {1,2,3,4,5},b[5]={6,7,8,9,10},values[10],i;
  
   cout<<"Elements of Array After Merge: "<< values[10]<<endl;
   for(i=0;i<5;i++)
   {
    values[i]=a[i];
    values[i+5]=b[i];
   }
   for(i=0;i<10;i++)
   {
   cout<<values[i];
    }
   
  cout<<"largest element of the merge array "<<largest(values, 10)<<endl;
  cout<<"smallest element of the merge array"<<smallest(values, 10)<<endl;
   return 0;
 }
