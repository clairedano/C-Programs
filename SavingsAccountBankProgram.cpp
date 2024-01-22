//
//  main.cpp
//  Mod6Lab1
//
//  Created by Claire Dano on 10/25/22.
// Program that uses a sum function to find the calculated balance, of intital balance and deposit


#include <iostream>
using namespace std;


   
//protoype our functions
void printHeader();
float sum(float, float);
    
/*
 ********************************
 Our Main Program
 ********************************
 */
    
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>
using namespace std;
int main() {
    
    /*
     ***************************
     Create needed variables
     ***************************
     */
    float initialSavingsBalance;
    float depositAmount;
    float calculatedBalance = 0.0;
    printHeader();
    
//Input:
//Prompt the user for an initial savings account balance
    cout << "Please Enter Your Initial Savings Account Balance: " << endl;
    cin >> initialSavingsBalance;
//Prompt the user for a deposit amount
    cout << "Please Enter the Deposit Amount: " << endl;
    cin >> depositAmount;
    
    
    
//Process:
//Create a function that will take 2 arguments (current balance and deposit amount) and return the calculated balance of the account
    

//Output:
//Program Header (call the function above that you created
    printHeader();
    cout << fixed << showpoint << setprecision(2);
//Beginning Balance
    cout << "\nInital Balance:" << setw(25) << setfill('.') << "$" << initialSavingsBalance << endl;
//Deposit amount
    cout << "Deposit Amount:"<< setw(25) << setfill('.') << "$" << depositAmount << endl;
    cout << "\n-----------------------------------------------" << endl;
//New Balance
    calculatedBalance = sum(initialSavingsBalance, depositAmount);
    cout << "\nNew Balance:" << setw(28) << setfill('.') << "$" << calculatedBalance <<endl;
    cout << "\n***********************************************" << endl;
//Notes - please make sure you format currency to be as follows: $251.00

    return 0;
}
// program void header
void printHeader()
{
    cout << "\n***********************************************" << endl;
    cout << "                 Alamo Bank                   " << endl;
    cout << "***********************************************" << endl;
}
float sum(float pNumOne, float pNumTwo)
{
    float pNumThree;
    pNumThree = pNumOne + pNumTwo;
    return pNumThree;
}

