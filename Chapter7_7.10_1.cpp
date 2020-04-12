// Chapter7_7.10_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int Numerator = 0;
    int Denominator = 0;
    int Mixed = 0;
    int Remainder = 0;

    cout << "Input Numerator of Fraction: ";
    cin >> Numerator;

    cout << "Input Denominator of Fraction: ";
    cin >> Denominator;
    
    cout << endl;
    
    Mixed = Numerator / Denominator;
    Remainder = (abs(Numerator)) % (abs(Denominator));

   

    if (Denominator == 0)
    {
        cout << "Can not be divided by zero.";
    }

    else if (abs(Numerator) == abs(Denominator))
    {
        cout << "The fraction is: " << Numerator / Denominator << endl;
    }

    else if ((abs(Numerator) < abs(Denominator)) && (Numerator > 0) && (Denominator > 0))
    {
        cout << "The Fraction is: " << Numerator << "/" << Denominator << endl;
    }

    else if ((abs(Numerator) < abs(Denominator)) && ((Numerator > 0) || (Denominator > 0))) 
    {
        cout << "The Fraction is: -" << abs(Numerator) << "/" << abs(Denominator) << endl;
    }
    
    else if ((abs(Numerator) > abs(Denominator)) && Remainder == 0) 
    {
        cout << "The Fraction is: " << Mixed << endl;
    }
   
    else if ((abs(Numerator) > abs(Denominator)) && Remainder != 0) 
    {
    cout << "The Fraction is: " << Mixed << " " << Remainder << "/" << Denominator << endl;
    }

    return 0;
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
