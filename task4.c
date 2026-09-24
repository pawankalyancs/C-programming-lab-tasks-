#include <stdio.h>

int main()
{
    int category, item;

    printf("1. Fast Food\n");
    printf("2. Pakistani Food\n");
    printf("3. Drinks\n");

    printf("Enter category: ");
    scanf("%d", &category);

    switch(category)
    {
        case 1:
            printf("1. Burger\n");
            printf("2. Pizza\n");
            printf("3. Fries\n");

            printf("Enter item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1: printf("You selected: Burger"); break;
                case 2: printf("You selected: Pizza"); break;
                case 3: printf("You selected: Fries"); break;
                default: printf("Invalid Item Choice");
            }
            break;

        case 2:
            printf("1. Biryani\n");
            printf("2. Karahi\n");
            printf("3. Nihari\n");

            printf("Enter item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1: printf("You selected: Biryani"); break;
                case 2: printf("You selected: Karahi"); break;
                case 3: printf("You selected: Nihari"); break;
                default: printf("Invalid Item Choice");
            }
            break;

        case 3:
            printf("1. Coke\n");
            printf("2. Pepsi\n");
            printf("3. Juice\n");

            printf("Enter item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1: printf("You selected: Coke"); break;
                case 2: printf("You selected: Pepsi"); break;
                case 3: printf("You selected: Juice"); break;
                default: printf("Invalid Item Choice");
            }
            break;

        default:
            printf("Invalid Category Choice");
    }

    return 0;
}