// 28_CW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Scanner.h"
#include "Printer.h"
#include "Xerox.h"
#define mode 3

using namespace std;

int main()
{
#if mode == 1
    Scanner scannerA;
    string user;
    cout << "Input filename: ";
    cin >> user;

    scannerA.scanFile(user);
    cout << "Result: " << scannerA.getText();

#elif mode == 2
    Printer::printFile("Hello world!", "my.txt", 2);
#elif mode == 3
    Xerox One;
    string user;
    cout << "Input filename: ";
    cin >> user;
    int a = 0;
    cout << "Amount of copies: ";
    cin >> a;
    One.copyFile(user, a);
#endif


    return 0;
}


