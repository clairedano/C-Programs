//
//  main.cpp
//  Mod4Lab3
//
//  Created by Claire Dano on 10/4/22.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


int main() {

    
    // create some varibles
    string myOutput;
    string eventName;
    int numberOfRooms;
    double costOfEachRoom;
    int numberOfDaysBooked;
    double subAllRoomsNoDiscount;
    double subCostWithDiscount;
    double totalTax;
    double totalAmountDue;
    double costOfOneRoomWithDiscount;
    float tax;
    float discount;
    float discountApplied;
    
    
    
    //The cost of renting a room at the Alamo hotel is over $100.00 per night. For special occasions, such as a wedding or conference, the hotel offers a special discount as follows:
    
    //If the number of rooms booked is at least 3 days, the discount is 10%;
    
    //If the number of rooms booked is at least 5 days, the discount is 20%;
    
   // If the number of rooms booked is at least 10 days, the discount is 30%.
    
    //There is an 8% sales tax applied to the total charge
    
    //Write a program that prompts the user to enter the number of rooms booked, the number of days the rooms are booked. the program will output to the user a final bill
    
    
   // Input:
    //Event Name
    cout << "Welcome to the Alamo Hotel! \n\nPlease Enter the Event Name: " << endl;
    getline(cin, eventName);
    //Number of Rooms (if user enters less than 3 rooms - set room number to 3)
    cout << "Please Enter the Number of Rooms for the " << eventName << endl;
    cin >> numberOfRooms;
    
    if (numberOfRooms < 3)
    {
        numberOfRooms = 3;
    }
    //Cost of each Room (if user enters number less than 100.00 - set the room cost to 100.00)
    cout << "Please Enter the Cost of Each Room: " << endl;
    cin >> costOfEachRoom;
    
    if ( costOfEachRoom < 100.00)
    {
        costOfEachRoom = 100.00;
    }
    
    //Number of Days to book the rooms
    cout << "Please Enter the Number of Days you Would like to Book " << numberOfRooms << " rooms? " << endl;
    cin >> numberOfDaysBooked;
    
    
    //Process:
    
    //Subtotal of all room costs without discount
    subAllRoomsNoDiscount = ( numberOfRooms * costOfEachRoom) * (numberOfDaysBooked);
    
    //Discount:
    
    //If the number of rooms booked is at least 3 days, the discount is 10%;
    if (numberOfDaysBooked >= 10)
    {
        subCostWithDiscount = subAllRoomsNoDiscount * 0.7;
        discount = 0.7;
        discountApplied = 30;
    }
    //If the number of rooms booked is at least 5 days, the discount is 20%;
    else if ( numberOfDaysBooked >= 5)
    {
        subCostWithDiscount = subAllRoomsNoDiscount * 0.8;
        discount = 0.8;
        discountApplied = 20;
    }
        
   // If the number of rooms booked is at least 10 days, the discount is 30%.
    else
    {
        subCostWithDiscount = subAllRoomsNoDiscount * 0.9;
        discount = 0.9;
        discountApplied = 10;
    }

   // Subtotal of all room costs with discount
    
   // Total Tax (computed on discounted subtotal)
    totalTax = subCostWithDiscount * 0.08;
    //Total Amount due - after discount
    totalAmountDue = subCostWithDiscount + totalTax;
    
    //The program outputs
   
    cout << fixed << showpoint << setprecision(2);
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    //Event Name
    cout << "\n\nRecepit for the " << eventName << ": " << endl;
    //The Cost of renting one room without discount
    cout << "\nCost of Renting One Room Without Discount: " << right << setw(9) << setfill('.') << right << "$" << costOfEachRoom << endl;
    //The Cost of all rooms without discount
    cout << "Cost of All Rooms Without Discount: " << right << setw(15) << setfill('.')
    << right << "$" << subAllRoomsNoDiscount << endl;
    
    //The Cost of renting one room with discount
    costOfOneRoomWithDiscount = (costOfEachRoom * discount);
    cout << "Cost of Renting One Room with Discount: " << right << setw(13) << setfill('.') << right << "$" << costOfOneRoomWithDiscount << endl;
    //The Cost of all rooms with discount
    cout<< "Cost of All Rooms with Discount: " << right << setw(18) << setfill('.') << right << "$"
    << subCostWithDiscount << endl;
    //Total Discount applied
   
        cout << "\nTotal Discount Applied " << discountApplied <<  "%" << endl;
   
    //Tax
    cout << "\nAdditional 8% Tax" << endl;
    tax = 0.08;
    //Total Owed by customer for all rooms
    totalAmountDue = (subCostWithDiscount * tax) + (subCostWithDiscount);
    cout << "\nTotal Amount Due: " << right << setw(33) << setfill('.') << right << "$" << totalAmountDue << endl;
    cout << "\n-----------------------------------------------------------------" << endl;
    cout << "\nThank You for Your Purchase! Enjoy Your Stay at the Alamo Hotel!" << endl;
    cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    
    
    return 0;
}

