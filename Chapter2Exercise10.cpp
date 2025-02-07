/*

file name:Chapter2exercise10.cpp
GitHub URL: https://github.com/Yaqoob7803/Chapter2Exercise10/edit/main/Chapter2Exercise10.cpp#L4C10
programmer:Yaqoob Nagi
Date:February 2025
Requirements:

Miles per Gallon
A car holds 15 gallons of gasoline and can travel 375 miles before refueling.
Write a program that calculates the number of miles per gallon the car gets. 
Display the result on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG - Miles Driven/Gallons of Gas Used
*/
#include <iostream>
using namespace std;


int main()
{
    double gallons;
    double miles;

    cout << "Gallons used: ";
    cin >> gallons;

    cout << "Miles driven: ";
    cin >> miles;

    cout << "Miles per Gallon: " << miles / gallons << endl;
    

    return 0;
}
