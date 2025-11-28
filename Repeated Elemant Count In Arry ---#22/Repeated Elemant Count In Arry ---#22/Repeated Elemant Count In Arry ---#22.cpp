// Repeated Elemant Count In Arry ---#22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



void ReadArry(int arr[100], int& length)
{
    cout << "\n Enter Number of Elements \n";
    cin >> length;
    cout << "Enter Array Element:\n";
    for (int i = 0;i < length;i++)
    {
        cout << "Arry[" << i + 1 << "]:";
        cin >> arr[i];
    }
 
}



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


void PrintArray(int arr[100], int arrlength)
{
    for (int i = 0;i < arrlength;i++) {
        cout << arr[i] << " ";
        
    }

}

int TimesRepeated(int num,int arr[100],int lenght){

    int count = 0;
    for (int i = 0;i < lenght;i++)
    {
        if (num == arr[i]) {
            count++;
        }
      
    }
  return count;
}

int main()
{
    int arr[100], arrLength;
    int NumberToCheck;
    
    ReadArry(arr, arrLength);

    

    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");
    cout << "Oreginel arry is: ";PrintArray(arr, arrLength);
    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";

    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";


}

