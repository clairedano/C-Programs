//
//  main.cpp
//  Mod5Lab3
//
//  Created by Claire Dano on 10/20/22.
//

#include <iostream>
using namespace std;
int main() {
    
    int length;
    int height;
    char character;
  
    //Create a program "Box" that will ask the user for a character, as well as the length and Height of the box and output to the terminal the Box information and character based depiction of the box. The program will tell the user the Length and Width of the box , indicate if it is a rectangle  or a square, and output the box using the character on the terminal.
    
    cout << "Please Enter Your Desired Length for Your Box:" << endl;
    cin >> length;
    //Height of Box
    cout << "Please Enter Your Desired Height for Your Box:" << endl;
    cin >> height;
    //Character used for visual box display
    cout << "Please Enter Your Desired Character for Your Box:" << endl;
    cin >> character;
    
    
    //Output:
    cout << "\n\n----------------------------------------------------------" << endl;
    cout << "\nYou Box Results!" << endl;
    //Box Length
    cout << "\nBox Length = " << length << endl;
    //Box Height
    cout << "Box Height = " << height << endl;
    //Message to the user that the box is either a rectangle or a square
    
        if (length == height)
        {
            cout << "Your Box is a Sqaure!" << endl;
        }
        else if (length > height)
        {
            cout << "Your Box is a Rectangle!" << endl;
        }
        if (length < height)
        {
            cout << "Your Box is a Rectangle!" << endl;
        }
        
        //Visual Representation of the Box using the user identified character
    
        for(int row = 0; row < height; row++)
        {
            for (int col = 0; col < length; col++)
            {
                cout << character << " ";
            }
            cout << endl;
        }
    cout << "\n\n----------------------------------------------------------" << endl;

    
    return 0;
}
