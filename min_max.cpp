/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    const int SENTINEL = -99;

    int number = 0;
    int largest = 0;
    int smallest = 0;
    int count = 0; 

    cout << "Enter integers, one at a time. Enter " << SENTINEL << " to stop." << endl;

    cout << "Enter a value: ";
    cin >> number;

    while (number != SENTINEL)
    {
        if (count == 0)
        {
            largest = number;
            smallest = number;
        }
        else
        {
            if (number > largest)
            {
                largest = number;
            }
            if (number < smallest)
            {
                smallest = number;
            }
        }
        count++;

        cout << "Enter a value: ";
        cin >> number;
    }

    if (count == 0)
    {
        cout << "No data values were entered." << endl;
    }
    else
    {
        cout << "Largest value: " << largest << endl;
        cout << "Smallest value: " << smallest << endl;
    }

    return 0;
}