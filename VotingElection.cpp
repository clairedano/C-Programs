//
//  main.cpp
//  Mod8Lab3
//
//  Created by Claire Dano on 11/22/22.
//

#include <iostream>
using namespace std;
/*
 ********************
 CREATING PROTOYPES
 ********************
 */

const int ARRAY_SIZE = 5;
void printHeader();
void printCandidates(string[], int[]);
int totalVotes(int[]);
int getLargesNumberIndex(int[]);

//MAIN

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    
   //creating variables
    string candidateNames[ARRAY_SIZE];
    int candidateVotes[ARRAY_SIZE];
    int myWinnerIndex = 0;
    
   printHeader();
    cout << "\nPlease Enter the Last Name's of the 5 Canadiates that are running in the election:" << endl;
    
    //allows the user to enter the last names of five candidates in a local election
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter Name " << i + 1 << ": " << candidateNames[i] << endl;
        cin >> candidateNames[i];
        // allows the user to enter the number of votes received by each candidate.
        cout << "Please Enter the Number of Votes received by " << candidateNames[i] << ": " << endl;
        cin >> candidateVotes[i];
    }

    
    //output
    //The program should then output each candidate’s name, the number of votes received, and the winner
    printHeader();
    cout << "Election Results!" << endl;
    cout << "------------------\n" << endl;
  
    cout << "Candidate" << setw(17) << right << "Number of Votes" << setw(19) << "% of Total Votes" << endl;
    printCandidates(candidateNames, candidateVotes);
    
    myWinnerIndex = getLargesNumberIndex(candidateVotes);
    cout << "\nThe Winner of the Election is " << candidateNames[myWinnerIndex] << "!" << endl;
    
    return 0;
}

//END OF MAIN

/*
 *********************
 DEFINING FUNCTIONS
 *********************
 */

void printHeader()
{
    cout << "****************************************" << endl;
    cout << "  Welcome to the Programming Election!  " << endl;
    cout << "****************************************" << endl;
}
void printCandidates(string pNames[], int pVotes[])
{
    
    double candidatePercent = 0.0;
    int totalAllVotes = totalVotes(pVotes);
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        
        candidatePercent = static_cast<double>(pVotes[i]) / totalAllVotes * 100;
        cout << pNames[i] << setw(17) << right << pVotes[i] << setw(17) << right << fixed << showpoint << setprecision(2) << candidatePercent << "%" << endl;
        
    }
}
int totalVotes(int pVotes[])
{
    int myReturn = 0;
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        myReturn += pVotes[i];
    }
    return myReturn;
}

int getLargesNumberIndex(int pVotes[])
{
    int myReturnIndex = 0;
    int largestNumber = 0;
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if(pVotes[i] > largestNumber)
        {
            largestNumber = pVotes[i];
            myReturnIndex = i;
            
        }
    }
    return myReturnIndex;
}
