#include <stdio.h>


int main() {
   int acctNumber;
   float balance, totalCharge, totalCredit, allowedCredit;
   
   printf("Enter account number: ");
   scanf("%d", &acctNumber);
   printf("\nEnter beginning balance: ");
   scanf("%f", &balance);
   printf("\nEnter total charges: ");
   scanf("%f", &totalCharge);
   printf("\nEnter total credits: ");
   scanf("%f", &totalCredit);
   printf("\nEnter allowed credit: ");
   scanf("%f", &allowedCredit);
   
   printf("Account:  %d", acctNumber);
   printf("\nCredit Limit:  %.2f", allowedCredit);
   printf("\nBalance:  %.2f", (balance + totalCredit));
   if((balance + totalCredit) > allowedCredit)
      printf("\nCredit limit exceeded.");
   
   return 0;
}