//Exercises on OOP - Classes and Interfaces
//Made by Daniel Kartin - 20163822
//No stealerino my coderino.

#include <iostream>
#include <stdio.h>

using namespace std;

class CDAccount2 {
private:
  int dollars, cents;
  double interest_rate;
  int term; //Months until maturity
  
public:
  double gibBalance();
  double gibBalanceAtMat();
  double gibInterestRate();
  double gibTerm();
  double fraction(double val);
  double percent(double val);
  void printBalance();
  void printBalanceAtMat();
  void printInterest();
  void printTerm();
  void setBalance();
  void setInterest();
  void setTerm();
  CDAccount2();
  CDAccount2(int dollu, int centsu, double interest, int termerino);
};

double CDAccount2::gibBalance() {
  return dollars + 0.01 * cents;
}

double CDAccount2::gibBalanceAtMat() {
  float bal = dollars + 0.01 * cents;
  for(int i = 0; i < term; i++) {
    bal += bal*interest_rate;
  }
  return bal;
}

double CDAccount2::gibInterestRate() {
  return interest_rate;
}

double CDAccount2::gibTerm() {
  return term;
}

double CDAccount2::fraction(double val) {
  return (val/100);
}
double CDAccount2::percent(double val) {
  return (val*100);
}

void CDAccount2::setBalance() {
  double money;
  cin >> money;
  int dollu = (int)money; // dollars
  dollars = dollu;
  double centsu = money - dollars; // cents
  centsu *= 100;
  cents = centsu;
}

void CDAccount2::setInterest() {
  cin >> interest_rate;
  interest_rate = fraction(interest_rate);
}

void CDAccount2::setTerm() {
  cin >> term;
}

void CDAccount2::printBalance() {
  cout << "Balance: " << dollars + 0.01 * cents << endl;
}

void CDAccount2::printBalanceAtMat() {
  cout << "Balance at maturity: " << gibBalanceAtMat() << endl;
}

void CDAccount2::printInterest() {
  cout << "Interest rate: " << percent(interest_rate) << "%" << endl;
}

void CDAccount2::printTerm() {
  cout << "Terms left on account: " << term << endl;
}


CDAccount2::CDAccount2(void) {
  cout << "Account created" << endl;
}

CDAccount2::CDAccount2(int dollu, int centsu, double interest, int termerino) {
  dollars = dollu;
  cents = centsu;
  interest_rate = interest;
  term = termerino;
  cout << "Account created" << endl;
  //cout << "Balance: " << balance << endl;
  //cout << "Interest Rate: " << interest << endl;
  //cout << "Term: " << term << endl;
}