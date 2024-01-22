//
//  main.cpp
//  Mod3Lab1
//  Creating an Envelope Label
//
//  Created by Claire Dano on 9/13/22.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // create variables
    string fullName;
    string roadName;
    string cityName;
    string stateName;
    string zipCode;
    
    //ask user for info
    cout << "Please Enter Your Full Name: " << endl;
    getline(cin, fullName);
    cout << "Please Enter the Number and Road Name You Live On:" << endl;
    getline(cin, roadName);
    cout << "Please Enter the City You Live in:" << endl;
    getline(cin, cityName);
    cout << "Please Enter the State You Live in:" << endl;
    getline(cin, stateName);
    cout << "Please Enter the Zipcode:" << endl;
    getline(cin, zipCode);
    
    // creating the label
    cout << "\nYour Mailing Label: \n";
    cout << fullName << endl;
    cout << roadName << endl;
    cout << cityName << ", " << stateName << ", " << zipCode << endl;
    
    return 0;
}
