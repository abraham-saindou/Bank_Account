//
// Created by kubun on 25/07/23.
//

#include "account.h"

Account::Account(double bal)
        :balance{bal}
{
    if (bal < 0.0)
    {
        std::cout<< "Balance is negative; program terminates.";
        assert(false);
    }
    int number = getBase();
    number++;
    accNumber= 100000 + number;

    std::cout<<"Account"<< accNumber<<" is opened. "<<"\n\n";
    std::cout<<"Balance $ "<< balance<< "\n\n\n\n";
}

Account::~Account()
{
    std::cout<<"Account #: "<<accNumber<<" is closed."<<"\n\n";
    std::cout<<"$"<< balance<<" was sent to the customer.\n\n\n\n";
};

void Account::checkBalance()const
{
    std::cout<<"Account# : "<< accNumber<<"\n\n ";
    std::cout<<"Transaction : balance check \n\n";
    std::cout<<"Balance : $ "<<balance<< " \n\n\n\n";
} ;

void Account::deposit(double amount)
{
    if(amount > 0.0)
    {
        balance += amount;
        std::cout<<"Account# : "<< accNumber<<"\n\n";
        std::cout<<"Transaction : deposit of $ "<<amount<< "\n\n";
        std::cout<<"New balance : $"<<balance<<" \n\n\n\n";
    }
    else
    {
        std::cout<<"Transaction aborted. \n\n";
    }
}

void Account::withdraw(double amount)
{
    if(amount > balance)
    {
        amount = balance;
    }
    balance -= amount;
    std::cout<<"Account# : "<< accNumber<<"\n\n";
    std::cout<<"Transaction : withdraw of $"<<amount<< "\n\n";
    std::cout<<"New balance : $"<<balance<<" \n\n\n\n";

}

int Account::getBase() {
    return base;
}