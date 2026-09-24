#include <stdio.h>

int main()
{
    float bill, discount, final;
    int member;

    printf("Enter bill: ");
    scanf("%f", &bill);

    printf("Enter member (1=Yes, 0=No): ");
    scanf("%d", &member);

    if (bill >= 5000)
    {
        if (member == 1)
            discount = bill * 20 / 100;
        else
            discount = bill * 10 / 100;
    }
    else
    {
        if (member == 1)
            discount = bill * 10 / 100;
        else
            discount = 0;
    }

    final = bill - discount;

    printf("Original Bill = %.2f\n", bill);
    printf("Discount = %.2f\n", discount);
    printf("Final Bill = %.2f", final);

    return 0;
}