#include <stdio.h>

int main()
{
    int count, counter;

    printf("How many even numbers you want to print? ");
    scanf("%i", &count);

    printf("The first %i even numbers are ", count);

    for (counter = 0; counter < 2 * (count - 1); counter = counter + 2)
    {
        printf("%i, ", counter);
    }

    printf("%i.\n", counter);
    
    return 0;
}
