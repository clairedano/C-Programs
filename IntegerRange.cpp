//
//  main.cpp
//  Mod5Lab2
//
//  Created by Claire Dano on 10/18/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //intialized variables
    int firstNum = 0;
    int secondNum = 0;
    int oddTotal = 0;
    int evenTotal = 0;
    
    //prompt user for first number
    cout << "Please Enter Your First Number):" << endl;
    cin >> firstNum;
    //prompt user for second number
    cout<< "Please Enter Your Second Number (Must Be LARGER Than Your First Number:" << endl;
    cin >> secondNum;
    
    //if first number is less than or equal to second number
    while (firstNum >= secondNum)
    {
        cout << "Oh no, Error! \n\nPlease Enter a Smaller Integer for Your First Number:" << endl;
        cin >> firstNum;
    }
    cout << "------------------------------------------------------------" << endl;
    cout << "\nYour Range Results!"<< endl;
    cout << "Low Range: " << firstNum << endl;
    cout << "High Range: " << secondNum << endl;
    
    //output for odd numbers
    cout << "\nEven Numbers: ";
    for(int i = firstNum; i <= secondNum; i++)
    {
        if (i % 2 == 0)
        {
            //cout << "Your Even Numbers: " << counter <<  " ";
            cout << i << " ";
            evenTotal = evenTotal + i;
        }
       
        
    }
    
    
    // output for even numbers
    cout << "\nOdd Numbers: ";
    for(int i = firstNum; i <= secondNum; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << " ";
            oddTotal = oddTotal + i;
        }
    }
    
    cout << "\n\nSum of All Even Numbers: " << evenTotal << endl;
    cout << "Sum of All Odd Numbers: " << oddTotal << endl;
    
    
    cout << "\n------------------------------------------------------------" << endl;
    return 0;
}
