//write the program with a function that takes two int parameters and print sum of all even num between them, sum of all odd num between them and sum their squares sum also

#include<iostream>
using namespace std;
// ask for two numbers
 
int ask(int x, int y)
{

    cout <<"enter first num :"<<endl;
    cout <<"enter second num :"<<endl;
    
  }
  int  sumEvennum (int firstnum, int secondnum, int sumEven)

 {     

    //declear a variable named sum which has initial value zero
     sumEven=0;
     int z=firstnum;
     //put condition to check whether num is even or odd
     if (firstnum %2==0)
     {
           z=z+2;
           //use loop to find sum
           while(z<secondnum)
           {

                 sumEven=sumEven+z;
                 z=z+2;
            }
            cout<<"sumEven:"<<sumEven<<endl;
         }
    else 
     {
           z=z+1;
           //use loop to find sum
           while(z<secondnum)
           {

                 sumEven=sumEven+z;
                 z=z+2;
            }
            cout<<"sumEven:"<<sumEven<<endl;
         }

  }
   
    int sumoddnum (int firstnum, int secondnum,int sumodd)
    {
    
 
      //declear a variable named sum which has initial value zero
     sumodd=0;
     int z=firstnum;
     //put condition to check whether num is even or odd
     if (firstnum %2==0)
     {
           z=z+1;
           //use loop to find sum
           while(z<secondnum)
           {

                 sumodd=sumodd+z;
                 z=z+2;
            }
            cout<<"sumodd:"<<sumodd<<endl;
         }
    else 
     {
           z=z+2;
           //use loop to find sum
           while(z<secondnum)
           {

                 sumodd=sumodd+z;
                 z=z+2;
            }
            cout<<"sumodd:"<<sumodd<<endl;
         }

  }
   
  
 
 int sumsquareEvennum (int firstnum, int secondnum, int sumsquareEven)

 {     

    //declear a variable named sum which has initial value zero
     sumsquareEven=0;
     int z=firstnum;
     //put condition to check whether num is even or odd
     if (firstnum %2==0)
     {
           z=z+2;
           //use loop to find sum
           while(z<secondnum)
           {

                 sumsquareEven=sumsquareEven+(z*z);
                 z=z+2;
            }
            cout<<"sumsquareEven:"<<sumsquareEven<<endl;
         }
    else 
     {
           z=z+1;
           //use loop to find sum
           while(z<secondnum)
           {

                 sumsquareEven=sumsquareEven+(z*z);
                 z=z+2;
            }
            cout<<"sumsquareEven:"<<sumsquareEven<<endl;
         }

  }
   
    int sumsquareoddnum (int firstnum, int secondnum,int sumsquareodd)
    {
    
 
      //declear a variable named sum which has initial value zero
     sumsquareodd=0;
     int z=firstnum;
     //put condition to check whether num is even or odd
     if (firstnum %2==0)
     {
           z=z+1;
           //use loop to find sum
           while(z<secondnum)
           {

                 sumsquareodd=sumsquareodd+(z*z);
                 z=z+2;
            }
            cout<<"sumsquareodd:"<<sumsquareodd<<endl;
         }
    else 
     {
           z=z+2;
           //use loop to find sum
           while(z<secondnum)
           {

                 sumsquareodd=sumsquareodd+(z*z);
                 z=z+2;
            }
            cout<<"sumsquareodd:"<<sumsquareodd<<endl;
         }

  }
  


  int main()
  {

      int x,y,sumEven,sumodd,sumsquareEven,sumsquareodd;
      ask(x,y);
      cin>>x;
      cin>>y;
      //call by value
      sumEvennum(x,y,sumEven);
      sumoddnum(x,y,sumodd);
       sumsquareEvennum(x,y,sumsquareEven);
      sumsquareoddnum(x,y,sumsquareodd);
      return 0;
      }

