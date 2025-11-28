// Generate Keys---#21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>     
#include <cstdlib>    
#include <ctime>
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
enum enCharType { SmallLrtter=1,CapitalLetter=2,SpecailCharacter=3,Digit=4};

int RandomNumber(int From, int To)
{
	int randomNum = rand() % (To - From + 1) + From;
	return randomNum;
}


char GetRandomChar(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SmallLrtter:
	{
		return char(RandomNumber(97, 122));
		break;
	}

	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}

	case enCharType::SpecailCharacter:
	{
		return char(RandomNumber(33, 47));
		break;
	}

	case enCharType::Digit:
	{
		return char(RandomNumber(48, 57));
		break;
	}

	return '\0';
	}






}

string GenratedWord(enCharType CharType, short length)
{
	string Word;
	for (int i = 1;i <= length;i++)
	{
		Word = Word + GetRandomChar(CharType);
	}
	return Word;
}

string GenerateKey()
{
	string Key = "";

	Key = GenratedWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenratedWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenratedWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenratedWord(enCharType::CapitalLetter, 4);
	return Key;
}

void GenerateKeys(short NumberOfKeys) {
	for (int i = 1;i <= NumberOfKeys;i++)
	{
		cout << "Key[" << i << "]";
		cout << GenerateKey() << endl;
	}

}

int main()

{
	srand((unsigned)time(NULL));

	GenerateKeys(ReadPositiveNumber("Pleaes enter how many keys to generate? \n "));

}

