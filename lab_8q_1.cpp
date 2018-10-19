#include <iostream>
 
using namespace std;
 
int myFunc(int arr[], int arrSize)
{
    int sum = 0;
 
    for(int i = 0; i < arrSize; i++)
    {
        sum = sum + arr[i];
    }
 
    return sum;
}
 
// Enters the program
int main()
{
    // Creates an array of 5 integers
    int arr[5] = {2, 5, 8, 4, 5};
    int x = 0;
 
    x = myFunc(arr, 5);
 
    cout << x;
 
    // Exits the program
    return 0;
}
