
class SavingsAccount
{
private:
    double savingsBalance;
    // static double annualInterestRate; nesse caso necessitaria de criar um set para acessar o atributo private do objeto

public:
    SavingsAccount(double savingsBalance);
    ~SavingsAccount();

    static double annualInterestRate;

    double calculateMonthlyInterest();

    void modifyInterestRate(double n);
};
