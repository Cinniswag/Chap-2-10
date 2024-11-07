// Chap 2 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double const exgal = 15;
double const exmile = 375;

int main()
{
    int mile, gal;
    cout << "If a car holds 15 gallons and can travel 375 miles before refuel, the car is capable of roughly " << exmile / exgal << " miles per gallon." << endl;
    cout << "Enter how many miles the car traveled, then the volume of the tank in gallons." << endl;
    cin >> mile >> gal;
    cout << "If a car holds " << gal << " gallons and can travel " << mile << " miles before refuel, the car is capable of roughly " << mile / gal << " miles per gallon." << endl;
}

