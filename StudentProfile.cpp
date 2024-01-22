//
//  main.cpp
//  Mod9Lab1
//  Student Structure Program
//
//  Created by Claire Dano on 11/29/22.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//creating structure
struct studentProfile
{
    //First Name
    string firstName;
    //Last Name
    string lastName;
    //GPA
    double gpa;
    //Major
    string major;
};

//creating prototype -- must be after the struct
void printStudent(studentProfile);

int main(){
    
    studentProfile student;
   //Write a program that has a student structure. The student structure will have the following attributes:
    
    
    //The program will prompt the user for the variable values
    //input:
    //First Name
    cout << "Please Enter the Student's First Name: " << endl;
    cin >> student.firstName;
    //Last Name
    cout << "Please Enter the Student's Last Name: " << endl;
    cin >> student.lastName;
    //GPA
    cout << "Please Enter " << student.firstName << " " << student.lastName << "'s GPA:" << endl;
    cin >> student.gpa;
    //Major
    cout << "Please Enter " << student.firstName << " " << student.lastName << "'s Major:" << endl;
    cin.ignore();
    getline(cin,student.major);
    
// output
    cout << "\n**************************" << endl;
    cout << "     Student Profile      " << endl;
    cout << "--------------------------" << endl;
    printStudent(student);
    cout << "**************************" << endl;
    return 0;
}

/*
 *****************
 DEFINE FUNCTIONS
 *****************
 */

//output the student data as follows (please use a function and pass the struct as a parameter to the function):
void printStudent(studentProfile pStudent)
{
    
    cout << "First Name: " << pStudent.firstName << endl;
    cout << "Last Name: " << pStudent.lastName << endl;
    cout << "GPA: " << pStudent.gpa << endl;
    cout << "Major: " << pStudent.major << endl;
    
}
