// Min Of Random Array=---#25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int RandomNumber(int From, int To)
{
    int randomNum = rand() % (To - From + 1) + From;

    return randomNum;
}

void FillArrayWithRandomNumbers(int arr[100],int& arrlength)
{
    cout << "\nEnter number of element\n";
    cin >> arrlength;


    for (int i = 0;i < arrlength;i++)

        arr[i] = RandomNumber(1, 100);

}


void PrintArray(int arr[100],int arrLength)
{
    for (int i = 0; i < arrLength;i++)
        cout << arr[i] << " ";


}


int MinNumberInArray(int arr[100], int arrLength)
{
    int Min = arr[0];
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;  

}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100];   
    int arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);
    

    cout << "\nMin Number is : ";
    cout << MinNumberInArray(arr, arrLength) << endl;

    return 0;
}

