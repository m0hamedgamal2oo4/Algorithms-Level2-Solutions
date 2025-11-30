// Fill Array with random nimbers from 1 too 100---#23.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;

int RandomNumbers(int from, int to)
{
    int randomnum = rand() % (to - from + 1) + from;
    return randomnum;
}

void FullArrayRandoms(int arr[100], int& arrLenght)
{
    cout << "\n inter numbers of elements:\n";
    cin >> arrLenght;

    for (int i = 1;i <= arrLenght;i++) {
        arr[i] = RandomNumbers(1, 100);
    }

}

void PrintArray(int arr[100], int arrLenght) {

    for (int i = 1;i <= arrLenght;i++) {
        cout << arr[i]<<" ";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLenght;
    FullArrayRandoms(arr, arrLenght);
    
    PrintArray(arr, arrLenght);
    
}

