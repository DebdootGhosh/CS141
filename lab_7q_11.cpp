#include<iostream>
using namespace std;
int hcf(int a, int b)
   {
     if (b != 0)
        return hcf(b, a%b);
       else 
           return a;
     }

  int main()  {
        int a, b;
        cout<<"enter two positive number a anb b"<<endl;
        cin>> a>>b;


        cout <<"hcf of a and b is :"<< hcf(a, b);
         return 0;
        }
