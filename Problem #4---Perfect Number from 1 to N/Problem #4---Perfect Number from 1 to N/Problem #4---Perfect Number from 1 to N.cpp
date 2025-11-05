// Problem #4---Perfect Number from 1 to N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>     
using namespace std; 

int ReadPostiveNumber(string Message)
{
    int num = 0;
    do {
        cout << Message << endl;
        cin >> num;

    } while (num <= 0);
    return num;
}

bool isPerfectNumper(int num) {
    int sum = 0;
    for (int i = 1;i < num;i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
    for (int i = 1;i <= Number;i++) {
        if (isPerfectNumper(i))
            cout << i << endl;
    }
}
int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPostiveNumber("Please enter a positive number?"));
}

