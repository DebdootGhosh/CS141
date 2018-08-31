#include<iostream>
using namespace std;
int main() {
cout << " print all alphabets from a to z ";
int i = int('a');
while ( (i <= int ('z')) &&  (i >= int ('a') ) ) {
        cout << char(i) << endl;
         i +=1;
}
return 0;
}
