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
 

float mean(int values[], int n)
  {
        int sum = 0.0;
        for (int x = 0; x < n; x++)
    {
        sum = sum+values[x];
       
    }
        return sum/n;
   }

float median(int values[],int n)  
   { 
  int i,j;
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
       if (n%2 ==1)
     {  
       return values[n/2];
               }
   else 
{
   return (values[n/2]+values[(n+2)/2])/2; 
      }
   }

  
int mostFrequent(int values[], int n) 
{ 
   
  
    // find the max frequency using linear traversal 
    int max_count = 1; int res = values[0];int curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (values[i] == values[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = values[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
  
    // If last element is most frequent 
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = values[n - 1]; 
    } 
  
    return res; 
 } 
 


int main() 
 { 
    int values[] = {1,3,3,2,4,5}; 
    int n = sizeof(values)/sizeof(values[0]); 
    float sum = sum+values[n];
    cout << " smallest element is " << smallest(values, n) <<endl;
    cout << "largest element is " <<  largest(values, n) <<endl;
    cout << "mean of the array" << mean(values, n) <<endl;
    cout <<" median of the array" << median(values, n)<<endl;
    cout<<" most frequent number"<<mostFrequent( values,n)<<endl; 
    return 0; 
  }




























































































