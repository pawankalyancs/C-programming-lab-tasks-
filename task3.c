#include <stdio.h>

int main()
{
    float balance = 50000, amount;
    int choice;

    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter amount: ");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter amount: ");
            scanf("%f", &amount);

            if (amount <= balance)
            {
                balance = balance - amount;
                printf("Balance = %.2f", balance);
            }
            else
            {
                printf("Insufficient Balance");
            }
            break;

        case 4:
            printf("Thank you for using the ATM");
            break;

        default:
            printf("Invalid Option");
    }

    return 0;
}