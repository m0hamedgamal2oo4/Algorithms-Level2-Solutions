// numper pattern----#13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int ReadPositiveNumber(string Message) {
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;


	} while (Number <= 0);
	return Number;
}

void PrintNumberPattern(int num)
{
	for (int i = 1;i <=num;i++) {
		for (int j = 1;j <= i;j++) {
			cout <<i;
		}
		cout << "\n";
	}
}

int main()

{
	PrintNumberPattern(ReadPositiveNumber("Please enter a positive number?"));


}
