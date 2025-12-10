#include <stdio.h>

int main()
{
    int count, sum, counter;
    printf("Up to which number you want to compute the sum of natural numbers? ");
    scanf("%i", &count);

    sum = 0;

    for (counter = 1; counter <= count; counter++)
    {
        sum = sum + counter;
    }

    printf("The sum of first %i natural numbers is %i.\n", count, sum);

    return 0;
}

