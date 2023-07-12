//
//  main.cpp
//  compound-interest-calculator
//
//  Created by Alvaro Alvarez on 12/07/23.
//

#include <iostream>

using namespace std;

int main() {
//  Var
    string exit = "yes";
    float currentPrincipal = 0, annualAddition = 0, interestRate = 0, futureValue = 0;
    int yearsToGrow = 0;
    
//  Start program
    cout << "Hello, welcome to the compound interest calculator! \nTo begin with, I would like to ask you for some information... \n";
    
//  Continue loop
    while (exit == "yes") {
//      Data
        cout << "\nWhat is your current principal?: $";
        cin >> currentPrincipal;
        cout << "What will be your annual addition?: $";
        cin >> annualAddition;
        cout << "For how many years are you going to do this?: ";
        cin >> yearsToGrow;
        cout << "And finally, how much will the annual interest rate be? (%): ";
        cin >> interestRate;
        
//      Results
        cout << "Making the necessary calculations I can say that your future value will be: " << futureValue << endl;
        
//      Continue?
        cout << "Want to star again? (yes/no): ";
        cin >> exit;
    }
    return 0;
}
