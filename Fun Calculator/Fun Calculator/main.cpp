//
//  main.cpp
//  Fun Calculator
//
//  Program Layout:
//  https://docs.google.com/document/d/1bDXk8jvsBlpbpl7KnP9uO9c56Let5gQyE3IMM6MalQ8/edit
//  Created by Alex Lai on 12/18/20.
//

#include "NormalCalculator.h"
#include "EquationCalculator.h";
#include <iostream>
using namespace std;

int main() {
    cout << "Fun Calculator Program" << endl;
    cout << "Features a Normal Calculator and an Equational Calculator, which one would you like to use? Type 1 for normal calculator, Type 2 for the equational calculator, Type 0 to quit." << endl;
    int input;
     //If the user enters something that is not an Integer between 0 and 2, it will go into an error state.
    while(!(cin >> input) || input < 0 || input > 2){
        cout << "Invalid input. Type 1 for normal calculator, Type 2 for the equational calculator, Type 0 to quit.";
        cin.clear(); //Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Discard everything the user inputted and try again.
    }
    
    
    
    switch(input){
        case 0:
            cout << ("Exitted Program.");
            exit(EXIT_SUCCESS);
        case 1:
            cout << "Fun Calculator, Type: " << endl;
            cout << "Has the ability to add, subtract, divide, multiply, power, log, factorial, or display history.";
            break;
        case 2:
            cout << "Equational Calculator" << endl;
            cout << ""
            //do stuff
            break;
    }
    
    //string to_calculate = "";
    //cin >> to_calculate;
            
    }
