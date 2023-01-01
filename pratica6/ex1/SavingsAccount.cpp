#include <iostream>
#include "SavingsAccount.h"

double SavingsAccount::annualInterestRate = 1.00;

SavingsAccount::SavingsAccount(double savingsBalance)
{
    this->savingsBalance = savingsBalance;
}

SavingsAccount::~SavingsAccount(){};

double SavingsAccount::calculateMonthlyInterest()
{
    double j = (savingsBalance * annualInterestRate) / 12;
    savingsBalance += j;
    return j;
}

void SavingsAccount::modifyInterestRate(double n) // metodo set do annualInterestRate caso ele seja privado
{
    this->annualInterestRate = n;
}
