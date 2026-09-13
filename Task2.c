#include <stdio.h>

int main()
{
    float balance, withdrawal;

    printf("Enter balance: ");
    scanf("%f", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawal);

    if (withdrawal > 0 && withdrawal <= balance)
    {
        printf("Withdrawal Approved");
    }
    else
    {
        printf("Withdrawal Denied");
    }

    return 0;
}