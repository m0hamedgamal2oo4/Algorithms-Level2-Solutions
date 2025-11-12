

#include <iostream>
#include<string>
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

int reversNumber(int Number) {
    int remander = 0;
    int Number2 = 0;
    while (Number > 0) {
        remander = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + remander;
    }
    return Number2;

}
int main()
{
    cout << "\nReverse is:\n"
        << reversNumber(ReadPositiveNumber("Please enter a positive number?"))
        << "\n";
}

