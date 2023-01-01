#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"

int main(void)
{
    SavingsAccount saver1 = SavingsAccount(2000);
    SavingsAccount saver2 = SavingsAccount(3000);

    std::cout << "1° mes, juros anual " << SavingsAccount::annualInterestRate << "%: " << std::endl;

    std::cout << std::fixed << std::setprecision(2) << saver1.calculateMonthlyInterest() << std::endl;
    std::cout << std::fixed << std::setprecision(2) << saver2.calculateMonthlyInterest() << std::endl;

    SavingsAccount::annualInterestRate = 3.00; // usado em caso de variavel de classe publica, se fosse private usaria o metodo set(modifyInterestRate)

    std::cout << "2° mes, juros anual  " << SavingsAccount::annualInterestRate << "%: " << std::endl;

    std::cout << std::fixed << std::setprecision(2) << saver1.calculateMonthlyInterest() << std::endl;
    std::cout << std::fixed << std::setprecision(2) << saver2.calculateMonthlyInterest() << std::endl;

    SavingsAccount::annualInterestRate = 4.00;

    std::cout << "3° mes, juros anual " << SavingsAccount::annualInterestRate << "%: " << std::endl;

    std::cout << std::fixed << std::setprecision(2) << saver1.calculateMonthlyInterest() << std::endl;
    std::cout << std::fixed << std::setprecision(2) << saver2.calculateMonthlyInterest() << std::endl;
}