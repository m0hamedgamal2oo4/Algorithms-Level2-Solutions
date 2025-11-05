// Problem #3---PerfectNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string> 
using namespace std; 

int ReadPositiveNumber(string Message) {
	int Num = 0;
	do
	{
		cout << Message << endl;
		cin >> Num;

	} while (Num <= 0);
	return Num;
}
 bool isPerfectNumber(int Num) {
	 int sum = 0;
	 for (int i = 1;i < Num;i++) {
		 if (Num % i == 0)
			 sum += i;
	 }
	 return Num == sum;
}

 void PrintResult(int num) {
	 if(isPerfectNumber(num))
		 cout << num << " Is Perfect Number.\n";  
	 else
		 cout << num << " Is NOT Perfect Number.\n"; 
 } 

int main()
{
	PrintResult(ReadPositiveNumber("Please enter a positive number?"));
}

