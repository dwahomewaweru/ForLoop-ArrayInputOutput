// Array Input and Output.cpp
//Using for loop to input values in an arrray and output the values in the array.

#include <iostream>
using namespace std;

int main()
{
    int nums[5];
    // Declare an interger array of size five.
    cout << " Input five values to be stored in the Array : \n"; 
    // Prompt user to input five values.

    for (int i = 0; i < 5; i++)
    {
        cin >> nums[i];
    }
     cout <<"The Input values stored in the array are :" << endl;
     // Output values stored in the array 

     for (int j = 0; j < 5; j++) {
         cout << nums[j] << endl;
     }
 
    return 0;
}