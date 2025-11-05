// Problem #5---PrintDigits in a Reversed Order.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintDigits(int Number)
{
    int Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }

}

int main()
{
    PrintDigits(ReadPositiveNumber("Please enter a positive number?"));

}

