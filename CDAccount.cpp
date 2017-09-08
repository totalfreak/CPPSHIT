//Exercises on OOP - Classes and Interfaces
//Made by Daniel Kartin - 20163822
//No stealerino my coderino.
#include <iostream>
#include <stdio.h>

using namespace std;

class CDAccount {
private:
  double balance;
  double interest_rate;
  int term; //Months until maturity
  
public:
  int shit;
  double gibBalance();
  double gibBalanceAtMat();
  double gibInterestRate();
  double gibTerm();
  void printBalance();
  void printBalanceAtMat();
  void printInterest();
  void printTerm();
  void setBalance();
  void setInterest();
  void setTerm();
  CDAccount();
  CDAccount(double bal, double interest, int termerino);
};

double CDAccount::gibBalance() {
  return balance;
}

double CDAccount::gibBalanceAtMat() {
  float bal = balance;
  for(int i = 0; i < term; i++) {
    bal += bal*interest_rate;
  }
  return bal;
}

double CDAccount::gibInterestRate() {
  return interest_rate;
}

double CDAccount::gibTerm() {
  return term;
}

void CDAccount::setBalance() {
  cin >> balance;
}

void CDAccount::setInterest() {
  cin >> interest_rate;
}

void CDAccount::setTerm() {
  cin >> term;
}

void CDAccount::printBalance() {
  cout << "Balance: " << balance << endl;
}

void CDAccount::printBalanceAtMat() {
  cout << "Balance at maturity: " << gibBalanceAtMat() << endl;
}

void CDAccount::printInterest() {
  cout << "Interest rate: " << interest_rate << endl;
}

void CDAccount::printTerm() {
  cout << "Terms left on account: " << term << endl;
}


CDAccount::CDAccount(void) {
  cout << "Account created" << endl;
}

CDAccount::CDAccount(double bal, double interest, int termerino) {
  balance = bal;
  interest_rate = interest;
  term = termerino;
  cout << "Account created" << endl;
  //cout << "Balance: " << balance << endl;
  //cout << "Interest Rate: " << interest << endl;
  //cout << "Term: " << term << endl;
}