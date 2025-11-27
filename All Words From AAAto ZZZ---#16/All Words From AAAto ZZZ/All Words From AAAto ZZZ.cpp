// All Words From AAAto ZZZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void PrintAllFromAAAtoZZZ() {
    cout << "\n";
    string word = "";
    for (int i = 65;i <= 90;i++)
    {
        for (int j = 65;j <= 90;j++)
        {
            for (int k = 65; k <= 90; k++) {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                cout << word << endl;
                word = "";
            }

        }
    }
}
int main()
{
    
    PrintAllFromAAAtoZZZ();
}

