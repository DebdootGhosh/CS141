//uppercase and lowercase

 #include<iostream>
 using namespace std;
 // ask user to enter the characters
 //call the functions
 //character as arguement
 // tell the result to user
 // write a function toupper() that returns the uppercase of the inputChar received. Use call-by-value.
 void toUpper(char a)

             {

        cout<<"Enter a character in lowercase:";
        cin>>a;
        a=a-32;
        cout<<"Entered character in uppercase:"<<a<<endl;

          }

 void toLower(char a)
              {

         cout<<"enter a character in uppercase:";
         cin>>a;
         a=a+32;
         cout<<"entered character in lowercase:"<<a<<endl;
             }



         int main()
             {

      // call by value
      
                          int a;
                          toLower(a);
                          toUpper(a);

     //  get the sum
                       return 0;

                         }

















































































'
