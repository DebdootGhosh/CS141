
// Simple C++ program to find k'th smallest element 
#include<iostream> 

using namespace std;  
  
// Function to return k'th smallest element in a given array 
int kthSmallest(int arr[], int n, int k) 
{ 
  int i,j;
  for(i=0;i<n-1;i++)
  {
  for(j=i+1;j<=n;j++)
  {int m;
  if (arr[i]>arr[j])
  { 
  m = arr[i];
  arr[i]=arr[j];
  arr[j]=m;
     }
   }
 }
  return arr[k-1]; 
 }

 int kthlargest(int arr[], int n, int k) 
  { 
    int i,j;
   for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<=n;j++)
  {int m;
   if (arr[i]<arr[j])
  { 
  m = arr[i];
  arr[i]=arr[j];
  arr[j]=m;
      }
    }
  }
  return arr[k];
  }
  
// Driver program to test above methods 
int main() 
{ 
    int arr[] = {12, 3, 5, 7, 19}; 
    int n = sizeof(arr)/sizeof(arr[0]), k = 2; 
    cout << "K'th smallest element is " <<  kthSmallest(arr, n, k) <<endl;
     cout << "K'th largest element is " <<  kthlargest(arr, n, k);
    
    return 0; 
} 

