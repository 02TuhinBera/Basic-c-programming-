#include<stdio.h>
#include<stRING.h>
struct BankAccount {
  int accountNumber;
  char accountHolderName[50];
  float balance;
};

int main(){
    struct BankAccount myAccount;
    myAccount.accountNumber = 12345;
    strcpy(myAccount.accountHolderName, "Nilu GANDU");
    myAccount.balance = 1000.0;
    printf("Account Number: %d\n", myAccount.accountNumber);
    printf("Account Holder Name: %s\n", myAccount.accountHolderName);
    printf("Balance: $%.2f\n", myAccount.balance);
    return 0;
}