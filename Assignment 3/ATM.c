#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int authentication()
{
    char username[30];
    char pin[10];
    int attempts;

    for (attempts=1; attempts<=3; attempts++)
    {
       printf("\nAttempt %d of 3\n", attempts);

       printf("Enter username:");
       scanf("%29s",username);

       printf("\nEnter PIN:");
       scanf("%9s", pin);

       if (strcmp(username,"Raven")==0 && strcmp(pin,"0123")==0)
       {
           printf("Login successful!\n");
           return 1;
       }
       printf("Incorrect credentials!\n");
    }
    printf("Maximum number of attempts reached!\n");
    return 0;
}

void showMenu()
{
    printf("\n====== ATM MENU ======\n");
    printf("1. Check balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

double deposit(double balance)
{
    double amount;
     printf("Enter amount you wish to deposit:");
     scanf("%lf",&amount);

     if (amount > 0)
     {
         balance= balance + amount;
         printf("\nDeposit successful!\n");
         printf("Your new balance is Ksh %.2f", balance);
     }
     else
     {
         printf("\nInvalid amount! Amount should be greater than 0!\n");
     }
     return balance;
}

double withdraw(double balance)
{
    double amount;
    printf("Enter amount you wish to withdraw:");
    scanf("%lf",&amount);

    if (amount > 0 && amount <= balance)
    {
        balance= balance - amount;
        printf("\nWithdraw successful!\n");
        printf("Your new balance is Ksh %.2f", balance);
    }
    else if (amount > balance)
    {
        printf("\nYou have insufficient funds! Your balance is only Ksh %.2f\n", balance);
    }
    else
    {
        printf("\nInvalid amount! Amount should be greater than 0!\n");
    }
    return balance;
}

void checkBalance(double balance)
{
    printf("\nChecking balance...\n");
    printf("Your balance is Ksh %.2f", balance);
}

int main()
{
    if (authentication()==1)
    {
        printf("Welcome to the ATM\n");
        double balance = 5000.00;
        int choice = 0;

        while (choice != 4)
        {
            showMenu();
            printf("Enter your choice:");
            scanf("%d", &choice);
            if (choice == 1)
            {
                checkBalance(balance);
            }
            else if (choice == 2)
            {
                balance =deposit(balance);
            }
            else if (choice == 3)
            {
                balance =withdraw(balance);
            }
            else if (choice == 4)
            {
                printf("Thank you for using our ATM!\n");
            }
            else
            {
                printf("Invalid choice!\n");
            }
        }

    }
    else
    {
        printf("Access denied. Exiting...\n");
    }
    return 0;
}
