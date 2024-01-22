//
//  main.cpp
//  Mod3Lab2
//
//  Created by Claire Dano on 9/13/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    // naming variables
    string nameMonth;
    float electricBillAmount;
    float rentAmount;
    float waterBillAmount;
    float monthlyExpenses;
    
    // sets the decimal percision to be used to format floating-point values on output ops
    cout << fixed << showpoint << setprecision(2);
    
    //collecting the data/information
    //prompt user for month
    cout << "Please Enter the Month: " << endl;
    getline(cin,nameMonth);
    
    //prompt user for electric bill amount
    cout << "Please Enter the Electric Bill Amount" << endl;
    cin >> electricBillAmount;
    
    //prompt user for rent amount
    cout << "Please Enter the Rent Amount" << endl;
    cin >> rentAmount;
    
    //prompt user for water bill amount
    cout << "Please Enter the Water Bill Amount" << endl;
    cin >> waterBillAmount;
    
    //identify and display each expense
    cout << "\n\n*****************************************" << endl;
    cout << "\nYour " << nameMonth << " Expenses Report:" << endl;
    cout << setfill ('.') << left  << "\nElectric Bill: "  << right << setw(19)
         << " $" << setw(1) << electricBillAmount << endl;
    cout << setfill('.') << left << "Water Bill: " << right << setw(22) << " $" << setw(1)
         << waterBillAmount << endl;
    cout << setfill ('.') << left << "Rent Bill: "  << right << setw(23) << " $" << setw(1) << rentAmount  << endl;
    cout << "\n-----------------------------------------" << endl;
    
    //calculate monthly expenses for gross amount
    monthlyExpenses = (electricBillAmount + rentAmount + waterBillAmount);
    
    //output of gross amount
    cout << setfill ('.') << left << "\nYour Total Expenses for \nthe month of " << nameMonth << ": " << setw(10) << right << " $" << setw(1) << monthlyExpenses << endl;
    cout << "\n*****************************************" << endl;
    return 0;
}

