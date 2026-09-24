#include <stdio.h>

int main()
{
    float amount, distance, delivery, total;

    printf("Enter shopping amount: ");
    scanf("%f", &amount);

    printf("Enter distance: ");
    scanf("%f", &distance);

    if (amount <= 0 || distance <= 0)
    {
        printf("Invalid Input");
    }
    else
    {
        if (amount >= 5000)
            delivery = 0;
        else if (distance <= 5)
            delivery = 150;
        else if (distance <= 10)
            delivery = 250;
        else if (distance <= 20)
            delivery = 400;
        else
            delivery = 600;

        total = amount + delivery;

        printf("Shopping Amount = %.2f\n", amount);
        printf("Delivery Charges = %.2f\n", delivery);
        printf("Total = %.2f", total);
    }

    return 0;
}