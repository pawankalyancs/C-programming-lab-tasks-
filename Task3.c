#include <stdio.h>

int main()
{
    int marks = 75;

    if (marks >= 80)
    {
        printf("Grade A");
    }
    else if (marks >= 70)
    {
        printf("Grade B");
    }
    else if (marks >= 60)
    {
        printf("Grade C");
    }
    else if (marks >= 50)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}