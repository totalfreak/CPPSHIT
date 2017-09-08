//Exercises on OOP - Classes and Interfaces
//Made by Daniel Kartin - 20163822
//No stealerino my coderino.
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "CDAccount.cpp"
#include "CDAccount2.cpp"

using namespace std;

void useExercise1();
void useExercise2();

int main() {
    cout << "Do you want to use CDAccount(Exercise1), or CDAccount2(Exercise 2)? (1/2)\n" << "1: CDAccount\n2: CDAccount2" << endl;
    char answer;
    cin >> answer;
    if(answer == '1') {
        useExercise1();
    } else if(answer == '2') {
        useExercise2();
    }
 return 0;   
}

void useExercise1() {
    double money, inter;
    int termerino;

    cout << "How much money you want on said account?" << endl;
    cin >> money;
    cout << money << endl;
    cout << "How high should the interest rate be?" << endl;
    cin >> inter;
    cout << "How long should the account take to mature?" << endl;
    cin >> termerino;
    CDAccount account(money, inter, termerino);

    cout << "Balance: " << account.gibBalance() << endl;
    cout << "Balance when mature: " << account.gibBalanceAtMat() << endl;
    cout << "Interest rate: " << account.gibInterestRate() << endl;
    cout << "Term left on account: " << account.gibTerm() << endl << endl;

    cout << "Set a new term for the account" << endl;
    account.setTerm();
    account.printTerm();
}

void useExercise2() {
    double money, inter;
    int termerino;
    CDAccount2 accounto(0,0,0,0);

    cout << "How much money you want on said account?" << endl;
    accounto.setBalance();
    cout << "How high should the interest rate be?" << endl;
    accounto.setInterest();
    cout << "How long should the account take to mature?" << endl;
    accounto.setTerm();

    accounto.printBalance();
    accounto.printBalanceAtMat();
    accounto.printInterest();
    accounto.printTerm();
}