#include <iostream>
#include "account.h"


int main() {
    Account SG(2000);
    Account BPCE(5000);
    Account CEPAC(9000);

    SG.deposit(150);
    BPCE.checkBalance();
    SG.checkBalance();
    CEPAC.withdraw(700);
    SG.withdraw(1200);
    BPCE.deposit(120);

    return 0;
}
