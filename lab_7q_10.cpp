#include<iostream>
using namespace std;
int fibo(int n);
  int main()  {
   int n, result;
   
  cout<<"enter n of the fibonacci series:";
   cin>>n;
   if(n<0)
    {
       cout<<"fibonacci of negetive number is not possible.";
      }


    else 
      {
         result = fibo(n);
         cout <<"the nth number of the fibonacci series is :"<<fibo(n);
           }
     return 0;
     }
int fibo(int n) 
   {
     if (n==0)
       {
     return 0;
   }
     else if ( n==1)
      {
       return 1;
        }
      else    
       {
     return (fibo(n-1)+fibo(n-2));
       }
    }
