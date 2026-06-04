// 28_CW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Scanner.h"
using namespace std;

int main()
{
    Scanner scannerA;
    string user;
    cout << "Input filename: ";
    cin >> user;

    scannerA.scanFile(user);
    cout << "Result: " << scannerA.getText();



    return 0;
}


