//
//  main.cpp
//  Mod6Lab4
//
//  Created by Claire Dano on 11/4/22.
//


// Create a menu program that allows a user to select the following Options form a Menu


#include <iostream>
using namespace std;
int addNumbers(int, int);
int addNumbers(int, int, int);
double addNumbers(double, double);
double addNumbers(double, double, double);
//creating protoypes


/*
 ***********
    MAIN
 ***********
 */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main() {
    bool doAgain = true;
    int userInput = 0;
    int intOne;
    int intTwo;
    int intThree;
    double doubleOne;
    double doubleTwo;
    double doubleThree;
    
    while(doAgain)
    {
        //Input:
        //User Menu Selection
        cout << "Welcome to the Programming 1 Calculator - Please Enter Your Selection:" << endl;
        //Prompt and output from user selection
        cout << " \t 1) Add Two Integers" << endl;
        cout << " \t 2) Add Three Integers" << endl;
        cout << "\t 3) Add Two Double Numbers" << endl;
        cout << "\t 4) Add Three Double Numbers" << endl;
        cout << " \t 5) Exit the Program" << endl;
        cin >> userInput;
        
        switch (userInput) {
    
            case 1:
                cout << "Adding Two Integers: \nPlease Enter Your First Integer: " << endl;
                cin >> intOne;
                cout << "Please Enter Your Second Integer:" << endl;
                cin >> intTwo;
                cout << "Your Result: " << addNumbers(intOne, intTwo) << endl;
                break;
            
            case 2:
                cout << "Adding Three Integers: \nPlease Enter Your First Integer:" << endl;
                cin >> intOne;
                cout << "Please Enter Your Second Integer: " << endl;
                cin >> intTwo;
                cout << "Please Enter Your Third Integer: " << endl;
                cin >> intThree;
                cout << "Your Result: " << addNumbers(intOne, intTwo, intThree) << endl;
                break;
                
            case 3:
                cout << "Adding Two Double Numbers: \nPlease Enter Your First DOUBLE Number: " << endl;
                cin >> doubleOne;
                cout << "Please Enter Your second DOUBLE Number: " << endl;
                cin >> doubleTwo;
                cout << "Your Result: " << addNumbers(doubleOne, doubleTwo) << endl;
                break;
                
            case 4:
                cout << "Add Three Double Numbers Result: \nPlease Enter Your First DOUBLE number:" << endl;
                cin >> doubleOne;
                cout << "Please Enter Your second DOUBLE Number: " << endl;
                cin >> doubleTwo;
                cout << "Please Enter Your third DOUBLE Number: " << endl;
                cin >> doubleThree;
                cout << "Your Result: " << addNumbers(doubleOne, doubleTwo, doubleThree) << endl;
                break;
                //Prompt user to make another Menu selection of 5 to quit
            case 5:
                doAgain = false;
                break;
                
        }
        
    }

    //Please use the same name for ALL the  add functions (overload the functions). You will also need to create a function to display the Menu (choices) to the user.
    return 0;
}

/*
 *****************
 DEFINE FUNCTIONS
 *****************
 */

//Add two integer numbers function
int addNumbers(int pOne, int pTwo)
{
    return pOne + pTwo;
}
//Add three integer numbers function
int addNumbers(int pOne, int pTwo, int pThree)
{
    return pOne + pTwo + pThree;
}
//Add two double numbers function
double addNumbers(double pOne, double pTwo)
{
    return pOne + pTwo;
}
//Add three double numbers function
double addNumbers(double pOne, double pTwo, double pThree)
{
    return pOne + pTwo + pThree;
}
