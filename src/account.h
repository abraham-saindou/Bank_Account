//
// Created by kubun on 25/07/23.
//

#ifndef BANK_ACCOUNT_ACCOUNT_H
#define BANK_ACCOUNT_ACCOUNT_H

#include <iostream>
#include <cassert>
#include <cmath>

class Account {
private :
    long accNumber;
    double balance;
    int base;

public :
    explicit Account (double bal);
    ~Account();
    void checkBalance()const;
    void deposit(double amount);
    void withdraw(double amount);
    int getBase();
};


#endif //BANK_ACCOUNT_ACCOUNT_H
