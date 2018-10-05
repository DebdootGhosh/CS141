#include<iostream>
using namespace std;
void print(int i, int n)
   {//print stopping condition
    if (i>n) {
   } 
    else {
    //print number
    cout<<i<<endl;
   //increase by 1
   i++;
  // repeat by recursion
  print(i, n);
}
}

int main(){
    print(1, 10);   
    }



































  
