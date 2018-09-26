#include<iostream>
using namespace std;
//Tax Rate Calculation using Functions 

//Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
void func1(int &unitCst, int &units, int &taxRt){
     // obtains from the user unitCst, units, and taxRt
     // cout, cin
     cin >> unitCst >> units >> taxRt;
     //returns avalue for unitCst, units, and taxRt to the calling module.
  }

//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.

void func2(int unitCst, int units, int taxRt, int &salesTx, int &totDue){
     salesTx = unitCst*units*taxRt/100;
     totDue = unitCst*units+salesTx;
   }

//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.

void func3(int unitCst, int units, int taxRt, int salesTx, int totDue){
     // cout all of them
     cout << unitCst<<endl;
     cout << units<<endl;
     cout << taxRt<<endl;
     cout << salesTx<<endl;
     cout << totDue<<endl;
  }

//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.


int main(){
     // declare unitCost, unitPurch, taxRt
     int unitCost, unitPurch, taxRt, salesTx, totDue;
     func1( unitCost, unitPurch, taxRt);
     // values of unitCost, unitsPurch, taxRt
     func2(unitCost, unitPurch, taxRt, salesTx, totDue);
     // values of salesTx, totDue
     func3(unitCost, unitPurch, taxRt, salesTx, totDue);
  }


