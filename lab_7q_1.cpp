#include<iostream>
using namespace std;
int power (int a, int b);
    int main()
  {   
     int a;
      cout << "enter a " << a <<endl;
      cin>>a;
      int b;
      cout << "enter b"<< b<<endl;
      cin>>b;
      cout<<"result of power "<<power(a, b)<<endl;
             return 0;
             }
     int power(int a,int b)
            {
             if(b==0)
                    return 1;
                    return a*power(a,b-1);
                    }
                 
