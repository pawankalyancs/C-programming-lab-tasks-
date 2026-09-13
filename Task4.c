#include <stdio.h>

int main()
{
    int rating, years;

    printf("Enter performance rating: ");
    scanf("%d", &rating);

    printf("Enter years of service: ");
    scanf("%d", &years);

    if (rating == 5 && years >= 3)
    {
        printf("Excellent Bonus");
    }
    else if (rating == 4 && years >= 2)
    {
        printf("Good Bonus");
    }
    else if (rating == 3 && years >= 1)
    {
        printf("Basic Bonus");
    }
    else
    {
        printf("No Bonus");
    }

    return 0;
}