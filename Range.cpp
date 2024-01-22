//
//  main.cpp
//  Mod5Lab1
//
//  Created by Claire Dano on 10/13/22.
//
// Write a program that prompts the user to enter two integers. The program outputs how many numbers are multiples of 3 and how many numbers are multiples of 5 between the two integers (inclusive)


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    //create some variables
    int lowerNumber = 0;
    int upperNumber = 0;
    int countMultipleThree = 0;
    int countMultipleFive = 0;
    int currentCounter = 1;

    
    //Input:
    //Lower number
    cout << "Please Enter the Lower Range: " << endl;
    cin >> lowerNumber;
    //Upper number
    cout << "PLease Enter the Upper range:" << endl;
    cin >> upperNumber;
    
    
    //Process:
    
    //Count of numbers divisible by 3
    while (currentCounter <= upperNumber)
    {
        if (currentCounter % 3 == 0)
        {
            countMultipleThree++;
        }
        if (currentCounter % 5 == 0)
        {
            countMultipleFive++;
        }
        currentCounter++;
    }
    
    //Output:
    //The lower number
    cout << "\n-----------------------------------------------------------------------------" << endl;
    cout << "Lower Range: " << lowerNumber << endl;
    //The upper number
    cout << "Upper Range: "<< upperNumber << endl;
    cout <<"\nResults:" << endl;
    //Count of numbers inclusive between the 2 inputs that are divisible by 3
    cout << "\nCount of Numbers Inclusive between numbers " << lowerNumber << " & " << upperNumber << " that are Divisible by 3: " << countMultipleThree << endl;
    //Count  of numbers inclusive between the 2 inputs that are divisible by 5
    cout << "Count of Numbers Inclusive between numbers " << lowerNumber << " & " << upperNumber << " that are Divisible by 5: " << countMultipleFive << endl;
    cout << "\n-----------------------------------------------------------------------------" << endl;
    return 0;
}
