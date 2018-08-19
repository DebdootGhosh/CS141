// first include the library
# include <iostream>
using namespace std;
//main function
int main()
{
int a,b,sum,substract,product,remainder ; // declaration
float division;
a = 4; // definition
b = 2; // definition
sum = a + b; // adds 2 numbers
substract = a - b; // substract two numbers
product = a * b; // calculates the product
division = a / b; // divides the numbers
remainder = a % b; // finds the remainder
// displaying the calculations in terminal
cout << "numbers are" << a << "," << b << endl;
cout << "results in integer" << endl;
cout << "sum is " << sum << endl;
cout << "difference is " << substract << endl;
cout << "product is " << product << endl;
cout << "quotient is " << division << endl;
cout <<"remainder is " << remainder << endl;
return 0;
}
