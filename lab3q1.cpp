// include library
# include <iostream>
using namespace std;
//main function
int main() {
int sizeint; // declaration
sizeint = sizeof (int); // initialization
cout << "the size of integer is " << sizeint << endl; // prints on terminal
int sizefloat;
sizefloat = sizeof (float);
cout << "the size of float is " << sizefloat << " bytes" << endl;
int sizedouble;
sizedouble = sizeof (double);
cout << "the size of double is " << sizedouble << " bytes" << endl;
int sizechar;
sizechar = sizeof (char);
cout << "the size of character is " << sizechar << " bytes" << endl;
int sizeboolean;
sizeboolean = sizeof (bool);
cout << "the size of boolean is " << sizeboolean << " bytes" <<endl;
return 0;
}
