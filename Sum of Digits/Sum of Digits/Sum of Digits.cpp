// Sum of Digits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0; 

    do
    {
        cout << Message << endl; 
        cin >> Number;           
    } while (Number <= 0);       

    return Number;
}

int  SumOfDigits(int Number)
{
    int sum = 0;
    int Remainder = 0;

    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        sum += Remainder;
    }
    return sum;
}

int main()
{
    cout << "\nSum Of Digits = "
        << SumOfDigits(ReadPositiveNumber("Please enter a positive number?"))
        << "\n";
    return 0;
}

