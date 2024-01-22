//
//  main.cpp
//  Mod4Lab2
//
//  Created by Claire Dano on 9/27/22.
//  Creating a Program

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    // set up set precision, dealing with money
    cout << fixed << showpoint << setprecision(2) << endl;
    
    //creating variables
    float farmAreaAcres = 0.0;
    string firstVegetable;
    float amountOfAcresFirstVegetable = 0.0;
    float seedCostFirstVegetablePerAcre = 0.0;
    string secondVegetable;
    float amountOfAcresSecondVegetable;
    float seedCostSecondVegetablePerAcre;
    float totalCostOfSeedsFirstVeggie;
    float totalCostOfSeedsSecondVeggie;
    float totalCostOfCrops;
    //Jane bought several acres of farm to grow and sell vegetables. Suppose that Jane wants to grow two types of vegetables. Write a program that prompts Jane to do the following:
    
    //Input:
    
    //Enter the total farm area in acres.
    cout << "Please Enter the Total Farm Area in Acres: " << endl;
    cin >> farmAreaAcres;
    //Enter the name of the first Vegetable
    cout << "What is the first type of vegetable you would like to sell?" << endl;
    cin >> firstVegetable;
    //Enter the number of acres of the the farm land used for the first Vegetable
    cout << "What is the desired number of acres of farm land you would like used for " << firstVegetable << "?"<< endl;
    cin >> amountOfAcresFirstVegetable;
    // Enter the cost of the seed for the first Vegetable per acre
    cout << "What is the cost of the seed for " << firstVegetable << " per acre?" << endl;
    cin >> seedCostFirstVegetablePerAcre;
    //Enter the name of the second Vegetable
    cout << "What is the second Vegetable you would like to sell?" << endl;
    cin >> secondVegetable;
    //Enter the number of acres of the farm land used for the second vegetable
    amountOfAcresSecondVegetable = (farmAreaAcres - amountOfAcresFirstVegetable);
    //Enter the cost of the seed for the second Vegetable per acre
    cout << "What is the cost of the seed for " << secondVegetable << " per acre?" << endl;
    cin >> seedCostSecondVegetablePerAcre;
    
    //Processing:
    
    //Compute the total cost of seeds for the first Vegetable
    totalCostOfSeedsFirstVeggie = ( amountOfAcresFirstVegetable * seedCostFirstVegetablePerAcre);
    //Compute the total cost of seeds for the second Vegetable
    totalCostOfSeedsSecondVeggie = ( amountOfAcresSecondVegetable * seedCostSecondVegetablePerAcre);
    //Compute the cost of seeds for the entire crop


    //Output:
    
    //Name, number of acres, and total cost of first Vegetable
    cout << "\n\n****************************************" << endl;
    cout << "Your Total Farm Land: " << farmAreaAcres << endl;
    cout << setfill(' ') << left << "\n"
    << "First Vegetable: " << firstVegetable
    << "\n Acres Used: " << amountOfAcresFirstVegetable
    << "\n Total Cost: " << "$" <<  totalCostOfSeedsFirstVeggie << endl;
    //Name, number of acres, and total cost of second Vegetable
    cout << setfill(' ') << left << "\n" << "Second Vegetable: " << secondVegetable
    <<  "\n Acres Use: " << amountOfAcresSecondVegetable
    << "\n Total Cost: "  << "$" << totalCostOfSeedsSecondVeggie << endl;
    
    
    //Total cost of crops
    totalCostOfCrops = (totalCostOfSeedsFirstVeggie + totalCostOfSeedsSecondVeggie);
    cout << "\n----------------------------------------" << endl;
    cout << left << setfill(' ') << "\nTotal Cost of Crops: " << "$" << totalCostOfCrops << endl;
    //Tell Jane which Vegetable she will spend the most money on. (the most expensive to grow based on the total Vegetable cost)
   if (totalCostOfSeedsFirstVeggie > totalCostOfSeedsSecondVeggie)
   {
       cout << "\nYou will Spend the Most Money on " << firstVegetable << endl;
   }
    else
    {
        cout << "\nYou will Spend the Most Money on " << secondVegetable << endl;
    }
    cout << "\n\n****************************************" << endl;
    
    
        return 0;
}
