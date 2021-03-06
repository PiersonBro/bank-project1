///////////////////////
// name: Karen and Ezekiel
// last date modified: 2/22/2019
////////////////////////
#include "Bank.h"
#include "SavingsAccount.h"
#include "CheckingsAccount.h"

Bank::Bank() {
    accVector = vector<Account *>();
}

void Bank::addAccount(Account * account) {
    accVector.push_back(account);
}

Account * Bank::createAccount(Customer * customer, double initialDeposit, bool savings) {
    if (savings) {
         Account * acc = new SavingsAccount(customer, initialDeposit, customer->getAccountNum());
        addAccount(acc);
        return acc;
    } else {
        Account * acc = new CheckingsAccount(customer, initialDeposit, customer->getAccountNum());
        addAccount(acc);
        return acc;
    }
  
}

double Bank::MakeDeposit(double amount, Account * account) {
    // I consulted https://docs.microsoft.com/en-us/cpp/cpp/try-throw-and-catch-statements-cpp?view=vs-2017
    // to get the throw syntax right.
    if (amount <= 0) {
        throw domain_error("cannot deposit a nonpositive number");
    }
    Customer * customer = account->getCustomer();
    Transaction t(customer->getAccountNum(), "deposit", amount, "");
    account->deposit(t);
    return account->getBalance();
}

double Bank::MakeWithdrawal(double amount, Account * account) {
     if (amount <= 0) {
        throw domain_error("cannot withdraw a nonpositive number");
    }
    Customer * customer = account->getCustomer();
    Transaction t(customer->getAccountNum(), "withdrawal", amount, "");
    account->withdraw(t);
    return account->getBalance();
}

Account * Bank::GetAccount(Customer * customer, bool savings) {
    for (int i = 0; i < accVector.size(); i++) {
        Account * account = accVector[i];
        bool isSavings = false;
        if (dynamic_cast<SavingsAccount *>(account)) {
            isSavings = true;
        }
        if (account->getCustomer() == customer && savings == isSavings) {
            return account;
        }
    }
    throw invalid_argument("Customer is not a registered with this bank");
}
