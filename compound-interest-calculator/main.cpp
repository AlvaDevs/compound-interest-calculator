//
//  main.cpp
//  compound-interest-calculator
//
//  Created by Alvaro Alvarez on 12/07/23.
//

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

// Function
double compoundInterestCalculator(double principal, double addition, double interest, int years){
    double result = principal * pow(1 + (interest / 100), years);
    result += addition * (pow(1 + (interest / 100), years) - 1) / (interest / 100);
    
    return result;
}

int main() {
//  Var
    string continu3 = "no";
    
//  Start program
    cout << "Hello, welcome to the compound interest calculator! \nTo begin with, I would like to ask you for some information... \n";
    
//  Continue loop
    do {
        
//      Var in loop
        double currentPrincipal = 0, annualAddition = -1, interestRate = 0;
        int yearsToGrow = 0;
//      Data
        cout << endl;
        while(currentPrincipal <= 0) {
            cout << "What is your current principal?: $";
            cin >> currentPrincipal;
        }
        while(annualAddition < 0) {
            cout << "What will be your annual addition?: $";
            cin >> annualAddition;
        }
        while(yearsToGrow <= 0) {
            cout << "For how many years are you going to do this?: ";
            cin >> yearsToGrow;
        }
        while(interestRate <= 0) {
            cout << "And finally, how much will the annual interest rate be?(%): ";
            cin >> interestRate;
        }
        
//      Results
        double futureValue = compoundInterestCalculator(currentPrincipal, annualAddition, interestRate, yearsToGrow);
        cout.imbue(locale("en_US.UTF-8"));
        cout << "Making the necessary calculations I can say that your future value in " << yearsToGrow <<" years will be: $" << fixed << setprecision(2) << showpoint << put_money(futureValue * 100, true) << endl;
        
//      Continue?
        cout << "Want to start again? (yes/no): ";
        cin >> continu3;
    } while (continu3 == "yes");

    return 0;
}
